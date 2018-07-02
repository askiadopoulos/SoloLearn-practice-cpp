/* 
 * File:   arrInit.cpp
 * Author: a.skiadopoulos
 *
 * Created on 23 February 2018, 21:25 pm
 * 
 * 
 * This simple function initialize an array with elements through data entry.
 * It takes two parameters, one for the name and one (pointer) for the size of the array.
 */

/* System | User-Defined Headers | Predefined Library Functions */
#include "sololearn.h" //declare sololearn header
#include <iostream> //Standard Input/Output Stream

/* Built-in C++ Library Routines (standard namespace)  */
using::std::cin;
using::std::cout;
using::std::endl;

/* Definition of function arrInit() */
int arrInit(int arr[], int *size)
{
    cout << "\nEnter Array Size: ";
    cin >> *size;
    cout << endl;
    
    for(int i=0; i<*size; i++)
    {
        cout << "Array Index [" << i << "]." << " Enter a number to register: ";
        cin >> arr[i];
    }
    return (*size);
}
