#include "delay.h"

void Delay_Ms(u32 nTime)
{
	TimingDelay = nTime;
	while(TimingDelay != 0);	
}
void Delay_Us(u32 nTime)
{
	u16 i=0;
	while(nTime--)
	{
		i=10;
		while(i--);
	}
}
void get_ms(unsigned long *time)
{
	
}

