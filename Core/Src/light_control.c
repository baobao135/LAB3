/*
 * light_control.c
 *
 *  Created on: Oct 27, 2024
 *      Author: baobu
 */

#include "main.h"

void clearAll_Led(){
	HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, 0);
	HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, 0);
	HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, 0);
	HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, 0);
	HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, 0);
	HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, 0);
}
void setAll_Led(){
	HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, 1);
	HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, 1);
	HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, 1);
	HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, 1);
	HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, 1);
	HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, 1);
}
void blinkRed_Led(){
	HAL_GPIO_TogglePin(RED1_GPIO_Port, RED1_Pin);
	HAL_GPIO_TogglePin(RED2_GPIO_Port, RED2_Pin);
	HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, 0);
	HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, 0);
	HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, 0);
	HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, 0);
}
void blinkYellow_Led(){
	HAL_GPIO_TogglePin(YELLOW1_GPIO_Port, YELLOW1_Pin);
	HAL_GPIO_TogglePin(YELLOW2_GPIO_Port, YELLOW2_Pin);
	HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, 0);
	HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, 0);
	HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, 0);
	HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, 0);
}
void blinkGreen_Led(){
	HAL_GPIO_TogglePin(GREEN1_GPIO_Port, GREEN1_Pin);
	HAL_GPIO_TogglePin(GREEN2_GPIO_Port, GREEN2_Pin);
	HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, 0);
	HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, 0);
	HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, 0);
	HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, 0);
}

void setRed1(){
	HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, 1);
	HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, 0);
	HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, 0);
}
void setYellow1(){
	HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, 0);
	HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, 1);
	HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, 0);
}
void setGreen1(){
	HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, 0);
	HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, 0);
	HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, 1);
}

void setRed2(){
	HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, 1);
	HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, 0);
	HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, 0);
}
void setYellow2(){
	HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, 0);
	HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, 1);
	HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, 0);
}
void setGreen2(){
	HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, 0);
	HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, 0);
	HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, 1);
}

