/* 
 * File:   recursion.cpp
 * Author: a.skiadopoulos
 * 
 * Created on 27 June 2018, 14:31 pm
 * 
 * 
 * The below recursive function is used to find the factorial of a given number.
 * A ternary operator is been used inside the function body in order to avoid
 * having the recursion run indefinitely, which alternatively called "base case". 
 */

/* Definition of function factorial() */
int factorial(int n){
    return (n <= 0 || n <= 1) ? 1 : n*(factorial(n-1));
}