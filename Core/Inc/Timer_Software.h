/*
 * Timer_Software.h
 *
 *  Created on: Oct 27, 2024
 *      Author: baobu
 */

#ifndef INC_TIMER_SOFTWARE_H_
#define INC_TIMER_SOFTWARE_H_

#define TIME_CYCLE 10;

extern int timer_flag[4];

void setTimer(int index, int duration);
void timer_run();

#endif /* INC_TIMER_SOFTWARE_H_ */
