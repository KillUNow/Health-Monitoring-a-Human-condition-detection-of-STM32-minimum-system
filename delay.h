#ifndef __DELAY_H
#define	__DELAY_H
#include "stm32f10x.h"

extern u32 TimingDelay;
void Delay_Ms(u32 nTime);
void Delay_Us(u32 nTime);
void get_ms(unsigned long *time);
#endif 
