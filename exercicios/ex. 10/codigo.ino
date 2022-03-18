const  int led1 = 2 ;
const  int led2 = 3 ;
const  int led3 = 4 ;
const  int led4 = 5 ;
const  int led5 = 6 ;
const  int led6 = 7 ;
const  int led7 = 8 ;
const  int led8 = 9 ;
const  int led9 = 10 ;
const  int led10 = 11 ;
const  int botao = 15 ;

const  int pote = 0 ;
int var = 0 ;
int var2 = 0 ;

 configuração de vazio ()
{
  
  pinMode (led1, SAÍDA);
  pinMode (led2, SAÍDA);
  pinMode (led3, SAÍDA);
  pinMode (led4, SAÍDA);
  pinMode (led5, SAÍDA);
  pinMode (led6, SAÍDA);
  pinMode (led7, SAÍDA);
  pinMode (led8, SAÍDA);
  pinMode (led9, SAÍDA);
  pinMode (led10, SAÍDA);
  Serial. começar ( 9600 );
}

 loop vazio ()
{
var = analogRead (pot);
Serial. println (var);
  var2 = digitalRead (botao);
  
  
  if (var2){
    
    if (var > 50 ){
      
      
    digitalWrite (led1,HIGH);
  } senão {
digitalWrite (led1,LOW);
}

if (var > 150 ){
    digitalWrite (led2,HIGH);
} senão {
digitalWrite (led2,LOW);
}

if (var > 250 ){
    digitalWrite (led3,HIGH);
} senão {
digitalWrite (led3,LOW);
}

if (var > 350 ){
    digitalWrite (led4,HIGH);
} senão {
digitalWrite (led4,LOW);
}


if (var > 450 ){
    digitalWrite (led5,HIGH);
} senão {
digitalWrite (led5,LOW);
}
  
  if (var > 550 ){
    digitalWrite (led6,HIGH);
} senão {
digitalWrite (led6,LOW);
}
  
  if (var > 650 ){
    digitalWrite (led7,HIGH);
} senão {
digitalWrite (led7,LOW);
}
  
  if (var > 750 ){
    digitalWrite (led8,HIGH);
} senão {
digitalWrite (led8,LOW);
}
 
  if (var > 850 ){
    digitalWrite (led9,HIGH);
} senão {
digitalWrite (led9,LOW);
}
  
  if (var > 950 ){
    digitalWrite (led10, ALTO);
} senão {
digitalWrite (led10,LOW);
}
  
  atraso ( 200 );
  
}
}
