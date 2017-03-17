#include "mbed.h"
//include the mbed header file as part of this program
// program variable myled is created, and linked with mbed LED6
//LED6 blue in STM32F4 ---> PlatformIO board "ST STM32F4"
DigitalOut myled(LED6);
int main() {
  while(1) {
    myled = 1;
    wait(0.2);
    myled = 0;
    wait(0.2);
  }
}
