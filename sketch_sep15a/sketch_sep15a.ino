const int ledPIN = 8;
 
void setup() {
  Serial.begin(9600);    //iniciar puerto serie
  pinMode(ledPIN , OUTPUT);  //definir pin como salida
}
 //siii
void loop(){
  digitalWrite(ledPIN , HIGH);   // poner el Pin en HIGH
  delay(10);                   // esperar un segundo
  digitalWrite(ledPIN , LOW);    // poner el Pin en LOW
  delay(100);                   // esperar un segundo
}
