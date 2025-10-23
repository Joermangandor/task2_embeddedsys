
  
void setup()
{
  int a=3;
  while(a--){
  pinMode(a+1,OUTPUT);
  }
 pinMode(9,INPUT); 
}

void lit(int x){
if(digitalRead(9)==HIGH){
 digitalWrite(x, HIGH);
 digitalWrite(15-x, HIGH);
 int btn=digitalRead(13);
  delay(2000+(btn==HIGH)*18000); // Wait for 20000 millisecond(s)
  digitalWrite(x, LOW);
  digitalWrite(15-x, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
else{
  digitalWrite(x, HIGH);
  delay(20000); // Wait for 20000 millisecond(s)
  digitalWrite(x, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
}

void loop()
{
  
  for(int i=1;i>-1;i++){
    
    int a= i%4;
    
    switch(a){
    case 0: //yellow light at pin 3
      lit(3);
      break;
      case 1: // red light at pin 2
      lit(2);
      break;
      case 2:
      lit(3);
      break;
      case 3: // green light at pin 4
      lit(4);
      break;
    }

  }
 
}
