
void setup() {
  pinMode(0 , INPUT);
  pinMode(1 , INPUT);
  pinMode(2 ,OUTPUT);
  pinMode(3 ,OUTPUT);
  pinMode(4 ,OUTPUT);
  pinMode(5 ,OUTPUT);
  pinMode(6 ,OUTPUT);
  pinMode(7 ,OUTPUT);

}

void loop() {
  if(digitalRead(0)==1) {
    digitalWrite(2 , HIGH) ;
    digitalWrite(4 , HIGH) ;
   delay(250) ;
  }
 if(digitalRead(0)==0) {
    digitalWrite(2 , LOW) ;
    digitalWrite(4 , LOW) ;
   delay(250) ;
  }
   if(digitalRead(1)==1) {
    digitalWrite(6 , HIGH) ;
    digitalWrite(7 , HIGH) ;
   delay(250) ;
  }
 if(digitalRead(1)==0) {
    digitalWrite(6 , LOW) ;
    digitalWrite(7 , LOW) ;
   delay(250) ;
  }

}
