/* 
 * File:   swapNums.cpp
 * Author: a.skiadopoulos
 *
 * Created on 21 June 2018, 10:58 pm
 * 
 * 
 * This simple function demonstrates the two most prevalent methods to pass
 * values in functions (By Value and By Reference), by swapping values on numbers.
 */

/* System | User-Defined Headers | Predefined Library Functions */
#include "sololearn.h" //declare sololearn header
#include <iostream> //Standard Input/Output Stream

/* Method(s) definition */

/* Passing arguments by Value:
 * 
 * This method copies the argument's actual value into the functions formal
 * parameter. Changes can be made to the parameter(s) within the function,
 * without having any affect on the argument(s).
 */
void swapNums(int x, int y){
    int swap = x;
    x = y;
    y = swap;
}

/* Passing arguments by Reference:
 * 
 * This method copies the argument's reference into the formal parameter.
 * The reference is used to access the actual argument used in the call.
 * Any changes made to the parameter affects the argument.
 */
void swapNums(int *x, int *y){
    int swap = *x;
    *x = *y;
    *y = swap;
}
/* Notice:
 * Passing arguments by Value is faster and more effective.
 * Pass By Reference is recommended when the function needs to modify the
 * argument, or when a data type needs to be passed.
 */
