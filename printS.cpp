/* 
 * File:   printS.cpp
 * Author: a.skiadopoulos
 *
 * Created on 19 June 2018, 14:59 pm
 * 
 * 
 * Function Overloading:
 * This simple function streams data such as strings, integers, characters,
 * floating point numbers to the screen as an output.
 */

/* System | User-Defined Headers | Predefined Library Functions */
#include <iostream> //Standard Input/Output Stream

/* Built-in C++ Library Routines (standard namespace)  */
using::std::cout;
using::std::endl;

/* Method(s) definition */

//prints integers
void printS(int var){
    cout << "\n" << var << endl;
}
//prints floating point numbers
void printS(float var){
    cout << "\n" << var << endl;
}
//prints characters
void printS(char var){
    cout << "\n" << var << endl;
}
//prints strings
void printS(std::string var){
    cout << "\n" << var << endl;
}
