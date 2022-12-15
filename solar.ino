int s1,s2;

void setup() {
  Serial.begin(9600);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);

}

void loop() {
  s1=analogRead(A0);
  s2=analogRead(A1);
  
  if(s1<100)
  {
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  delay(2000);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  }
  if(s2<100)
  {
  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  delay(2000);
    digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  }

}
