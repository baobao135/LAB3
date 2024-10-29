/*
 * Button.h
 *
 *  Created on: Oct 27, 2024
 *      Author: baobu
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NUM_BUTTON 3
#define NORMAL_STATE GPIO_PIN_SET
#define PRESS_STATE GPIO_PIN_RESET
#define TIME_FOR_PRESS_KEY 200

#define BUTTON_1_PRESS				0
#define BUTTON_2_PRESS				1
#define	BUTTON_3_PRESS				2

int isButtonPressed(int num);

void subPressKey(int num);
void getKeyInput();

#endif /* INC_BUTTON_H_ */
