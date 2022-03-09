const  int led1 = 5 ;
const  int led2 = 6 ;
const  int led3 = 7 ;
const  int led4 = 8 ;
const  int led5 = 9 ;

const  int pote = 0 ;
int var = 0 ;

 configuração de vazio ()
{
  pinMode (led1, SAÍDA);
  pinMode (led2, SAÍDA);
  pinMode (led3, SAÍDA);
  pinMode (led4, SAÍDA);
  pinMode (led5, SAÍDA);
  Serial. começar ( 9600 );
}


 loop vazio ()
{
  var = analogRead (pot);
  Serial. println (var);

  if (var > 50 ){
    digitalWrite (led1,HIGH);
  } senão {
    digitalWrite (led1,LOW);
  }

  if (var > 200 ){
    digitalWrite (led2,HIGH);
  } senão {
    digitalWrite (led2,LOW);
  }

  if (var > 400 ){
    digitalWrite (led3,HIGH);
  } senão {
    digitalWrite (led3,LOW);
  }

  if (var > 600 ){
    digitalWrite (led4,HIGH);
  } senão {
    digitalWrite (led4,LOW);
  }

  if (var > 900 ){
    digitalWrite (led5,HIGH);
  } senão {
    digitalWrite (led5,LOW);
  }
  atraso ( 200 );
}
