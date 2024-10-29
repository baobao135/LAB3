/*
 * led_display.c
 *
 *  Created on: Oct 28, 2024
 *      Author: baobu
 */

#include "led_display.h"

void display7SEG(int counter){
	switch(counter){
		case 0:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, SET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, SET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, SET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, SET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, SET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, SET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, SET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, SET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
			break;
		default:
			break;
	}
}
void display7SEG1(int counter){
	HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
	HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
	HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
	HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
	HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
	HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
	HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
	switch(counter){
		case 0:
			HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
			HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
			HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, SET);
			HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
			HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, SET);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
			HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
			HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, SET);
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
			HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
			HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, SET);
			HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
			HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, SET);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
			HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, SET);
			HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
			HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, SET);
			HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
			HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
			HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, SET);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
			HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
			HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
			HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
			HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
			break;
		default:
			break;
	}
}
void update7SEG_Value1 (int index, int data){
	switch (index){
		case SEG1_VALUE:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			display7SEG(data/10);
			break;
		case SEG2_VALUE:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			display7SEG(data%10);
			break;

		default:
			break;
	}
}
void update7SEG_Value2 (int index, int data){
	switch(index){
		case SEG3_VALUE:
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			display7SEG1(data/10);
			break;
		case SEG4_VALUE:
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
			display7SEG1(data%10);
			break;
		default:
			break;
	}
}
void seg1(){
	update7SEG_Value1(SEG1_VALUE, ledRoad1);
	update7SEG_Value2(SEG3_VALUE, ledRoad2);
}
void seg2(){
	update7SEG_Value1(SEG2_VALUE, ledRoad1);
	update7SEG_Value2(SEG4_VALUE, ledRoad2);
}
