/* 
 * File:   encapsulation.h
 * Author: a.skiadopoulos
 *
 * Created on 25 June 2018, 15:23 pm
 * 
 * 
 * This is the header file that holds all appropriate function (prototypes) 
 * and variable declarations. It also includes a template for the corresponding
 * class 'Encapsulation{};'.
 */

/* Implementing Header Guards */
#ifndef ENCAPSULATION_H
#define ENCAPSULATION_H

/* Predefined Library Functions */
#include <iostream> //Standard Input/Output Stream

/* Built-in C++ Library Routines (standard namespace)  */
using::std::string;

/* A template for the class Encapsulation{}; */
class Encapsulation{
public:
    void setName(string x); //method declaration
    string getName(); //method declaration
private:
    string name; //encapsulation
};

#endif /* ENCAPSULATION_H */

