/*
 * Button.c
 *
 *  Created on: Oct 27, 2024
 *      Author: baobu
 */

#include "Button.h"

int button_flag[NUM_BUTTON]={0};
int time_for_press[NUM_BUTTON]={0};

int KeyReg0[NUM_BUTTON] = {NORMAL_STATE};
int KeyReg1[NUM_BUTTON] = {NORMAL_STATE};
int KeyReg2[NUM_BUTTON] = {NORMAL_STATE};
int KeyReg3[NUM_BUTTON] = {NORMAL_STATE};

int isButtonPressed(int num){
	if(button_flag[num] == 1){
		button_flag[num] = 0;
		return 1;
	}
	return 0;
}

void subPressKey(int num){
	button_flag[num]=1;
}

void getKeyInput(){
	for(int i=0; i<NUM_BUTTON;i++){

		KeyReg0[i] = KeyReg1[i];
		KeyReg1[i] = KeyReg2[i];

		if(i==0) KeyReg2[i] = HAL_GPIO_ReadPin(BUTTON_1_GPIO_Port, BUTTON_1_Pin);
		else if (i==1) KeyReg2[i] = HAL_GPIO_ReadPin(BUTTON_2_GPIO_Port, BUTTON_2_Pin);
		else if (i==2) KeyReg2[i] = HAL_GPIO_ReadPin(BUTTON_3_GPIO_Port, BUTTON_3_Pin);

		if(KeyReg0[i] == KeyReg1[i] && KeyReg1[i] == KeyReg2[i]){
			if(KeyReg3[i] != KeyReg2[i]){
				KeyReg3[i] = KeyReg2[i];
				if(KeyReg2[i] == PRESS_STATE ){
					time_for_press[i] = TIME_FOR_PRESS_KEY;
					subPressKey(i);
				}
				else{
					time_for_press[i]--;
					if(time_for_press[i]==0){
						KeyReg3[i] = NORMAL_STATE;
					}
				}
			}
		}
	}
}
