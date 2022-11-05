/*
 * fsm.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Admin
 */

#include "fsm.h"
#include "global.h"
//#include "button.h"
//#include "main.h"


void fsm_simple_buttons_run () {
	switch (state) {
		case 1:
			if (isButton1Pressed() == 1){
				state = 2;
				num = state;
			}
			if (isButton2Pressed() == 1) {
				state = 0;
				num = state;
			}
			if (isButton3Pressed() == 1) {
				state = 0;
				num = state;
			}
			break;
		case 2:
			if (isButton1Pressed() == 1) {
				state = 3;
				num = state;
			}
			if (isButton2Pressed() == 1) {
				state = 1;
				num = state;
			}
			if (isButton3Pressed() == 1) {
				state = 0;
				num = state;
			}
			break;
		case 3:
			if (isButton1Pressed() == 1) {
				state = 4;
				num = state;
			}
			if (isButton2Pressed() == 1) {
				state = 2;
				num = state;
			}
			if (isButton3Pressed() == 1) {
				state = 0;
				num = state;
			}
			break;
		case 4:
			if (isButton1Pressed() == 1) {
				state = 5;
				num = state;
			}
			if (isButton2Pressed() == 1) {
				state = 3;
				num = state;
			}
			if (isButton3Pressed() == 1) {
				state = 0;
				num = state;
			}
			break;
		case 5:
			if (isButton1Pressed() == 1) {
				state = 6;
				num = state;
			}
			if (isButton2Pressed() == 1) {
				state = 4;
				num = state;
			}
			if (isButton3Pressed() == 1) {
				state = 0;
				num = state;
			}
			break;
		case 6:
			if (isButton1Pressed() == 1) {
				state = 7;
				num = state;
			}
			if (isButton2Pressed() == 1) {
				state = 5;
				num = state;
			}
			if (isButton3Pressed() == 1) {
				state = 0;
				num = state;
			}
			break;
		case 7:
			if (isButton1Pressed() == 1) {
				state = 8;
				num = state;
			}
			if (isButton2Pressed() == 1) {
				state = 6;
				num = state;
			}
			if (isButton3Pressed() == 1) {
				state = 0;
				num = state;
			}
			break;
		case 8:
			if (isButton1Pressed() == 1) {
				state = 9;
				num = state;
			}
			if (isButton2Pressed() == 1) {
				state = 7;
				num = state;
			}
			if (isButton3Pressed() == 1) {
				state = 0;
				num = state;
			}
			break;
		case 9:
			if (isButton1Pressed() == 1) {
				state = 0;
				num = state;
			}
			if (isButton2Pressed() == 1) {
				state = 8;
				num = state;
			}
			if (isButton3Pressed() == 1) {
				state = 0;
				num = state;
			}
			break;
		case 0:

			if (isButton1Pressed() == 1) {
				state = 1;
				num = state;
			}
			if (isButton2Pressed() == 1) {
				state = 9;
				num = state;
			}
			if (isButton3Pressed() == 1) {
				state = 0;
				num = state;
			}
			break;
		default:
			break;
	}
}
