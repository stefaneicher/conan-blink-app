#include <iostream>

#ifdef WIRINGPI
    #include <wiringPi.h>
#endif


int main (void)
{
    #ifdef WIRINGPI
        wiringPiSetup() ;
        pinMode(3, OUTPUT) ;
    #endif

    for(;;)
    {
        std::cout << "HIGH" << std::endl;
        #ifdef WIRINGPI
            digitalWrite(3, HIGH);
            delay(500);
        #endif
        std::cout << "LOW" << std::endl;
        #ifdef WIRINGPI
            digitalWrite(3, LOW);
            delay(500);
        #endif
    }

    return 0 ;
}
