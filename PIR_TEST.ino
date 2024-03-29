int pir=6;
int led=8;

void setup() {

pinMode(led,OUTPUT);
pinMode(pir,INPUT);
Serial.begin(9600);

}
void loop() {
 int x= digitalRead(pir);
 Serial.println(x);
 if(x==1)
 digitalWrite(led,HIGH);
else
digitalWrite(led,0);
}
