int fan(String command);
void setup() {
   Particle.function("fan", fan);
   pinMode(D6, OUTPUT);
   pinMode(D5, OUTPUT);
   pinMode(D4, OUTPUT);
   pinMode(D3, OUTPUT);
   
   digitalWrite(D6, HIGH);
   digitalWrite(D5, HIGH);
   digitalWrite(D4, HIGH);
   digitalWrite(D3, HIGH);
}
void loop() 
{
}
   int fan(String command) {
   if (command == "medium") {
       digitalWrite(D6, LOW);
       delay(450);
       digitalWrite(D6, HIGH);
   
   }
   else if (command == "lights") {
       digitalWrite(D3, LOW);
       delay(450);
       digitalWrite(D3, HIGH);
   }
      else if (command == "high"){
        digitalWrite(D4, LOW);
        delay(450);
        digitalWrite(D4, HIGH);
   }
   else if (command == "off") {
       digitalWrite(D5, LOW);
       delay(450);
       digitalWrite(D5, HIGH);
   }

}
