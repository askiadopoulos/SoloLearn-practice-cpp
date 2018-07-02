/* 
 * File:   getPercentage.cpp
 * Author: a.skiadopoulos
 *
 * Created on 23 February 2018, 22:00 pm
 * 
 * 
 * This simple function returns the net percentage, the net amount
 * and the gross amount calculated on behalf of a given integer.
 */

/* System | User-Defined Headers | Predefined Library Functions */
#include "sololearn.h" //declare sololearn header
#include <iostream> //Standard Input/Output Stream

/* Built-in C++ Library Routines (standard namespace)  */
using::std::cin;
using::std::cout;

/* Definition of function getPercentage() */
void getPercentage()
{
    /* Local variable(s) declaration */
    float num, pct, net, gross;
    
    cout << "\nGive amount: ";
    cin >> num;
    
    cout << "Give percentage [%]: ";
    cin >> pct;
    
    net = num * pct / 100;
    cout << "\nNet Percentage: " << net;
    cout << "\nNet Amount (-) : " << num - net;
    cout << "\nGross amount (+) : " << num + net << "\n\n\n";
    
}
