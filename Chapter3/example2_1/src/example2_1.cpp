/*Program Example 2.1: A program which flashes mbed LED1 on and off. Demonstrating
use of digital output and wait functions. Taken from the mbed site.
*/
#include "mbed.h"
//include the mbed header file as part of this program
// program variable myled is created, and linked with mbed LED1
DigitalOut myled(LED1);
int main() {//the main function starts here
  while(1) {//a continuous loop is created
    myled = 1;//switch the led on, by setting the output to logic 1
    wait(0.2);//wait 0.2 seconds
    myled = 0;//switch the led off
    wait(0.2);//wait 0.2 seconds
  }//end of while loop
}//end of main function
