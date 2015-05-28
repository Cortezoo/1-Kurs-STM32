/************************* Description ******************************
* File Name			: gpio.h
* Author			: Author
* Version			: V0.0.0
* Date				: 27/04/2015
* Description		: GPIO operation
********************************************************************/

#ifndef GPIO_H_
#define GPIO_H_

// includes
#include "main.h"

// declarations
void DisplayNumber7seg(u8 number, u8 dot);

// defines
/*********************************************************
 ************************ Diodes *************************
 *********************************************************/
	#define	_Diode_1 			GPIO_Pin_12		// green - left
	#define	_Diode_2 			GPIO_Pin_13		// orange - up
	#define	_Diode_3 			GPIO_Pin_14		// red - right
	#define	_Diode_4 			GPIO_Pin_15		// blue - down
	#define _Diode_GPIO			GPIOD

	#define _seg_a				GPIO_Pin_0
	#define _seg_b				GPIO_Pin_1
	#define _seg_c				GPIO_Pin_2
	#define _seg_d				GPIO_Pin_3
	#define _seg_e				GPIO_Pin_4
	#define _seg_f				GPIO_Pin_5
	#define _seg_g				GPIO_Pin_6
	#define _seg_dp				GPIO_Pin_7
	#define _7seg_GPIO			GPIOD

	#define disp_0()			GPIO_ResetBits(_7seg_GPIO, _seg_a | _seg_b | _seg_c | _seg_d | _seg_e | _seg_f | _seg_g);GPIO_SetBits(_7seg_GPIO, _seg_a | _seg_b | _seg_c | _seg_d | _seg_e | _seg_f)
	#define disp_1()			GPIO_ResetBits(_7seg_GPIO, _seg_a | _seg_b | _seg_c | _seg_d | _seg_e | _seg_f | _seg_g);GPIO_SetBits(_7seg_GPIO, _seg_b | _seg_c)
	#define disp_2()			GPIO_ResetBits(_7seg_GPIO, _seg_a | _seg_b | _seg_c | _seg_d | _seg_e | _seg_f | _seg_g);GPIO_SetBits(_7seg_GPIO, _seg_a | _seg_b | _seg_g | _seg_e | _seg_d)
	#define disp_3()			GPIO_ResetBits(_7seg_GPIO, _seg_a | _seg_b | _seg_c | _seg_d | _seg_e | _seg_f | _seg_g);GPIO_SetBits(_7seg_GPIO, _seg_a | _seg_b | _seg_g | _seg_c | _seg_d)
	#define disp_4()			GPIO_ResetBits(_7seg_GPIO, _seg_a | _seg_b | _seg_c | _seg_d | _seg_e | _seg_f | _seg_g);GPIO_SetBits(_7seg_GPIO, _seg_f | _seg_g | _seg_b | _seg_c)
	#define disp_5()			GPIO_ResetBits(_7seg_GPIO, _seg_a | _seg_b | _seg_c | _seg_d | _seg_e | _seg_f | _seg_g);GPIO_SetBits(_7seg_GPIO, _seg_a | _seg_f | _seg_g | _seg_c | _seg_d)
	#define disp_6()			GPIO_ResetBits(_7seg_GPIO, _seg_a | _seg_b | _seg_c | _seg_d | _seg_e | _seg_f | _seg_g);GPIO_SetBits(_7seg_GPIO, _seg_a | _seg_f | _seg_e | _seg_d | _seg_c | _seg_g)
	#define disp_7()			GPIO_ResetBits(_7seg_GPIO, _seg_a | _seg_b | _seg_c | _seg_d | _seg_e | _seg_f | _seg_g);GPIO_SetBits(_7seg_GPIO, _seg_a | _seg_b | _seg_c)
	#define disp_8()			GPIO_ResetBits(_7seg_GPIO, _seg_a | _seg_b | _seg_c | _seg_d | _seg_e | _seg_f | _seg_g);GPIO_SetBits(_7seg_GPIO, _seg_a | _seg_b | _seg_c | _seg_d | _seg_e | _seg_f | _seg_g)
	#define disp_9()			GPIO_ResetBits(_7seg_GPIO, _seg_a | _seg_b | _seg_c | _seg_d | _seg_e | _seg_f | _seg_g);GPIO_SetBits(_7seg_GPIO, _seg_a | _seg_b | _seg_c | _seg_d | _seg_f | _seg_g)

	#define _Button				GPIO_Pin_0
	#define _Button_GPIO		GPIOA

// declarations
void GPIO_Conf(void);

#endif /* GPIO_H_ */
