int ledPin = 13;

void setup() {
  // put your setup code here, to run once:

  pinMode(ledPin,OUTPUT);
  //Setting pin no. 13 to be o/p pin
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(ledPin,HIGH);
  delay(1000);
  //Setting pin no. 13 to be in ON state and delaying for 1 sec(~1000 ms)


  digitalWrite(ledPin,LOW);
  delay(1000);
  //Setting pin no. 13 to be in OFF state and delaying for 1 sec(~1000 ms)
}
