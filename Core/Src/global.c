/*
 * global.c
 *
 *  Created on: Oct 27, 2024
 *      Author: baobu
 */

#include "global.h"

int state = 0;
int mode = 0;

int redTime;
int yellowTime;
int greenTime;

int ledRoad1;
int ledRoad2;

void initValue(){
	redTime = RED_TIME;
	yellowTime = YELLOW_TIME;
	greenTime = GREEN_TIME;

	ledRoad1 = redTime-1;
	ledRoad2 = greenTime-1;
}
