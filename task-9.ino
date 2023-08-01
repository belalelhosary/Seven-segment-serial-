
int a=3,b=4,c=5,d=6,e=7,f=8,g=9;
char reading;
void zero(){
digitalWrite(a,1);
digitalWrite(b,1);
digitalWrite(c,1);
digitalWrite(d,1);
digitalWrite(e,1);
digitalWrite(f,1);
 digitalWrite(g,0);}
void one (){
digitalWrite(a,0);
digitalWrite(b,1);
digitalWrite(c,1);
digitalWrite(d,0);
digitalWrite(e,0);
digitalWrite(f,0);
 digitalWrite(g,0);
}
void two(){
digitalWrite(a,1);
digitalWrite(b,1);
digitalWrite(c,0);
digitalWrite(d,1);
digitalWrite(e,1);
digitalWrite(f,0);
digitalWrite(g,1);
}
 void three (){
digitalWrite(a,1);
digitalWrite(b,1);
digitalWrite(c,1);
digitalWrite(e,1);
digitalWrite(d,0);
digitalWrite(f,0);
digitalWrite(g,1);
 }
 void four(){
digitalWrite(3,0);   
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,0);
digitalWrite(7,0);
digitalWrite(8,1);
digitalWrite(9,1);
 }
 void five(){
digitalWrite(a,1);
digitalWrite(b,0);
digitalWrite(c,1);
digitalWrite(d,0);
digitalWrite(e,1);
digitalWrite(f,1);
digitalWrite(g,1);
}
void six(){
digitalWrite(a,1);
digitalWrite(b,0);
digitalWrite(c,1);
digitalWrite(d,1);
digitalWrite(e,1);
digitalWrite(f,1);
digitalWrite(g,1);}
void seven(){
  digitalWrite(a,1);
digitalWrite(b,1);
digitalWrite(c,1);
digitalWrite(d,0);
digitalWrite(e,0);
digitalWrite(f,0);
digitalWrite(g,0);}
void eight(){
digitalWrite(a,1);
digitalWrite(b,1);
digitalWrite(c,1);
digitalWrite(d,1);
digitalWrite(e,1);
digitalWrite(f,1);
digitalWrite(g,1);
}
void nine(){
digitalWrite(a,1);
digitalWrite(b,1);
digitalWrite(c,1);
digitalWrite(e,1);
digitalWrite(d,0);
digitalWrite(f,1);
digitalWrite(g,1);
}
void off(){
digitalWrite(a,0);
digitalWrite(b,0);
digitalWrite(c,0);
digitalWrite(e,0);
digitalWrite(d,0);
digitalWrite(f,0);
digitalWrite(g,0);
}
void setup()
{
  Serial.begin(9600);
  for(int i=3;i<10;i++){
    pinMode(i, OUTPUT);}
}

void loop()
{
  if(Serial.available()>0){
    reading=Serial.read();
    switch(reading){
      case '0':zero(); break;
      case '1':one(); break;
      case '2':two(); break;
      case '3':three(); break;
      case '4':four(); break;
      case '5':five(); break;
      case '6':six(); break;
      case '7':seven(); break;
      case '8':eight(); break;
      case '9':nine(); break;
      default: off(); break;
    }
  }
}
