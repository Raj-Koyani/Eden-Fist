
int flexs = A0; // flex sensor is connected with analog pin A0
int data; 
int led = 13; 

void setup()
{
  Serial.begin(9600); 
  pinMode(flexs, INPUT);
  pinMode(led, OUTPUT);   
}

void loop()
{
  data = analogRead(flexs); 
  //Serial.println(data);
  //data=map(data,700,900,0,255);
  Serial.println(data);
  //digitalWrite(led,data);
  if( data>=95 || data<75             ) 
  {
    digitalWrite(led, HIGH);  
  }
  else 
  {
    digitalWrite(led, LOW);  
  }
  delay(100); 
}