#include "MOTOR_DRIVER.h"
#include "stdlib.h"
#include "main.h"
//define a structure do this is main.c?

//start motor

/**@file
 * @brief Starts the selected motor at the desired duty cycle provided in the structure given in the argument of the function.
 */
void startm(my_struct_t str){
	int8_t test = str.dutycycle*0.01*50000;
	if (str.motornum == 1){	//Right motor
		//change CCR1 AND CCR2
		if (str.dutycycle > 0){
			TIM2->CCR3 = str.dutycycle*0.01*50000;
			TIM2->CCR4 = 0;
		}
		if (str.dutycycle < 0){
			TIM2->CCR3 = 0;
			TIM2->CCR4 = str.dutycycle*0.01*50000*-1;
		}
		if (str.dutycycle == 0){
			TIM2->CCR3 = 0;
			TIM2->CCR4 = 0;
		}
	}
	else if (str.motornum == 2){
		//change CCR3 AND CCR4
		if (str.dutycycle > 0){
			TIM3->CCR1 = str.dutycycle*0.01*50000;
			TIM3->CCR2 = 0;
		}
		if (str.dutycycle < 0){
			TIM3->CCR1 = 0;
			TIM3->CCR2 = str.dutycycle*0.01*50000*-1;
		}
		if (str.dutycycle == 0){
			TIM3->CCR1 = 0;
			TIM3->CCR2 = 0;
		}
	}
}
/*!
 * @brief Stops the motor specified in the structure passed to the function
 */
void stopm(my_struct_t str){
	if (str.motornum == 1){
		TIM2->CCR3 = 0;
		TIM2->CCR4 = 0;
	}
	if (str.motornum == 2){
		TIM3->CCR1 = 0;
		TIM3->CCR2 = 0;
		}
	else{
		//fprintf('Check input arguments!');
	}
}

//Remove some abstraction


//For right side

/*!
 * @brief Drive the right hand side forward at the specified dutycycle.
 */
void drivefwd_RHS(int dutycycle){
	TIM2->CCR3 = dutycycle*0.01*50000;
	TIM2->CCR4 = 0;
}

/*!
 * @brief Drive the right hand side backward at the specified dutycycle.
 */
void driverev_RHS(int dutycycle){
	TIM2->CCR4 = dutycycle*0.01*50000;
	TIM2->CCR3 = 0;
}
/*!
 * @brief Stop the right hand side, no argument required.
 */
void stop_RHS(){
	TIM2->CCR3 = 0;
	TIM2->CCR4 = 0;
}



//For left side

/*!
 * @brief Drive the left hand side forward at the specified dutycycle.
 */
void drivefwd_LHS(int dutycycle){
	TIM3->CCR2 = dutycycle*0.01*50000;
	TIM3->CCR1 = 0;
}

/*!
 * @brief Drive the left hand side backward at the specified dutycycle.
 */
void driverev_LHS(int dutycycle){
	TIM3->CCR1 = dutycycle*0.01*50000;
	TIM3->CCR2 = 0;
}

/*!
 * @brief Stop the left hand side, no argument required.
 */
void stop_LHS(int dutycycle){
	TIM3->CCR1 = 0;
	TIM3->CCR2 = 0;
}


