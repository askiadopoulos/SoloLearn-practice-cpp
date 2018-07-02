/* 
 * File:   doWhile.cpp
 * Author: a.skiadopoulos
 *
 * Created on 23 February 2018, 22:25 pm
 * 
 * 
 * This simple function demonstrates the functionality of While-Do/Do-While loops.
 * It finds the square root of a range of numbers given by the user at run time.
 */

/* System | User-Defined Headers | Predefined Library Functions */
#include "sololearn.h" //declare sololearn header
#include <iostream> //Standard Input/Output Stream
#include <math.h> //Parametric manipulations
#include <iomanip> //Mathematical functions

/* Built-in C++ Library Routines (standard namespace)  */
using::std::cin;
using::std::cout;
using::std::endl;
using::std::setprecision;
using::std::ios;

/* Definition of function doWhile() */
void doWhile()
{
    /* Local variable(s) declaration */
    int init, term;
    double sqr;
    
    cout << "\nEnter the range of numbers to find their square root!\n";
    
    /* Do-While loop */
    do
    {
        cout << "\nEnter an initial number: ";
        cin >> init;
        cout << "Enter a terminal number: ";
        cin >> term;
    }while(init < 0 || init > term); //condition for exiting the loop
    
    
    /* In the above statement: "fixed" is referred to as a format option.
     * Display decimal point and trailing zeros for all floating point numbers,
     * even if the decimal places are not needed.
     * Note: You can remove these options by replacing setf() with unsetf(). */
    cout.setf(ios::fixed);
    cout << endl;
    
    /* Function pow(): computes a base number raised to the power of exponent number */
    
     /* While-Do loop */
    while(init <= term)
    {
        sqr = pow(init, 0.5); //pow takes two arguments, base and exponent
        cout << "The square of " << init << " is: "
             << setprecision(3) << sqr << endl;
        init++;
    }
    cout << endl;
}
