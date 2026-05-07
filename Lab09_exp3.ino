int pin[8] = {13,12,11,10,9,8,7,6};
int left = 5;
int right = 4;

void setup()
{
  for(int i = 0;i < 8;i++)
  {
    pinMode(pin[i],OUTPUT);
  }
  pinMode(left, OUTPUT);
  pinMode(right, OUTPUT);
  digitalWrite(left, HIGH);
  digitalWrite(right, HIGH);
}

void loop()
{
  digitalWrite(left, HIGH);
  digitalWrite(right, LOW);
  shownum(3);
  delay(1);
  digitalWrite(left, LOW);
  digitalWrite(right, HIGH);
  shownum(4);
  delay(1);
}


void showSevenSeg(byte A, byte B, byte C, byte D, byte E, byte F, byte G, byte P)
{
  digitalWrite(pin[0], A);
  digitalWrite(pin[1], B);
  digitalWrite(pin[2], C);
  digitalWrite(pin[3], D);
  digitalWrite(pin[4], E);
  digitalWrite(pin[5], F);
  digitalWrite(pin[6], G);
  digitalWrite(pin[7], P);
}

void shownum(int num)
{
  switch(num)
  {
    case 0:
      showSevenSeg(0,0,0,0,0,0,1,1); 
      delay(1);
      break;
    case 1:
      showSevenSeg(1,0,0,1,1,1,1,1); 
        delay(1);
      break;
    case 2:
      showSevenSeg(0,0,1,0,0,1,0,1); 
        delay(1);
      break;
    case 3:
      showSevenSeg(0,0,0,0,1,1,0,1); 
        delay(1);
      break;
    case 4:
      showSevenSeg(1,0,0,1,1,0,0,1); 
        delay(1);
      break;
    case 5:
      showSevenSeg(0,1,0,0,1,0,0,1); 
        delay(1);
      break;
    case 6:
      showSevenSeg(0,1,0,0,0,0,0,1); 
        delay(1);
      break;
    case 7:
      showSevenSeg(0,0,0,1,1,1,1,1);
        delay(1);
      break;
    case 8:
      showSevenSeg(0,0,0,0,0,0,0,1); 
        delay(1);
      break;
    case 9:
      showSevenSeg(0,0,0,0,1,0,0,1); 
        delay(1);
      break;
    case 10:
      showSevenSeg(1,1,1,1,1,1,1,1); 
        delay(1);
      break;
  }
}
