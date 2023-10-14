#include "StatsClass.h" 
#include <iostream>
#include <cmath>

Stats::Stats()
{
	w = 0;
	x = 0;
	y = 0;
	z = 0;
	Mean = 0;
	STDev = 0;
	easymath1 = 0;
	easymath2 = 0;
	easymath3 = 0;
	easymath4 = 0;
}

Stats::~Stats()
{
}

void Stats::calcMean(double Mean_) // Creates func. to calc mean and is able to tranfer data
{
	Mean = Mean_;
	Mean = (w + x + y + z) / 4;
	std::cout << "This is the mean of the keyboard data you entered: " << Mean_;
}

float Stats::getMean() // the actual part if the func that is able to teansfer datd 
{
	return Mean; // returns the value
}

void Stats::calcSTDev(double STDev_)
{
	STDev = STDev_;
	easymath1 = pow(w - Mean, 2); // I did it this way becauce i think it's easier 
	easymath2 = pow(x - Mean, 2);// takes the specific variable and subracts mean all within the power of 2
	easymath3 = pow(y - Mean, 2);
	easymath4 = pow(z - Mean, 2);
	STDev = sqrt((easymath1 + easymath2 + easymath3 + easymath4) / 4); // takes sqrt of the sum of all x values then divides by 4.
	std::cout << "This is the Population Standard Deviation of the keyboard data: " << STDev; // supposed to output the value and message
}

float Stats::getSTDev()
{
	return STDev; // returns the value
}

