const  int botao1 = 2 ;
const  int led = 5 ;


int var1;


 configuração de vazio ()
{
  pinMode (botao1, INPUT);
  pinMode (led, SAÍDA);
  // Serial.begin(9600);
}

 loop vazio ()
{
  var1 = digitalRead (botao1);
  
  if (var1){
    digitalWrite (led, ALTO);
  }
   
}
