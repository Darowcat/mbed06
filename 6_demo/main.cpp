#include "mbed.h"
using namespace std::chrono;

Ticker flipper;
DigitalOut led(LED3);

void flip()
{
   led = !led;
}

int main()
{
   led = 1;
   flipper.attach(&flip, 500ms); // the address of the function to be attached (flip) and the interval (2 seconds)

    while (1){}
}