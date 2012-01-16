/* *********************************************************************
 * Liam Boyle
 * CIS 252-55Z1
 * Assignment:	Assignment 2 part 1
 * Filename:	NumberDemo.cpp
 * Purpose:		Arithmetic demo
 * Compiled for:	Ubuntu Linux 11.10
 * Compiled with:	g++ 4.6.1
 * IDE:				Geany 0.20
 * < date >
 * *********************************************************************
 */
 
// Include and Using Statements
#include<iostream>
#include<cstdlib>	// included for general principle

using namespace std;

//Function Prototypes
	// pass

// Global Variable Declarations
int ExitStatusVar = 0;

int main()
{
	// Main function variable declarations
	int a, b, c;
	double x, y, z;
	
	// Main function code body
	
	// Assignment statements
	a = 13;
	b = 4;
	x = 3.3;
	y = 15.78;
	
	// body code
	c = a+b;
	cout << "a + b is: " << c << endl;
	z = x+y;
	cout << "x + y is: " << z << endl;
	
	c = a/b;
	cout << "a / b is: " << c << endl;
	
	c = a%b;
	cout << "a % b is: " << c << endl;
	
	return ExitStatusVar;
}

// Function Definitions
	//pass
