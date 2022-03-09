// C++ code
//
void setup()
{
  pinMode(5, OUTPUT);
}

void loop()
{
  digitalWrite(5, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(5, LOW);
  delay(500); // Wait for 500 millisecond(s)
}
