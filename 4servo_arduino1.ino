#include <Servo.h>

Servo servo1, servo2, servo3, servo4;
int pos = 0;

void setup() {
  servo1.attach(9);
  servo2.attach(6);
  servo3.attach(5);
  servo4.attach(3);

  unsigned long startTime = millis();

  
  while (millis() - startTime < 2000) {
    for (pos = 0; pos <= 180; pos++) {
      moveAll(pos);
      delay(15);
      if (millis() - startTime >= 2000) break;
    }
    for (pos = 180; pos >= 0; pos--) {
      moveAll(pos);
      delay(15);
      if (millis() - startTime >= 2000) break;
    }
  }

  
  delay(500);
  moveAll(90);  
}

void loop() {
 
  moveAll(90);
  delay(100);
}

void moveAll(int angle) {
  servo1.write(angle);
  servo2.write(angle);
  servo3.write(angle);
  servo4.write(angle);
}




