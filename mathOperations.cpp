/* 
 * File:   mathOperations.cpp
 * Author: a.skiadopoulos
 * 
 * Created on 25 June 2018, 14:44 pm
 * 
 * 
 * This simple class contains all the corresponding functions
 * that implementing all the necessary math operations.
 */ 

/* System | User-Defined Headers | Predefined Library Functions */
#include "mathOperations.h" //Makes class mathOperations visible
#include <iostream> //Standard Input/Output Stream

/* Built-in C++ Library Routines (standard namespace)  */
using::std::cout;
using::std::endl;

/* Construction(s) & Method(s) definition */

//The user can define variables through setOperants()
void mathOperations::setOperants(int a, int b){
    x = a;
    y = b;
}
//Adds two numbers
mathOperations::getAddition(){
    return (x + y);
}
//Subtracts two numbers
mathOperations::getSubtraction(){
    return (x - y);
}
//Multiplies two numbers
mathOperations::getMultiplication(){
    return (x * y);
}
//Divides two numbers
mathOperations::getDivision(){
    if(y==0){
        cout << "Cannot divide by zero. Operation terminated.\n" << endl;
        return (0);
    }
    else{
        return (x / y);
    }
}
//Gets the modulus (remainder) of two numbers
mathOperations::getModulus(){
    return (x % y);
}
