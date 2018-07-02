/* 
 * File:   constructors.h
 * Author: a.skiadopoulos
 *
 * Created on 27 June 2018, 16:48 pm
 * 
 * 
 * This is the header file that holds all appropriate function (prototypes) 
 * and variable declarations. It also includes a template for the corresponding
 * class 'Constructors{};'.
 */

/* Implementing Header Guards */
#ifndef CONSTRUCTORS_H
#define CONSTRUCTORS_H

/* Predefined Library Functions */
#include <string> //String Class C++ Library

/* Built-in C++ Library Routines (standard namespace)  */
using::std::string;

/* A template for the class Constructors{}; */
class Constructors {
public:
    Constructors(string constText); //constructor declaration
    void setText(string methodText); //method declaration
    string getText(); //method declaration
private:
    string text; //encapsulation
};

#endif /* CONSTRUCTORS_H */

