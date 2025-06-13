#include "jm4a_03.h" 
F61::F61() {} 
void F61::F62(unsigned long f) { Serial.begin(f); } void F61::F63(uint8_t f) { Serial.write(f); } void F61::F64(const char *f) { Serial.print(f); } void F61::F65(const char *f) { Serial.println(f); } void F61::F65(const String &f) { Serial.println(f); } int F61::F66() { return Serial.read(); } size_t F61::F67(char f, char *g, size_t h) { return Serial.readBytesUntil(f, g, h); } int F61::F68() { return Serial.available(); } void F61::F69() { Serial.flush(); } 
F61 F70; 