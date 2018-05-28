void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
pinMode(A2,OUTPUT);
pinMode(A3,OUTPUT);
pinMode(11,OUTPUT);
digitalWrite(A3,HIGH);
digitalWrite(A2,LOW);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(analogRead(A0));
delay(1000);
if(analogRead(A0) < 250)
digitalWrite(11,HIGH);
else
digitalWrite(11,LOW);
}
