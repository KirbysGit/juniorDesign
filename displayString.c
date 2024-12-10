// displayString
#include <msp430.h> 
#include <stdio.h>
#include <Junior_Design.h>

int main(void)
{
	Init_HW();

	LCD_Initialize();

	char Data[] = "Junior Design";
	static unsigned int i = 0;
	char Data2[32];

	while(1) {
	    LCD_CLRscreen();
	    LCD_String(Data);
	    i = (i + 10) % 100;
	    Duty = i;
	    sprintf(Data2, "%d", (int)Duty);
	    LCD_Cursor_Postion(0x40);
	    LCD_String(Data2);
	    Delay_Timer(DELAYT_500ms);
	}
}
