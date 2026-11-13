#include "Arduino.h"

//#! add lwip_hook_ip6_input
extern "C" __attribute__((weak)) int lwip_hook_ip6_input(void *p, void *inp) {
  return 0;
}

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.println("Hello World!");
  delay(1000);
}
