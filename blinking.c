// blinkingled

#include <msp430.h> 

#include <stdio.h>

#include <Junior_Design.h>


int main(void)
{
	Init_HW();

	//LCD_Initialize();

	while(1) {
	    Delay_Timer(DELAYT_500ms);
	    P1OUT ^= BIT0;
	}

}