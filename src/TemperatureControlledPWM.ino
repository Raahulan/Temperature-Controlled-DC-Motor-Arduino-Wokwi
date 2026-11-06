// Temperature Controlled DC Motor - PWM prototype (LED indication)
// Original simulation sketch reproduced from the uploaded screenshots.
const int tempPin = A0;
const int outputPin = 3;

const float BETA = 3950;

void setup() {
  pinMode(outputPin, OUTPUT);

  Serial.begin(9600);
  Serial.println("Temperature Controlled PWM");
}

void loop() {
  int analogValue = analogRead(tempPin);
  analogValue = constrain(analogValue, 1, 1022);

  // Convert analog value to Celsius
  float temperature =
    1 / (log(1 / (1023.0 / analogValue - 1)) / BETA
    + 1.0 / 298.15) - 273.15;

  // Temperature range:
  // 20C = PWM 0
  // 80C = PWM 255
  float tempLimited = constrain(temperature, 20.0, 80.0);

  int pwmValue =
    (tempLimited - 20.0) * 255.0 / 60.0;

  // PWM output
  analogWrite(outputPin, pwmValue);

  // Display values
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" C");
  Serial.print("   PWM: ");
  Serial.println(pwmValue);

  delay(200);
}
