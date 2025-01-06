int AnalogPin = A0;
float MqA9;
int MqD9;
void setup() {
Serial.begin(9600);
Serial.println("Powerele.ir");
}

void loop() {
MqA9 = analogRead(A0);
MqA9 = (MqA9 /1023) * 100 ;
Serial.print("Gas = ");
Serial.print(MqA9);
Serial.println("%");
if(MqA9>50)
{
Serial.println("Danger !");
}
delay(300);
}
