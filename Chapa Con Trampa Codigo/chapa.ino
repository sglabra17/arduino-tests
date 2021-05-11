byte btn1 = 7;
byte btn2 = 6;
byte btn3 = 5;
byte trap = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(btn1,INPUT);
  pinMode(btn2,INPUT);
  pinMode(btn3,INPUT);
  pinMode(trap,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(btn1)==HIGH && digitalRead(btn2)==HIGH){
    digitalWrite(trap,HIGH);
  }else{
    if(digitalRead(btn3)==HIGH){
      digitalWrite(trap,LOW);
      delay(5000);
    }
  }

}
