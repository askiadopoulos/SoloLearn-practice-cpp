/* 
 * File:   ifElse.cpp
 * Author: a.skiadopoulos
 *
 * Created on 23 February 2018, 22:50 pm
 * 
 * 
 * This simple function demonstrates how to use the if-else statement within
 * a basic program that accepts a student's score and then compares it with
 * several constants to give the desired results.
 */

/* System | User-Defined Headers | Predefined Library Functions */
#include "sololearn.h" //declare sololearn header
#include <iostream> //Standard Input/Output Stream

/* Built-in C++ Library Routines (standard namespace)  */
using::std::cin;
using::std::cout;
using::std::endl;

/* Definition of function ifElse() */
void ifElse()
{
    int x;

    do{
        cout << "\nGive your grade: ";
        cin >> x;
    }while(x<0 || x>20);

    if(x>=0 && x<10){
        cout << "\nGrade below base. You failed!\n";
    }
    else if(x>=10 && x<=15){
        cout << endl << "Grade above base. You passed!" << endl;
    }
    else if(x>15 && x<=18){
        cout << "\nYou passed with superior grade!\n";
    }
    else if(x>18 && x<=20){
        cout << endl << "Congratulations! You achieved an ultimate grade!"
             << endl;
    }
    else{
        cout << "Invalid entry\n";
    }
}
