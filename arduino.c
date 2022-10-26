/**
   ESP32 + DHT22 Example for Wokwi
   
   https://wokwi.com/arduino/projects/322410731508073042
*/

#include <ESP32Servo.h>

int pos = 0;
int pin = 2;
bool shouldRotateFlag0 = true;
Servo servo;

void setup() {
  servo.attach(pin);
  Serial.begin(115200);
}

void loop() {
   if(shouldRotateFlag0) {
     rotateFlag0();
   }
}

void rotateFlag0() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    servo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
