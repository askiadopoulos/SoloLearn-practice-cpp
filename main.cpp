/* 
 * File:   main.cpp
 * Author: a.skiadopoulos
 *
 * Created on 27 Φεβρουαρίου 2018, 9:37 πμ 
 */

/* This is a workshop for SoloLearn C++ Online Course.
 * It implements algorithmic functions for making various operations with
 * integers, characters, strings and arrays as well as demonstrating the use of
 * program flow control structures, arithmetic operators, arrays, pointers etc */

/* library import */
#include <iostream>
#include <memory>

/* namespace(s) definition */
using namespace std;

/* explicit function declaration */
int arrInit(int arr[], int *size);
int arrSum(int arr[], int size);
void getPercentage();
void ptrOperators();
void ptrArrays();
void whileLoops();
void ifElse();

/* main method */
int main() {
    
    /* local variable(s) definition */
    int arrSize = 0, arrName[arrSize];
    
    /* call function(s) */
    int init = arrInit(arrName, &arrSize);
    int sum = arrSum(arrName, arrSize);
    
    arrInit();
    arrSum();
    getPercentage();
    ptrOperators();
    ptrArrays();
    whileLoops();  
    ifElse();

    return 0;
}

