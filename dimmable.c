#include <msp430.h> 

#include <stdio.h>

#include <Junior_Design.h>


/**
 * main.c
 */
int main(void)
{
    Init_HW();

    LCD_Initialize();

    static unsigned int i = 0;

    while(1) {
        i = (i + 10) % 100;

        Duty = i;

        Delay_Timer(DELAYT_500ms);
    }
}
