/* 
 * File:   arrSum.cpp
 * Author: a.skiadopoulos
 *
 * Created on 23 February 2018, 21:45 pm
 * 
 * 
 * This simple function returns the total sum of all numbers in an array.
 * It takes two parameters, one for the name and one for the size of the array.
 */

/* System | User-Defined Headers | Predefined Library Functions */
#include "sololearn.h" //declare sololearn header
#include <iostream> //Standard Input/Output Stream

/* Built-in C++ Library Routines (standard namespace)  */
using::std::cout;
using::std::endl;

/* Definition of function arrSum() */
int arrSum(int arr[], int size)
{
    int sum = 0;
    
    for(int i=0; i<size; i++)
    {
        sum+=arr[i];
    }
    cout << "The Total Sum of all numbers: " << sum << endl;
    return sum;
}
