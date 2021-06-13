int reed_switch = 2;
int Led = 3;

void setup() {
  pinMode(reed_switch,INPUT_PULLUP);
  pinMode(Led,OUTPUT);

}

void loop() {
  if(digitalRead(reed_switch) == LOW ){
    digitalWrite(Led,HIGH);
  }else{
    digitalWrite(Led,LOW);
  }
}
