int led13 = 13;
int led12 = 12;

void setup() 
{    
  Serial.begin(9600);
  pinMode(led13,OUTPUT);
  pinMode(led12,OUTPUT);
}
void loop()
{
    if (Serial.available() > 0)
    {
      char x;
      x=Serial.read();

      if(x == '1')
      {
        digitalWrite(led13,HIGH);
        digitalWrite(led12,LOW);
      }
      else if(x == '2')
      {
        digitalWrite(led12,HIGH);
        digitalWrite(led13,LOW);
      }
      else if(x == '3'){
        digitalWrite(led13,LOW);
        digitalWrite(led12,LOW);
      }
    }
}
