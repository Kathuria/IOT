int led_pin =13;
int sensor_pin =8;
void setup() {
  pinMode(led_pin, OUTPUT);
  pinMode(sensor_pin, INPUT);
  Serial.begin(9600);
}
void loop() {
  if(digitalRead(sensor_pin) == HIGH){
    digitalWrite(led_pin, HIGH);
    Serial.print("Moisture = ");
    int sensorValue = digitalRead(sensor_pin);
    Serial.println(sensorValue);
    delay(100);      
  } else {
    digitalWrite(led_pin, LOW);
    delay(1000);
  }
}

