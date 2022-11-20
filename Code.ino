int data = 0;
int sensor = A1;
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
  pinMode(sensor, INPUT);
}
void loop()
{
  data = analogRead(sensor);
Serial.println(data);
  if ( data < 400) //
  {
    Serial.println("OK");
    delay(5000);
    Serial.println("ATD+919429959256;");
    delay(5000);
    Serial.println("ATH");
    delay(1000);
  }
}
