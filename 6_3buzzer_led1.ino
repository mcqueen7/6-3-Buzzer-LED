// C++ code
//
#define A2 110
#define B2 123
#define C3 131
#define C3s 139
#define D3 147
#define D3s 156
#define E3 165
#define F3 175
#define F3s 185
#define G3 196
#define G3s 208
#define A3 220
#define A3s 233
#define B3 247
#define C4 262
#define aa5 A5
#define aa4 A4
#define aa1 A1
int m[]={
A3,G3,F3s,0,F3s ,E3, D3,0,D3, E3,F3s,E3, 0,F3s,E3,0,
E3,F3s,G3,0,G3,E3,C3s,0,C3s,D3,E3,D3,0,E3,D3,0,
D3,D3,B3,0,B3,A3,G3,0,G3,B3,A3,0,
A3,F3s,D3,0,D3,E3,F3s,0,F3s,G3,F3s,0,
E3,D3,E3,0,A2,
};
int t[]={
  4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,1,4,
  3,
};
int leds=0;
int ledp[14]={
	2,3,4,5,6,7,8,9,10,11,12,aa5,aa4,aa1
};
void setup()
{
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
    pinMode(aa5, OUTPUT);
    pinMode(aa4, OUTPUT);
     pinMode(aa1, OUTPUT);
}

void loop()
{
  
  for(int i=0;i<61;i++){
  int td=800/t[i];
  tone(13,m[i],td);
    if(m[i]==A2){
    digitalWrite(ledp[13],HIGH);
      leds=ledp[13];
    }else if(m[i]==C3){
    digitalWrite(ledp[0],HIGH);
      leds=ledp[0];
    }else if(m[i]==C3s){
    digitalWrite(ledp[1],HIGH);
      leds=ledp[1];
    }else if(m[i]==D3){
    digitalWrite(ledp[2],HIGH);
      leds=ledp[2];
    }else if(m[i]==D3s){
    digitalWrite(ledp[3],HIGH);
      leds=ledp[3];
    }else if(m[i]==E3){
    digitalWrite(ledp[4],HIGH);
      leds=ledp[4];
    }else if(m[i]==F3){
    digitalWrite(ledp[5],HIGH);
      leds=ledp[5];
    }else if(m[i]==F3s){
    digitalWrite(ledp[6],HIGH);
      leds=ledp[6];
    }else if(m[i]==G3){
    digitalWrite(ledp[7],HIGH);
      leds=ledp[7];
    }else if(m[i]==G3s){
    digitalWrite(ledp[8],HIGH);
      leds=ledp[8];
    }else if(m[i]==A3){
    digitalWrite(ledp[9],HIGH);
      leds=ledp[9];
    }else if(m[i]==A3s){
    digitalWrite(ledp[10],HIGH);
      leds=ledp[10];
    }else if(m[i]==B3){
    digitalWrite(ledp[11],HIGH);
      leds=ledp[11];
    }else if(m[i]==C4){
    digitalWrite(ledp[12],HIGH);
      leds=ledp[12];
    }													
    
    
    int pb=td*1.3;
    delay(pb);
    digitalWrite(leds,LOW);
    noTone(13);
  }
delay(200);

}
  