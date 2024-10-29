/*
 * fsm_manual.h
 *
 *  Created on: Oct 27, 2024
 *      Author: baobu
 */

#ifndef INC_FSM_MANUAL_H_
#define INC_FSM_MANUAL_H_

#include "global.h"
#include "Button.h"
#include "light_control.h"
#include "fsm_auto.h"

#define INIT 0
#define MODE1 1
#define MODE2 2
#define MODE3 3
#define MODE4 4

void modeRun();

#endif /* INC_FSM_MANUAL_H_ */
