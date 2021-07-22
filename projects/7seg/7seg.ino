int ds = 4;
int stcp = 3;
int shcp = 2;

int digit1 = 5;

int digits [10][8] = {
  {1,1,1,1,1,1,0,0},
  {0,1,1,0,0,0,0,0},
  {1,1,0,1,1,0,1,0},
  {1,1,1,1,0,0,1,0},
  {0,1,1,0,0,1,1,0},
  {1,0,1,1,0,1,1,0},
  {1,0,1,1,1,1,1,0},
  {1,1,1,0,0,0,0,0},
  {1,1,1,1,1,1,1,0},
  {1,1,1,1,0,1,1,0},
};

void setup() {
  pinMode(ds, OUTPUT);
  pinMode(stcp, OUTPUT);
  pinMode(shcp, OUTPUT);
  
  digitalWrite(digit1, HIGH);
  pinMode(digit1, OUTPUT);

}

void display_digit(int digit)
{
  digitalWrite(stcp, LOW);
  for(int i = 7; i >= 0; i--)
  {
    digitalWrite(shcp, LOW);
    digitalWrite(ds, !digits[digit][i]);
    digitalWrite(shcp, HIGH);
  }
  digitalWrite(stcp, HIGH);
}

int i = 0;
void loop() {
  display_digit(i);
  i++;
  i %= 10;
  delay(400);
}
