/*
 * fsm_manual.c
 *
 *  Created on: Oct 27, 2024
 *      Author: baobu
 */

#include "fsm_manual.h"

int tempValue;
int led_counter;

void modeRun(){
	switch(mode){
		case INIT:
			led_counter=2;
			setTimer(1, 500);
			seg1();
			Auto_run();
			mode = MODE1;
			break;
		case MODE1:
			Auto_run();
			if(timer_flag[1]==1){
				setTimer(1,500);
				if(led_counter==2){
					seg2();
					ledRoad1--;
					ledRoad2--;
					led_counter=0;
				}
				else seg1();
				led_counter++;
			}
			if(isButtonPressed(BUTTON_1_PRESS)==1){
				setTimer(2,10000);
				tempValue = redTime;
				mode = MODE2;
			}
			break;
		case MODE2:
			if(timer_flag[2]==1){
				mode=MODE1;
			}
			if(timer_flag[1]==1){
				blinkRed_Led();
				if(led_counter==2){
					update7SEG_Value1(SEG1_VALUE, tempValue);
					update7SEG_Value2(SEG3_VALUE, mode);
					led_counter=0;
				}
				else {
					update7SEG_Value1(SEG2_VALUE, tempValue);
					update7SEG_Value2(SEG4_VALUE, mode);
				}
				led_counter++;
				setTimer(1, 500);
			}
			if(isButtonPressed(BUTTON_1_PRESS)==1){
				setTimer(2,10000);
				tempValue = yellowTime;
				mode = MODE3;
			}
			if(isButtonPressed(BUTTON_2_PRESS)==1){
				setTimer(2,10000);
				if(tempValue>99){
					tempValue=1;
				}
				tempValue++;
			}
			if(isButtonPressed(BUTTON_3_PRESS)==1){
				setTimer(2,10000);
				redTime=tempValue;
			}
			break;
		case MODE3:
			if(timer_flag[2]==1){
				mode=MODE1;
			}
			if(timer_flag[1]==1){
				blinkYellow_Led();
				if(led_counter==2){
					update7SEG_Value1(SEG1_VALUE, tempValue);
					update7SEG_Value2(SEG3_VALUE, mode);
					led_counter=0;
				}
				else {
					update7SEG_Value1(SEG2_VALUE, tempValue);
					update7SEG_Value2(SEG4_VALUE, mode);
				}
				led_counter++;
				setTimer(1, 500);
			}
			if(isButtonPressed(BUTTON_1_PRESS)==1){
				setTimer(2,10000);
				tempValue = greenTime;
				mode = MODE4;
			}
			if(isButtonPressed(BUTTON_2_PRESS)==1){
				setTimer(2,10000);
				if(tempValue>99){
					tempValue=1;
				}
				tempValue++;
			}
			if(isButtonPressed(BUTTON_3_PRESS)==1){
				setTimer(2,10000);
				yellowTime=tempValue;
			}
			break;
		case MODE4:
			if(timer_flag[2]==1){
				mode=MODE1;
			}
			if(timer_flag[1]==1){
				blinkGreen_Led();
				if(led_counter==2){
					update7SEG_Value1(SEG1_VALUE, tempValue);
					update7SEG_Value2(SEG3_VALUE, mode);
					led_counter=0;
				}
				else {
					update7SEG_Value1(SEG2_VALUE, tempValue);
					update7SEG_Value2(SEG4_VALUE, mode);
				}
				led_counter++;
				setTimer(1, 500);
			}
			if(isButtonPressed(BUTTON_1_PRESS)==1){
				setTimer(2,10000);
				state = STATE_0;
				mode = MODE1;
			}
			if(isButtonPressed(BUTTON_2_PRESS)==1){
				setTimer(2,10000);
				if(tempValue>99){
					tempValue=1;
				}
				tempValue++;
			}
			if(isButtonPressed(BUTTON_3_PRESS)==1){
				setTimer(2,10000);
				greenTime=tempValue;
			}
			break;
		default:
			break;
	}

}
