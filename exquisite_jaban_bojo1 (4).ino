const int ledPin = 13;
const int buttonPin = 2;
int buttonState = 1;
void setup() {


pinMode(ledPin, OUTPUT);
pinMode(buttonPin, INPUT);
}

void loop() {
  
buttonState = digitalRead(buttonPin);
Serial.println("hello");
if(buttonState == LOW){
  digitalWrite(ledPin ,HIGH);
} else {
  digitalWrite(ledPin, LOW);}
}
