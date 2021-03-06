#include <Wire.h>
#include <ADi_SSD1306I2C128x64.h>

unsigned char A[8] {0x00, 0x00, 0x7C, 0x12, 0x11, 0x12, 0x7C, 0x00};
unsigned char D[8] {0x00, 0x00, 0x7F, 0x41, 0x41, 0x22, 0x1C, 0x00};
unsigned char I[8] {0x00, 0x00, 0x00, 0x41, 0x7F, 0x41, 0x00, 0x00};
unsigned char O[8] {0x00, 0x00, 0x3E, 0x41, 0x41, 0x41, 0x3E, 0x00};
unsigned char R[8] {0x00, 0x00, 0x7F, 0x09, 0x19, 0x29, 0x46, 0x00};
unsigned char U[8] {0x00, 0x00, 0x3F, 0x40, 0x40, 0x40, 0x3F, 0x00};
unsigned char dot[8] {0x00, 0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00};
unsigned char BS[8] {0, 0, 0, 0, 0, 0, 0, 0};

ADi_SSD1306I2C128x64 oled;

void setup() {
  Wire.begin();
  Wire.setClock(400000);
  oled.ledIni();
  oled.clear();
  delay (1000);
  for (int n = 0; n < 52; n++) {
    oled.out(BS);
  }
  oled.out(A);
  oled.out(D);
  oled.out(I);
  oled.out(O);
  oled.out(R);
  oled.out(dot);
  oled.out(R);
  oled.out(U);
}

void loop() {
}
