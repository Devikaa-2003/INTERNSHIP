const int ledPin = 12;
const int buttonPin = 2;
int buttonState = 0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonState = digitalRead(buttonPin);
Serial.println("hello");
if(buttonState == HIGH){
  digitalWrite(ledPin ,HIGH);
} else {
  digitalWrite(ledPin, LOW);}
}
