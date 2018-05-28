const int lamp = 7;
boolean x = false;

void setup() {
  Serial.begin(9600);
  pinMode(lamp , OUTPUT);

}

void loop() {
    int c = analogRead(A0);
    delay(500);
    if ( c < 300 && x == false){
      digitalWrite(7,HIGH);
      x = true;
      delay(1000);
  }
  else if ( c > 300 && x == true){
    x = false;
    digitalWrite(7,LOW);
    delay(1000);
}
}
