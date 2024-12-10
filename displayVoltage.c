//displayVoltage

#include <msp430.h> 
#include <stdio.h>
#include <Junior_Design.h>


int main(void)
{
	Init_HW();

	LCD_Initialize();

	static unsigned int ADC_Result;
	char Data2[32];

	while(1) {
	    LCD_CLRscreen();
	    ADC_Result = ADC_Read();
	    Duty = (int)((float)ADC_Result / 10.23);
	    sprintf(Data2, "%d", (int)Duty);
	    LCD_Cursor_Postion(0x40);
	    LCD_Cursor_On_No_Blink();
	    LCD_String(Data2);
	    Delay_Timer(DELAYT_500ms);
	}
}