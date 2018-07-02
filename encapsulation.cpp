/* 
 * File:   encapsulation.cpp
 * Author: a.skiadopoulos
 * 
 * Created on 22 June 2018, 11:19 am
 * 
 * 
 * This simple class demonstrates one of the OOP fundamentals, the Encapsulation.
 * 
 * Encapsulation:
 * It is the idea of protecting (surrounding) an entity.
 * An object must only reveals what the other application components require to
 * effectively run the application. All else is kept out of view.
 * 
 * Black Boxing:
 * Closing the inner working zones of the object except of the pieces
 * that we want to make public. Allow us to change attributes and implementation
 * of methods without altering the overall program.
 */

/* System | User-Defined Headers | Predefined Library Functions */
#include "encapsulation.h" //Makes class Encapsulation visible
#include <iostream> //Standard Input/Output Stream

/* Built-in C++ Library Routines (standard namespace)  */
using::std::string;

/* Method(s) definition */

/* setName() sets a user string */
void Encapsulation::setName(string x){
    name = x;
}
/* getName() returns a string from the user */
string Encapsulation::getName(){
    return name;
}
