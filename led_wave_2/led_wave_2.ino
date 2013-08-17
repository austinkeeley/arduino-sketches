// A blinking wave, like knight rider
// This time with a for loop.
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

int d = 70;

void loop()
{
  for (int a = 2; a<7; a++)
  {
    digitalWrite(a, HIGH);
    digitalWrite(a-1 , LOW);
    delay(d);
  }
  
  delay(d);
  for (int a = 5; a> 1; a--)
  {
    digitalWrite(a, HIGH);
    digitalWrite(a+1, LOW);
    delay(d);
  }
  
  
  
  
 
}
