
int rele1 = 7;
int rele2 = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode(rele1, OUTPUT);
  pinMode(rele2, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
 int temperatura = random(10, 30);
 Serial.print("Temperatura: ");
 Serial.println(temperatura);
 if(temperatura > 25){
  Serial.println("Temperatura mayor de 25 grados detectada, actuando motores en reversa");
    delay(1000);
digitalWrite(rele1, HIGH); // turn the LED on (HIGH is the voltage level)
delay(1000); // wait for a second
digitalWrite(rele1, LOW); // turn the LED off by making the voltage LOW
delay(1000); // wait for a secon
digitalWrite(rele2, HIGH); // turn the LED on (HIGH is the voltage level)
delay(1000); // wait for a second
digitalWrite(rele2, LOW); // turn the LED off by making the voltage LOW
delay(1000); // wait for a secon
 }
 delay(1000);
}
