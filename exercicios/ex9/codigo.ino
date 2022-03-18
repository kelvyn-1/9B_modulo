const int led1 = 2;
const int led2 = 3;
const int led3 = 4;
const int led4 = 5;
const int led5 = 6;
const int led6 = 7;
const int led7 = 8;
const int led8 = 9;
const int led9 = 10;
const int led10 = 11;

const int pote = 0;
int var = 0;

void configuração()
{
  
  pinMode(led1, SAÍDA);
  pinMode(led2, SAÍDA);
  pinMode(led3, SAÍDA);
  pinMode(led4, SAÍDA);
  pinMode(led5, SAÍDA);
  pinMode(led6, SAÍDA);
  pinMode(led7, SAÍDA);
  pinMode(led8, SAÍDA);
  pinMode(led9, SAÍDA);
  pinMode(led10, SAÍDA);
  Serial.begin(9600);
}

void loop()
{
var = analogRead(pot);
Serial.println(var);
  
  if(var > 50){
    digitalWrite(led1,HIGH);
  }outro{
digitalWrite(led1,LOW);
}

if(var > 150){
    digitalWrite(led2,HIGH);
}outro{
digitalWrite(led2,LOW);
}

if(var > 250){
    digitalWrite(led3,HIGH);
}outro{
digitalWrite(led3,LOW);
}

if(var > 350){
    digitalWrite(led4,HIGH);
}outro{
digitalWrite(led4,LOW);
}


if(var > 450){
    digitalWrite(led5,HIGH);
}outro{
digitalWrite(led5,LOW);
}
  
  if(var > 550){
    digitalWrite(led6,HIGH);
}outro{
digitalWrite(led6,LOW);
}
  
  if(var > 650){
    digitalWrite(led7,HIGH);
}outro{
digitalWrite(led7,LOW);
}
  
  if(var > 750){
    digitalWrite(led8,HIGH);
}outro{
digitalWrite(led8,LOW);
}
 
  if(var > 850){
    digitalWrite(led9,HIGH);
}outro{
digitalWrite(led9,LOW);
}
  
  if(var > 950){
    digitalWrite(led10,HIGH);
}outro{
digitalWrite(led10,LOW);
}
  
  atraso(200);
  
}
