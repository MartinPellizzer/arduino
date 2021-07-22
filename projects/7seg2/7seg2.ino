#define SHCP 8 // clock
#define STCP 9 // latch
#define DS 10 // data

#define D1 5
#define D2 4
#define D3 3
#define D4 2


void setup() 
{
  digitalWrite(D1, HIGH);
  pinMode(D1, OUTPUT);
  digitalWrite(D2, HIGH);
  pinMode(D2, OUTPUT);
  digitalWrite(D3, HIGH);
  pinMode(D3, OUTPUT);
  digitalWrite(D4, HIGH);
  pinMode(D4, OUTPUT);
  
  pinMode(SHCP, OUTPUT);
  pinMode(STCP, OUTPUT);
  pinMode(DS, OUTPUT);


  
}

void loop() 
{
  digitalWrite(STCP, LOW);
  shiftOut(DS, SHCP, MSBFIRST, ~0b00000110);
  digitalWrite(STCP, HIGH);

  digitalWrite(D1, LOW);
  delay(1);
  digitalWrite(D1, HIGH);


  
  digitalWrite(STCP, LOW);
  shiftOut(DS, SHCP, MSBFIRST, ~0b00000111);
  digitalWrite(STCP, HIGH);

  digitalWrite(D2, LOW);
  delay(1);
  digitalWrite(D2, HIGH);


  
  digitalWrite(STCP, LOW);
  shiftOut(DS, SHCP, MSBFIRST, ~0b00001111);
  digitalWrite(STCP, HIGH);

  digitalWrite(D3, LOW);
  delay(1);
  digitalWrite(D3, HIGH);


  
  digitalWrite(STCP, LOW);
  shiftOut(DS, SHCP, MSBFIRST, ~0b00011111);
  digitalWrite(STCP, HIGH);

  digitalWrite(D4, LOW);
  delay(1);
  digitalWrite(D4, HIGH);

}
