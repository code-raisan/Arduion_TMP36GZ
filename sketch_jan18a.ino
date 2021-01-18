/**
 * USE TMP36GZ
 */
const int ANALOG_PIN_TMP36GZ = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  float input_TMP36GZ = (float)analogRead(ANALOG_PIN_TMP36GZ);
  float mv = input_TMP36GZ * 5.0 / 1023.0;
  float c = mv * 100 - 50;
  String Celsius = String(c, 1);
  Serial.println(Celsius + "°C");
  delay(500);
}
