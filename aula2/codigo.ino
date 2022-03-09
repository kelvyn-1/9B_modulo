const  int botao1 = 2 ;
const  int botao2 = 3 ;
const  int led1 = 4 ;
const  int led2 = 5 ;

int var1;
int var2;
  
  configuração de vazio ()
{
    pinMode (botao1, INPUT);
  	pinMode (botao2, INPUT);
    pinMode (led1, SAÍDA);
    pinMode (led2, SAÍDA);
   	// Serial.begin(9600);
}
 
  loop vazio ()
{
    var1 = digitalRead (botao1);
   	var2 = digitalRead (botao2);
   	
   if (var1){
       digitalWrite (led1, ALTO);
   } senão {
       digitalWrite (led1,LOW);
   }
   if (!var2){
       digitalWrite (led2, ALTO);
   } senão {
       digitalWrite (led2,LOW);
   }
}
