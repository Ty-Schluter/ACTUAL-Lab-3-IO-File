#ifndef STATS_h // Makes sure it loads the class at least once
#define STATS_h

class Stats // creates the class
{
public:
	Stats(); // creates the object
	~Stats();// destroys the object

	void calcMean(double Mean_); // creates the function to calc the mean
	float getMean(); // creates the way to way to retrive the data

	void calcSTDev(double STDev_); // creates func. to calc the Std. dev.
	float getSTDev();


private:

	float w; // creates variables fr the source file
	float x;
	float y;
	float z;
	double STDev;
	double Mean;
	float easymath1;
	float easymath2;
	float easymath3;
	float easymath4;
};

#endif // makes sure the class only loads once 