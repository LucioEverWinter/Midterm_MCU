/*
 * display.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Admin
 */

#include "display.h"

void display7SEG(){
	switch(num){
	case 0:
		HAL_GPIO_WritePin ( LED7_0_GPIO_Port , LED7_0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_1_GPIO_Port , LED7_1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_2_GPIO_Port , LED7_2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_3_GPIO_Port , LED7_3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_4_GPIO_Port , LED7_4_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_5_GPIO_Port , LED7_5_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_6_GPIO_Port , LED7_6_Pin , GPIO_PIN_SET ) ;
		break;
	case 1:
		HAL_GPIO_WritePin ( LED7_0_GPIO_Port , LED7_0_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_1_GPIO_Port , LED7_1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_2_GPIO_Port , LED7_2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_3_GPIO_Port , LED7_3_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_4_GPIO_Port , LED7_4_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_5_GPIO_Port , LED7_5_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_6_GPIO_Port , LED7_6_Pin , GPIO_PIN_SET ) ;
		break;
	case 2:
		HAL_GPIO_WritePin ( LED7_0_GPIO_Port , LED7_0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_1_GPIO_Port , LED7_1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_2_GPIO_Port , LED7_2_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_3_GPIO_Port , LED7_3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_4_GPIO_Port , LED7_4_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_5_GPIO_Port , LED7_5_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_6_GPIO_Port , LED7_6_Pin , GPIO_PIN_RESET ) ;
		break;
	case 3:
		HAL_GPIO_WritePin ( LED7_0_GPIO_Port , LED7_0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_1_GPIO_Port , LED7_1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_2_GPIO_Port , LED7_2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_3_GPIO_Port , LED7_3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_4_GPIO_Port , LED7_4_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_5_GPIO_Port , LED7_5_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_6_GPIO_Port , LED7_6_Pin , GPIO_PIN_RESET ) ;
		break;
	case 4:
		HAL_GPIO_WritePin ( LED7_0_GPIO_Port , LED7_0_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_1_GPIO_Port , LED7_1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_2_GPIO_Port , LED7_2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_3_GPIO_Port , LED7_3_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_4_GPIO_Port , LED7_4_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_5_GPIO_Port , LED7_5_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_6_GPIO_Port , LED7_6_Pin , GPIO_PIN_RESET ) ;
		break;
	case 5:
		HAL_GPIO_WritePin ( LED7_0_GPIO_Port , LED7_0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_1_GPIO_Port , LED7_1_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_2_GPIO_Port , LED7_2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_3_GPIO_Port , LED7_3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_4_GPIO_Port , LED7_4_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_5_GPIO_Port , LED7_5_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_6_GPIO_Port , LED7_6_Pin , GPIO_PIN_RESET ) ;
		break;
	case 6:
		HAL_GPIO_WritePin ( LED7_0_GPIO_Port , LED7_0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_1_GPIO_Port , LED7_1_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_2_GPIO_Port , LED7_2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_3_GPIO_Port , LED7_3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_4_GPIO_Port , LED7_4_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_5_GPIO_Port , LED7_5_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_6_GPIO_Port , LED7_6_Pin , GPIO_PIN_RESET ) ;
		break;
	case 7:
		HAL_GPIO_WritePin ( LED7_0_GPIO_Port , LED7_0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_1_GPIO_Port , LED7_1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_2_GPIO_Port , LED7_2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_3_GPIO_Port , LED7_3_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_4_GPIO_Port , LED7_4_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_5_GPIO_Port , LED7_5_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_6_GPIO_Port , LED7_6_Pin , GPIO_PIN_SET ) ;
		break;
	case 8:
		HAL_GPIO_WritePin ( LED7_0_GPIO_Port , LED7_0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_1_GPIO_Port , LED7_1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_2_GPIO_Port , LED7_2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_3_GPIO_Port , LED7_3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_4_GPIO_Port , LED7_4_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_5_GPIO_Port , LED7_5_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_6_GPIO_Port , LED7_6_Pin , GPIO_PIN_RESET ) ;
		break;
	case 9:
		HAL_GPIO_WritePin ( LED7_0_GPIO_Port , LED7_0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_1_GPIO_Port , LED7_1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_2_GPIO_Port , LED7_2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_3_GPIO_Port , LED7_3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_4_GPIO_Port , LED7_4_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_5_GPIO_Port , LED7_5_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_6_GPIO_Port , LED7_6_Pin , GPIO_PIN_RESET ) ;
		break;
	default:
		HAL_GPIO_WritePin ( LED7_0_GPIO_Port , LED7_0_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_1_GPIO_Port , LED7_1_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_2_GPIO_Port , LED7_2_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_3_GPIO_Port , LED7_3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_4_GPIO_Port , LED7_4_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_5_GPIO_Port , LED7_5_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_6_GPIO_Port , LED7_6_Pin , GPIO_PIN_RESET ) ;

	}
}
