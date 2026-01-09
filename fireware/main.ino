// ...existing code...
/*
  WakeWise - Smart Sunglasses Driver Drowsiness Detection
*/

const int vibrationSensorPin = 2;
const int motorPin = 9;

unsigned long lastMovementTime;
const unsigned long sleepThreshold = 5000UL; // 5 seconds

// debounce
int lastRawState = HIGH;
int stableState = HIGH;
unsigned long lastDebounceTime = 0;
const unsigned long debounceDelay = 50UL;

// non-blocking alert pattern
const unsigned long patternDurations[] = {300UL, 200UL, 300UL}; // on, off, on
const int patternLen = sizeof(patternDurations) / sizeof(patternDurations[0]);
int patternIndex = 0;
unsigned long patternStepStart = 0;
bool alerting = false;

void setup() {
  pinMode(vibrationSensorPin, INPUT_PULLUP); // use internal pull-up to avoid floating
  pinMode(motorPin, OUTPUT);
  digitalWrite(motorPin, LOW);
  lastMovementTime = millis(); // initialize timer to avoid immediate alert
}

void loop() {
  // read sensor with debounce
  int raw = digitalRead(vibrationSensorPin);
  if (raw != lastRawState) {
    lastDebounceTime = millis();
    lastRawState = raw;
  }
  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (raw != stableState) {
      stableState = raw;
      if (stableState == LOW) { // active when pulled LOW with INPUT_PULLUP
        lastMovementTime = millis();
        // cancel alert if movement occurs
        alerting = false;
        digitalWrite(motorPin, LOW);
      }
    }
  }

  // check inactivity
  if (!alerting && (millis() - lastMovementTime > sleepThreshold)) {
    startAlert();
  }

  // handle non-blocking alert pattern
  if (alerting) {
    unsigned long now = millis();
    if (now - patternStepStart >= patternDurations[patternIndex]) {
      // advance step
      patternIndex++;
      patternStepStart = now;
      if (patternIndex >= patternLen) {
        // finished pattern once -> stop and reset timer
        alerting = false;
        digitalWrite(motorPin, LOW);
        lastMovementTime = millis(); // avoid immediate retrigger
      } else {
        // set motor according to step (even indices = ON)
        digitalWrite(motorPin, (patternIndex % 2 == 0) ? HIGH : LOW);
      }
    }
  }
}

void startAlert() {
  alerting = true;
  patternIndex = 0;
  patternStepStart = millis();
  // initial step: patternIndex 0 => ON
  digitalWrite(motorPin, HIGH);
}
// ...existing code...