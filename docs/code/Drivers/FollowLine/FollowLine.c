/*
 * FollowLine.c
 *
 *  Created on: Jun 12, 2023
 *      Author: luish
 */

#include "main.h"
#include "MOTOR_DRIVER.h"
#include "LineSen.h"


uint8_t maxdutycycle = 75;//!<Maximum allowable duty cycle.
uint8_t basedutycycle = 50;//!<Nominal duty cycle for line following.
uint8_t str = 30;//!<Duty cycle for a straight path.
uint8_t delta_dc = 19.2;//!<Change in duty cycle applied to motors once a line detected.
uint8_t LHS_status = 0;//!<Line sensor status of left hand side.
uint8_t RHS_status = 0;//!<Line sensor status of right hand side.
uint8_t LHS_adj = 0;//!<Fixed adjustment of left hand side duty cycle.
uint8_t RHS_adj = 0;//!<Fixed adjustment of right hand side duty cycle.

/*!
 * Line following algorithm using one line sensor.
 */
void FollowLine(){

LHS_status = LineSenGetStatusLEFT();

	//if sensor is on line
	if (LHS_status == 1){
		//speed up the RHS motor
		driverev_LHS(15);
		driverev_RHS(25);
	}

	//if no line is detected
	else{
		//speed up the LHS motor
		driverev_LHS(25);
		driverev_RHS(15);
	}

}

/*!
 * Line following algorithm using two line sensors.
 */
void FollowLine2(){
LHS_status = LineSenGetStatusLEFT();
RHS_status = LineSenGetStatusRIGHT();

	if (LHS_status == 1 && RHS_status == 0){//Slow right motor
		driverev_RHS(basedutycycle - delta_dc);
		driverev_LHS(basedutycycle + delta_dc);

	}

	else if (RHS_status == 1 && LHS_status == 0){//Slow left motor
		driverev_RHS(basedutycycle + delta_dc);
		driverev_LHS(basedutycycle - delta_dc);
	}


	else if (RHS_status == LHS_status){//Travel in an arc around the arena
		driverev_LHS(str);
		driverev_RHS(str+20);
	}



}

/*!
 * Drives robot in a straight line
 */
void DriveStraight(){
	driverev_LHS(basedutycycle + LHS_adj);
	driverev_RHS(basedutycycle + RHS_adj);
}

/*!
 * Drives the robot in a circle that is approximately the radius of the ME507's competition arena
 */
void GoInCircle(){

	driverev_RHS(30);
	driverev_LHS(23);

}
