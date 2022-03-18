const int botao1 = 2;
const int botao2 = 3;
const int botao3 = 4;
const int led1 = 5;
const int led2 = 6;
const int led3 = 7;
const int led4 = 8;
const int led5 = 9;
const int led6 = 10;
const int led7 = 11;
const int led8 = 12;
const int led9 = 13;
const int led10 = 14;

void configuração()
{
  pinMode(botao1, ENTRADA);
  pinMode(botao2, INPUT);
  pinMode(botao3, INPUT);
  
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
}

int valor1;
int valor2;
int valor3;

void loop()
{
  valor1 = digitalRead(botao1);
  valor2 = digitalRead(botao2);
  valor3 = digitalRead(botao3);
  
  if(valor1){
    AgradeTudo();
  }
  if(valor2){
   
    apagaTudo();
  }
  if(valor3){
   acendeEapaga();
  }
}

void acendeTudo(){
  digitalWrite(led1, ALTO);
  digitalWrite(led2, ALTO);
  digitalWrite(led3, ALTO);
  digitalWrite(led4, ALTO);
  digitalWrite(led5, ALTO);
  digitalWrite(led6, ALTO);
  digitalWrite(led7, ALTO);
  digitalWrite(led8, ALTO);
  digitalWrite(led9, ALTO);
  digitalWrite(led10, ALTO);
  
}

void apagaTudo(){
  digitalWrite(led1, BAIXO);
    digitalWrite(led2, BAIXO);
    digitalWrite(led3, BAIXO);
    digitalWrite(led4, BAIXO);
    digitalWrite(led5, BAIXO);
    digitalWrite(led6, BAIXO);
    digitalWrite(led7, BAIXO);
    digitalWrite(led8, BAIXO);
    digitalWrite(led9, BAIXO);
    digitalWrite(led10, BAIXO);
}

void acendeEapaga(){
  
   digitalWrite(led1, ALTO);
   digitalWrite(led2, BAIXO);
   digitalWrite(led3, ALTO);
   digitalWrite(led4, BAIXO);
   digitalWrite(led5, ALTO);
   digitalWrite(led6, BAIXO);
   digitalWrite(led7, ALTO);
   digitalWrite(led8, BAIXO);
   digitalWrite(led9, ALTO);
   digitalWrite(led10, BAIXO);
    atraso(1000);
    digitalWrite(led1, BAIXO);
    digitalWrite(led2, ALTO);
    digitalWrite(led3, BAIXO);
    digitalWrite(led4, ALTO);
    digitalWrite(led5, BAIXO);
    digitalWrite(led6, ALTO);
    digitalWrite(led7, BAIXO);
    digitalWrite(led8, ALTO);
    digitalWrite(led9, BAIXO);
    digitalWrite(led10, ALTO);
    atraso(1000);
}
