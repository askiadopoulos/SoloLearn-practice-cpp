/* 
 * File:   ptrArrays.cpp
 * Author: a.skiadopoulos
 *
 * Created on 23 February 2018, 23:20 pm
 * 
 * 
 * This simple function demonstrates how to use variable pointers by increasing
 * their values with different technics and finally print them on screen.
 *
 * The asterisk sign (*) or dereference operator is used
 * to get the "value pointed by" a pointer.
 */

/* Prototype for function printS() | Function Overloading */
#include "sololearn.h" //declare sololearn header
#include <iostream> //Standard Input/Output Stream

/* Built-in C++ Library Routines (standard namespace)  */
using::std::cout;

/* Definition of function ptrArrays() */
void ptrArrays()
{
    int num[5];
    int *ptr_arr;
    
    /* line 24: ptr_arr points at the first [0] element of array
     * line 25: integer 1 is stored as the value pointed by the pointer *ptr_arr */
    ptr_arr = num;
    *ptr_arr = 1;
    
    /* line 30: ptr_arr increased by 1
     * line 31: integer 2 is stored as the value pointed by the pointer *ptr_arr */
    ptr_arr++;
    *ptr_arr = 2;
    
    /* line 36: ptr_arr points at the address of the third [2] element of array
     * line 37: integer 3 is stored as the value pointed by the pointer *ptr_arr */
    ptr_arr = &num[2];
    *ptr_arr = 3;
    
    /* line 43: ptr_arr points at the fourth [3] element of array by increasing
     * the first [0] element by 3.
     * line 44: integer 4 is stored as the value pointed by the pointer *ptr_arr */
    ptr_arr = num + 3;
    *ptr_arr = 4;
    
    /* line 50: ptr_arr points at the first [0] element of array
     * line 51: ptr_arr points at the fifth [4] element of array by increasing
     * the first [0] element by 4 and then, integer 5 is stored as the value
     * pointed by the pointer *ptr_arr */
    ptr_arr = num;
    *(ptr_arr + 4) = 5;
    
    //print value of each element in array
    for(int i=0; i<5; i++){
        cout << num[i] << "\n";
    }    
}
