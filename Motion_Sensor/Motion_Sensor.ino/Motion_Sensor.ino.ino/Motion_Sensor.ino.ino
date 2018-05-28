int PIR_output=5; // output of pir sensor
int led=13; // led pin
int buzzer=12;// buzzer pin
void setup() {
pinMode(PIR_output, INPUT);// setting pir output as arduino input
pinMode(led, OUTPUT);//setting led as output
pinMode(buzzer, OUTPUT);//setting buzzer as output
Serial.begin(9600);//serial communication between arduino and pc
}
void loop() {
if(digitalRead(5) == HIGH) // reading the data from the pir sensor
{
 digitalWrite(13, HIGH); // setting led to high
 digitalWrite(12, HIGH); // setting buzzer to high
 Serial.println("motion detected");
 
}
else {
 digitalWrite(13, LOW); // setting led to low
 digitalWrite(12, LOW); // setting buzzer to low
 Serial.println("scanning");
}
}
