// C++ code
//

int vermelho01=12;
int amarelo01=11;
int verde01=10;

int vermelho02=5;
int amarelo02=6;
int verde02=7;

  
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  
}

void loop()
{
  digitalWrite(verde01, HIGH); 
  digitalWrite(amarelo02, LOW); 
  digitalWrite(amarelo01, LOW); 
  digitalWrite(vermelho02, HIGH);
  delay(2500);
  digitalWrite(amarelo01, HIGH);
  digitalWrite(verde01, LOW);
  delay(2500);
  digitalWrite(vermelho01, HIGH); 
  digitalWrite(amarelo01, LOW);
  digitalWrite(verde02, HIGH);
  digitalWrite(vermelho02, LOW); 
  delay(2500);
  digitalWrite(verde02, LOW);
  digitalWrite(amarelo02, HIGH);
  delay(2500);
  digitalWrite(vermelho01, LOW);
}