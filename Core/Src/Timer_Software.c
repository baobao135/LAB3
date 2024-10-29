/*
 * Timer_Software.c
 *
 *  Created on: Oct 27, 2024
 *      Author: baobu
 */

#include "Timer_Software.h"

int timer_flag[4]={0};
int timer_counter[4]={0};

void setTimer(int index ,int duration){
	timer_counter[index]=duration/TIME_CYCLE;
	timer_flag[index]=0;
}
void timer_run(){
	for(int i=0; i<4;i++){
		if(timer_counter[i]>0){
			timer_counter[i]--;
		}
		else
			timer_flag[i]=1;
	}
}
