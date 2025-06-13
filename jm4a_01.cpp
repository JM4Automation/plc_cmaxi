#include "jm4a_01.h" 
F48::F48() { } 
void F48::F49(uint8_t f, uint8_t ff) { ::pinMode(f,ff); } int F48::F50(uint8_t f) { return ::digitalRead(f); } void F48::F51(uint8_t f, uint8_t ff) { ::digitalWrite(f, ff); } int F48::F52(uint8_t f) { return ::analogRead(f); } void F48::F53(uint8_t f, int ff) { ::analogWrite(f,ff); } 
F48 F54; 