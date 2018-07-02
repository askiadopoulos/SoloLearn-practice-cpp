/* 
 * File:   constructors.cpp
 * Author: a.skiadopoulos
 * 
 * Created on 27 June 2018, 16:34 pm
 * 
 * 
 * The following class simplifies Constructors as special member functions of
 * a class. They are executed whenever new objects are created within a class.
 * Their name is identical to that of the class. No return type, not even void.
 */

/* System | User-Defined Headers | Predefined Library Functions */
#include "constructors.h" //Makes class Constructors visible
#include <string> //String Class C++ Library

/* Built-in C++ Library Routines (standard namespace)  */
using::std::string;

/* Constructor(s) & Method(s) definition */

//The constText attribute is assigned to constructor using the setText() method
Constructors::Constructors(std::string constText){
    setText(constText);
}
//setText() sets a user string
void Constructors::setText(std::string methodText){
    text = methodText;
}
//getText() returns a string from the user
std::string Constructors::getText(){
    return text;
}
