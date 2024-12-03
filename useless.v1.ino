#include <Servo.h>

define PinServoLid 3
define PinServoArm 4
define PinSwitch 5

define posArmDown 0
define posArmUp 180
define posLidClose 0
define posLidOpen 20

void setup() {
  servoLid.attach(PinServoLid);
  servoArm.attach(PinServoArm); 
}

void loop() {
  bool switch = (HIGH==digitalRead(PinSwitch));
  if (switch == true) {
    servoLid.write(posLidOpen);
    delay(15)
    servoArm.write(posArmUp);
    delay(15)
    servoArm.write(posArmDown);
    delay(15)
    servoLid.write(posLidClose);
    delay(15)
  }
}
