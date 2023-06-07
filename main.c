#include "stm32f10x.h"
#include "delay.h"
#include "led.h"
#include "mpu6050.h"
#include "usart.h"
#include "i2c.h"

u32 TimingDelay = 0;
u16 led_count = 0;
int main(void)
{
	SysTick_Config(SystemCoreClock/1000);
	Delay_Ms(100);
	Usart1_Init();
	i2cInit();
	LED_Init();
	Delay_Ms(100);
	MPU6050_Init();
	Delay_Ms(100);
	printf("init over !\r\n ");
	while(1)
	{
		MPU6050_Pose();
		Delay_Ms(50);
	}
}

void SysTick_Handler(void)
{
	TimingDelay--;
	led_count++;
	if(led_count==200) LED_ON ();
	if(led_count==400){LED_OFF();led_count=0;}
}
