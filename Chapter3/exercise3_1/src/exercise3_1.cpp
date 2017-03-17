/*Exercise 3.1
Get familiar with Program Example 2.1, and the general process of compiling, by
trying the following variations. Observe the effects.
1. Add the comments, or others of your own, given in the example. See that the
program compiles and runs without change.
2. Vary the 0.2 parameter in the wait( ) functions.
3. Replace the wait( ) functions with wait_ms( ) functions, with accompanying
parameter set to give the same wait time. Also vary this time. Note that wait_ms( )
requires an integer argument. If you put 2.5, for example, it will read it as 2.
4. Use LED2, 3, or 4 instead of 1.
5. Make a more complex light pattern using two or more LEDs and more wait( )
function calls.
*/
#include "mbed.h"
//LED3 orange, LED4 green, LED5 red, LED6 blue
DigitalOut myLed(LED4);
DigitalOut myLed2(LED5);
int main() {
  while(1) {
    myLed = 1;
    wait_ms(500);
    myLed = 0;
    wait(0.5);
    myLed2 = 1;
    wait_ms(500);
    myLed2 = 0;
    wait(0.5);
  }
}
