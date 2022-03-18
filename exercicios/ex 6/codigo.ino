const int botao1 = 2;
const int botao2 = 3;
const int botao3 = 4;
const int botao4 = 5;
const int botao5 = 6;


//constantes

int var1;
int var2;
int var3;
int var4;
int var5;

void configuração()
{
  pinMode(botao1, ENTRADA);
  pinMode(botao2, INPUT);
  pinMode(botao3, INPUT);
  pinMode(botao4, INPUT);
  pinMode(botao5, INPUT);
  
  Serial.begin(9600);
}
//Esta função se repete.
  void loop()
{

//Serial.print("0");
  
  var1 = digitalRead(botao1);
  var2 = digitalRead(botao2);
  var3 = digitalRead(botao3);
  var4 = digitalRead(botao4);
  var5 = digitalRead(botao5);
  
  if(var1)
  {
    Serial.println("aiw cherry");
  }
  
  if(var2)
  {
    Serial.println("preto");
  }
  
  if(var3)
  {
    Serial.println("kat maravilha");
  }
  
  if(var4)
  {
    Serial.println("waldorf");
  }
  
  if(var5)
  {
    Serial.println("chuck bass");
  }
  
  atraso(500);
}
