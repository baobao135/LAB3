/*
 * fsm_auto.c
 *
 *  Created on: Oct 27, 2024
 *      Author: baobu
 */

#include "fsm_auto.h"

void Auto_run(){
	switch(state){
		case STATE_0:
			setTimer(0,greenTime*1000);
			ledRoad1 = redTime-1;
			ledRoad2 = greenTime-1;
			setRed1();
			setGreen2();
			state=STATE_1;
			break;
		case STATE_1:
			if(timer_flag[0]==1){
				setTimer(0,yellowTime*1000);
				ledRoad2 = yellowTime-1;
				setYellow2();
				state = STATE_2;
			}
			break;
		case STATE_2:
			if(timer_flag[0]==1){
				setTimer(0, greenTime*1000);
				ledRoad1 = greenTime-1;
				ledRoad2 = redTime-1;
				setRed2();
				setGreen1();
				state = STATE_3;
			}
			break;
		case STATE_3:
			if(timer_flag[0]==1){
				setTimer(0, yellowTime*1000);
				ledRoad1 = yellowTime-1;
				setYellow1();
				state = STATE_4;
			}
			break;
		case STATE_4:
			if(timer_flag[0]==1){
				setTimer(0,greenTime*1000);
				ledRoad1 = redTime-1;
				ledRoad2 = greenTime-1;
				setRed1();
				setGreen2();
				state=STATE_1;
			}
			break;
		default:
			break;
	}
}
