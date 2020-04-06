#include<lpc17xx.h>

int main()
{
	SystemInit();
	
	LPC_PINCON->PINSEL3=0x00000200;
	LPC_PWM1->TCR=0x00000001;
	LPC_PWM1->PR=0x00;
	LPC_PWM1->MCR=0x02;
	LPC_PWM1->MR0=3600;
	LPC_PWM1->MR2=1800;
	LPC_PWM1->PCR=0x00000400;
	LPC_PWM1->LER=0x05;
}