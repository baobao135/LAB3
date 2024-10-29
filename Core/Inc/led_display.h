/*
 * led_display.h
 *
 *  Created on: Oct 28, 2024
 *      Author: baobu
 */

#ifndef INC_LED_DISPLAY_H_
#define INC_LED_DISPLAY_H_

#include "main.h"
#include "global.h"

#define SEG1_VALUE 0
#define SEG2_VALUE 1
#define SEG3_VALUE 2
#define SEG4_VALUE 3

#define SEG1_MODE 0
#define SEG2_MODE 1

void display7SEG(int counter);
void display7SEG1(int counter);

void update7SEG_Value1 (int index, int data);
void update7SEG_Value2 (int index, int data);

void seg1();
void seg2();

#endif /* INC_LED_DISPLAY_H_ */
