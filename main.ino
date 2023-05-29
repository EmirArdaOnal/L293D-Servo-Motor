#include <AFMotor.h>

AF_Servo servo1;  // Servo nesnesi oluştur

void setup() {
  servo1.attach(SERVO1);  // Servo1 pimine bağlan
}

void loop() {
  // Servo motoru 0 dereceye getir
  for (int angle = 0; angle <= 180; angle++) {
    servo1.write(angle);  // Servo açısını güncelle
    delay(15);  // 15 milisaniye bekle
  }
  
  delay(1000);  // 1 saniye bekle
  
  // Servo motoru 180 dereceye getir
  for (int angle = 180; angle >= 0; angle--) {
    servo1.write(angle);  // Servo açısını güncelle
    delay(15);  // 15 milisaniye bekle
  }
  
  delay(1000);  // 1 saniye bekle
}
