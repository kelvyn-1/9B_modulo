// código C++
//
 configuração de vazio ()
{
  pinMode ( 1 , SAÍDA);
  pinMode ( 2 , SAÍDA);
  pinMode ( 3 , SAÍDA);
  pinMode ( 4 , SAÍDA);
  pinMode ( 5 , SAÍDA);
}

 loop vazio ()
{
  digitalWrite ( 1 , ALTO);
  atraso ( 2000 ); // Aguarda 2000 milissegundo(s)
  digitalWrite ( 2 , ALTO);
  atraso ( 2000 ); // Aguarda 2000 milissegundo(s)
  digitalWrite ( 3 , ALTO);
  atraso ( 2000 ); // Aguarda 2000 milissegundo(s)
  digitalWrite ( 4 , ALTO);
  atraso ( 2000 ); // Aguarda 2000 milissegundo(s)
  digitalWrite ( 5 , ALTO);
  atraso ( 2000 ); // Aguarda 2000 milissegundo(s)
  digitalWrite ( 1 , BAIXO);
  digitalWrite ( 2 , BAIXO);
  digitalWrite ( 3 , BAIXO);
  digitalWrite ( 4 , BAIXO);
  digitalWrite ( 5 , BAIXO);
  atraso ( 2000 ); // Aguarda 2000 milissegundo(s)
}
