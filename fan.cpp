int fan(String command);

const fan = 'D6';
const lights = 'D3';
const fan_high = 'D4';
const fan_off = 'D5';
void setup() {
   Particle.function("fan", fan);
   pinMode(D3, OUTPUT);
   pinMode(D4, OUTPUT);
   pinMode(D5, OUTPUT);
   pinMode(D6, OUTPUT);
   
   digitalWrite(D3, HIGH);
   digitalWrite(D4, HIGH);
   digitalWrite(D5, HIGH);
   digitalWrite(D6, HIGH);
}
void loop() 
{
}
   int fan(String command) {
   if (command == "medium") {
       digitalWrite(fan, LOW);
       delay(450);
       digitalWrite(fan, HIGH);
   
   }
   else if (command == "lights") {
       digitalWrite(lights, LOW);
       delay(450);
       digitalWrite(lights, HIGH);
   }
      else if (command == "high"){
        digitalWrite(fan_high, LOW);
        delay(450);
        digitalWrite(fan_high, HIGH);
   }
   else if (command == "off") {
       digitalWrite(fan_off, LOW);
       delay(450);
       digitalWrite(fan_off, HIGH);
   }

}
