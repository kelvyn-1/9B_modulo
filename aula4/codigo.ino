const  int botao1 = 2 ;
const  int botao2 = 3 ;
const  int botao3 = 4 ;
const  int led1 = 5 ;
const  int led2 = 6 ;
const  int led3 = 7 ;
const  int led4 = 8 ;
const  int led5 = 9 ;

 configuração de vazio ()
{
  pinMode (botao1, INPUT);
  pinMode (botao2, INPUT);
  pinMode (botao3, INPUT);

  pinMode (led1, SAÍDA);
  pinMode (led2, SAÍDA);
  pinMode (led3, SAÍDA);
  pinMode (led4, SAÍDA);
  pinMode (led5, SAÍDA);
}

int valor1;
int valor2;
int valor3;

 loop vazio ()
{
valor1 = digitalRead (botao1);
valor2 = digitalRead (botao2);
valor3 = digitalRead (botao3);
  
 if (valor1){
  digitalWrite (led1, ALTO);
  digitalWrite (led3, ALTO);
  digitalWrite (led5, ALTO);
}
 if (valor2){
  tudo bem ();
}
 if (valor3){
  tudo apagado ();
}
}

void  acendeTudo (){
  digitalWrite (led1, ALTO);
  digitalWrite (led2, ALTO);
  digitalWrite (led3, ALTO);
  digitalWrite (led4, ALTO);
  digitalWrite (led5, ALTO);
}
void  apagarTudo (){
  digitalWrite (led1, BAIXO);
  digitalWrite (led2, BAIXO);
  digitalWrite (led3, BAIXO);
  digitalWrite (led4, BAIXO);
  digitalWrite (led5, BAIXO);
