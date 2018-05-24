int ledPin = 8;
int sensorPin = A7;

int sensorVal1 = 0;
int sensorVal2 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 
  sensorVal1 = analogRead(sensorPin);
  sensorVal2 = analogRead(sensorPin);
  
  Serial.print("sensor val1: ");
  Serial.println(sensorVal1);

 Serial.print("sensor val2: ");
 Serial.println(sensorVal2);
  
 float voltage = sensorVal1 * (5.0 / 1023.0);

  sensorVal1 = map(sensorVal1, 1023, 0, 0, 255);

  Serial.print("LED brightness level: ");
  Serial.println(sensorVal1);
  
  analogWrite(ledPin, sensorVal1);

  sensorVal2 = map(sensorVal2, 1023, 0, 0, 100);

  Serial.print("Soil moisture: ");
  Serial.println(sensorVal2);

  Serial.print("voltage: ");
  Serial.println(voltage);
  Serial.println("");
  Serial.println("");
  delay(3000);

}
