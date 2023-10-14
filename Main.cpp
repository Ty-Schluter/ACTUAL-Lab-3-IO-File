/*
* Name: Ty Schluter
* Lab Name: Lab 3 User and File I/O
• Description: Write an interactive C++ program that computes and outputs
the mean and population standard deviation of a set of four integers that 
are inputted by a file called “inMeanStd.dat” and the user (should handle 
both). Although the individual values are integers, the results are 
floating-point values. Be sure to use proper formatting and appropriate comments
in your code. Provide appropriate prompts to the user. The output should be 
to the screen for the user inputted values and to a file called “outMeanStd.dat”.
The programs output should be labeled clearly and formatted neatly.
You must calculate the mean and standard deviation in separate methods within
a class.
*/
#include <iostream>
#include <fstream>
#include <cmath>
#include "StatsClass.h" // loads the class object 

float func(int a, int b, int c, int d); // Creates a mean from the file data.

int main()
{
	Stats v; // Calls the class object for coding, however it just doesn't want to call it?
	float a, b, c, d; // Identifies the variables for calling
	float w, x, y, z;
	std::ifstream mean("inMeanStd.dat"); // Call the inMeanStd file for data
	mean >> a >> b >> c >> d; // "Collects" the data

	std::ofstream mean1; // Creates a "calling name" for the output file
	mean1.open("outMeanStd.dat"); // Opens the file so it's able to recieve data

	mean1 << "The average of file data: " << a << ", " << b << ", " << c << ", and ";
	mean1 << d << " is " << func(a, b, c, d) << std::endl; // Should "transfer/output" the apporiate message to the outMeanStd file.

	std::cout << "Mean of File Data: " << func(a, b, c, d) << std::endl; // Outputs the message to the screen. 
	std::cout << "Please insert 4 integers." << std::endl << "Please insert the first integer: ";
	std::cin >> w;// Lets the user input the data asked for.
	std::cout << "Please insert the second integer: ";
	std::cin >> x;
	std::cout << "Please insert the third integer: ";
	std::cin >> y;
	std::cout << "Please insert the fourth integer: ";
	std::cin >> z;
	std::cout << v.getMean() << std::endl; // Supposed to call the function for calculating the mean, but instead outputs a 0
	std::cout << v.getSTDev()<< std::endl;
	return 0;
}



float func( int a, int b, int c, int d)
{
	return (a + b + c + d) / 4.0;
}


