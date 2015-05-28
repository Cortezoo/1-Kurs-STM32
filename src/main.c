/***************************** Description **************************
* File Name			: main.c
* Author			: Author
* Version			: V0.0.0
* Date				: 27/04/2015
* Description		: Main operation
********************************************************************/

// includes
#include "main.h"
#include "gpio.h"
#include "rcc.h"

int main(void)
{
	RCC_Conf();
	GPIO_Conf();

	/////////////////////////////////////////////////////////////
	////// Szybkie wprowadzenie do manipulowania wyjsciami //////
	/////////////////////////////////////////////////////////////
	GPIO_SetBits(_Diode_GPIO, _Diode_1);						// Wlaczenie diody - gotowa funkcja
	GPIO_SetBits(_Diode_GPIO, _Diode_2 | _Diode_3);				// Mo¿liwe jest sumowanie
	_Diode_GPIO->BSRRL = _Diode_4;								// Wlaczenie diody z wykorzystaniem bezporedniej komendy

	GPIO_ResetBits(_Diode_GPIO, _Diode_1);						// Wylaczenie diody - gotowa funkcja równie¿ mo¿liwe sumowanie
	_Diode_GPIO->BSRRH = _Diode_2;								// Wylaczenie diody z wykorzystaniem bezporedniej komendy

	GPIO_ToggleBits(_Diode_GPIO, _Diode_3);						// Zmiana stanu wyjcia - gotowa funkcja
	_Diode_GPIO->ODR ^= _Diode_4;								// Zmiana stanu wyjcia z wykorzystaniem bezporedniej komendy

	u8 licznik=0;
  while(1)
  {
	  /*
	  if(GPIO_ReadInputDataBit(_Button_GPIO, _Button))			// Sprawdzenie stanu wejscia
	  {
		  GPIO_SetBits(_Diode_GPIO, _Diode_2 | _Diode_3);
	  }else
	  {
		  GPIO_ResetBits(_Diode_GPIO, _Diode_2 | _Diode_3);
	  }
	  */
	  /*
	  GPIO_SetBits(_Diode_GPIO, _Diode_1 | _Diode_4);
	  Delay(1,s);
	  GPIO_ResetBits(_Diode_GPIO, _Diode_1 | _Diode_4);
	  Delay(1,s);
	  */

	  /*
	  disp_0();
	  Delay(500,ms);
	  disp_1();
	  Delay(500,ms);
	  disp_2();
	  Delay(500,ms);
	  disp_3();
	  Delay(500,ms);
	  disp_4();
	  Delay(500,ms);
	  disp_5();
	  Delay(500,ms);
	  disp_6();
	  Delay(500,ms);
	  disp_7();
	  Delay(500,ms);
	  disp_8();
	  Delay(500,ms);
	  disp_9();
	  Delay(500,ms);
	*/

	  Delay(500,ms);
	  DisplayNumber7seg(licznik,0);
	  licznik++;
	  if(licznik>9)licznik=0;
  }
}


/****************************** Delay *******************************
* Function Name  : Delay
* Description    : Delay.
* Input          : delay - time delay
					state - unit
* Output         : None
* Return         : None
********************************************************************/
void Delay(u32 delay, float state)
{
	u32 TimeDelay =  delay * state;									// minimum time of 825ns at the state equal 0
    for(u32 TimeCount = 0; TimeCount < TimeDelay; TimeCount++);
}
