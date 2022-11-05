/*
 * button.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Admin
 */

#include "button.h"
//#include "input_reading.c"
int KeyReg0[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg1[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg2[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg3[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};

int TimeOutForKeyPress[3] = {300, 300, 300};
int TimeOutForNoKeyPress = 1000;
int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;

int isButton1Pressed(){ // increase
	if(button1_flag == 1){
		button1_flag = 0;
		return 1;
	}
	return 0;
}

int isButton2Pressed(){ // decrease
	if(button2_flag == 1){
		button2_flag = 0;
		return 1;
	}
	return 0;
}

int isButton3Pressed(){ // reset
	if(button3_flag == 1){
		button3_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess(int i){
	if(i == 0)
		button1_flag = 1;
	else if(i == 1)
		button2_flag = 1;
	else if(i == 2)
		button3_flag = 1;
}

void getKeyInput(){
	for (int i = 0; i < 3; i++){
		KeyReg2[i] = KeyReg1[i];
		KeyReg1[i] = KeyReg0[i];

		if ( i == 0) {
			KeyReg0[i] = HAL_GPIO_ReadPin(BUTTON_IN_GPIO_Port, BUTTON_IN_Pin);
		}
		else if ( i == 1) {
			KeyReg0[i] = HAL_GPIO_ReadPin(BUTTON_DE_GPIO_Port, BUTTON_DE_Pin);
		}
		else if ( i == 2) {
			KeyReg0[i] = HAL_GPIO_ReadPin(BUTTON_RE_GPIO_Port, BUTTON_RE_Pin);
		}

		  if ((KeyReg1[i] == KeyReg0[i]) && (KeyReg1[i] == KeyReg2[i])){
			if (KeyReg2[i] != KeyReg3[i]){
			  KeyReg3[i] = KeyReg2[i];

			  if (KeyReg2[i] == PRESSED_STATE){

				subKeyProcess(i);

				TimeOutForKeyPress[i] = 300; // note: not need for step 1
				//One pressed
			  }
			}else{
			   TimeOutForKeyPress[i] --;
				if (TimeOutForKeyPress[i] == 0){
				  if (KeyReg2[i] == PRESSED_STATE){
					  subKeyProcess(i);
				  }
				  //Long pressed

				  TimeOutForKeyPress[i] = 300;
				}
		    }

			//if ( (button1_flag != 1) && (button2_flag != 1) && (button3_flag != 1)) {
			//	TimeOutForNoKeyPress --;
			//	if (TimeOutForNoKeyPress == 0){
			//		subKeyProcess(1);
			//	}
			//}
		}
	}
}
