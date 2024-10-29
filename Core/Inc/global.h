/*
 * global.h
 *
 *  Created on: Oct 27, 2024
 *      Author: baobu
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "Timer_Software.h"
#include "light_control.h"
#include "Button.h"
#include "fsm_auto.h"
#include "fsm_manual.h"
#include "led_display.h"

#define RED_TIME 5
#define YELLOW_TIME 2
#define GREEN_TIME 3

extern int state;
extern int mode;

extern int yellowTime;
extern int greenTime;
extern int redTime;

extern int ledRoad1;
extern int ledRoad2;

void initValue();

#endif /* INC_GLOBAL_H_ */
