/*
 * Name        : lab2.cpp
 * Author      : Marie Issel
 * Description : Recursive Functions
 */

#include "lab2.h"


unsigned int Factorial(unsigned int num)
{
    int temp;
	if(num <= 1) return 1;
	temp = num * Factorial(num - 1);
	return temp;
}

unsigned int Fibonacci(unsigned int fib_value)
{
    if (fib_value == 0) return 0;
    if (fib_value == 1) return 1;

    return Fibonacci(fib_value-1)+Fibonacci(fib_value-2);    
}

bool WordIsPalindrome(string word)
{
    int size = word.length();
    int cx=0;
    int i=0;
    int arr[size];
    string forwards="";
    string backwards="";
    if (size < 2) return true;
    while (i < size)
    {
        if (ispunct(word[i])) cx++;
        if (isdigit(word[i])) cx++;
        i++;
    }
    if (cx > 0) 
    {
        return false;
    }
    for (i=0; i<size; i++)
    {
        arr[i] = word[i];
    }
    
    forwards = ArrayForwardsAsString(arr, 0, size);
    backwards = ArrayBackwardsAsString(arr, size-1, size);

    return (forwards == backwards);
}

string ArrayForwardsAsString(int array[], unsigned int start, unsigned int size)
{
    stringstream ss;
    int s = 0;
    if (start <= size)
    {
        for (int i=start;i<size;i++)
        {
            s = array[i];
            ss << s << " "; 
        }
        return ss.str(); 
    }
    else return "";
    
}

string ArrayBackwardsAsString(int array[], int start, unsigned int size)
{
    stringstream ss;
    int s = 0;
    if (start < size)
    {
        for (int i=start;i>=0;i--)
        {
            s = array[i];
            ss << s << " "; 
        }
        return ss.str(); 
    }
    else return ""; 
    
}