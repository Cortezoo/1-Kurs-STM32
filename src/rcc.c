/***************************** Description **************************
* File Name			: rcc.c
* Author			: Author
* Version			: V0.0.0
* Date				: 27/04/2015
* Description		: RCC operation
********************************************************************/

// includes
#include "rcc.h"
#include "main.h"

/**************************** RCC_Conf ******************************
* Function Name  : RCC_Conf
* Description    : None
* Input          : None
* Output         : None
* Return         : None
********************************************************************/
void RCC_Conf(void)
{
	// AHB1
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA | RCC_AHB1Periph_GPIOB | RCC_AHB1Periph_GPIOC | RCC_AHB1Periph_GPIOD | RCC_AHB1Periph_GPIOE, ENABLE);		//w³¹czanie takowania GPIO

	// AHB2

	// APB1

	// APB2

}
