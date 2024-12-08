int bienngoai=10;
int bienngoai2=2;
int bienngoai3=3;
void setup(){
pinMode(13,OUTPUT);
}
void loop(){
char string[64]="my name is hoang";
int i =1000;
i-=600; 

digitalWrite(13,1);
delay(i);
digitalWrite(13,0);
delay(200);
digitalWrite(13,1);
delay(600);
digitalWrite(13,0);
delay(5000);

}
