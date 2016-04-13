/*
 * Name        : lab_1.cpp
 * Author      : Marie Issel
 * Description : Recursive Functions
 */

#include "lab1.h"
	
// CODE FUNCTION DEFINITIONS HERE

/*
 * UPDATE!!!! to match the requirements
 * Convert a decimal number to binary
 * @param number to be converted.
 * @return a stringstream.
 */
string decToBin(int num)
{
	stringstream ss;
	string s = "";

	if (num > 1) //note this makes the base case num = 0
	{
		s = decToBin(num/2); //recursive call
	}

	//cout<<num%2<<endl;
	ss<<s<<(num%2); //outputs in correct order
	return ss.str();
}

string binToDec(int num)
{
	stringstream ss;
	string s = "";

	if (num > 1) //note this makes the base case num = 0
	{
		s = binToDec(num/10); //recursive call
	}

	//cout<<num%2<<endl;
	ss<<s<<(num%2); //outputs in correct order
	return ss.str();
}

int main ()
{
	std::cout<<binToDec(1010)<<endl;
	return 0;
}