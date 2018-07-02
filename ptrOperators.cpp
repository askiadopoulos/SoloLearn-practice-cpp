/* 
 * File:   ptrOperators.cpp
 * Author: a.skiadopoulos
 *
 * Created on 23 February 2018, 23:50 pm
 * 
 * 
 * This simple function demonstrates how to use variable pointers through
 * 3 different scenarios (A, B and C).
 *
 * In scenario (A), we used an integer (a) of which we stored the “address of”
 * into a pointer (*ptr_a) and assign the initial value 5.
 * In scenario (B), we store the address of the variable (b)
 * into the pointer (*ptr_b).
 * Then we store the value 10 at the variable where the pointer
 * is pointing to (variable b in this case).
 * In scenario C, we use 2 different variables (c, d) and one pointer (*ptr_c).
 *
 * Notice:
 * The asterisk sign (*) or dereference operator is used to get
 * the "value pointed by" a pointer.
 * The ampersand sign (&) or reference operator is used to get
 * the "address of" a variable.
 */

/* System | User-Defined Headers | Predefined Library Functions */
#include "sololearn.h" //declare sololearn header
#include <iostream> //Standard Input/Output Stream

/* Built-in C++ Library Routines (standard namespace)  */
using::std::cout;
using::std::endl;

/* Definition of function ptrOperators() */
void ptrOperators()
{
    /* Pointer Operators | Scenario (A) & (B) */
    
    /* Local Variable(s) & Pointer(s) declaration */
    int a = 5; //scenario (A)
    int b; //scenario (B)
    
    /* An untyped pointer (e.g.void) cannot be directly dereferenced
     * because it is not pointing at a specific type.
     * Note: The asterisk (*) sign in the declaration of the pointer does not
     * mean “value pointed by”, it only means that it is a pointer (it is part
     * of its type compound specifier). It should not be confused with the
     * dereference operator. They are simply two different things represented
     * with the same sign. */
    
    int *ptr_a, *ptr_b;
    
    
    /* Initialization of pointer(s) before first use */
    /* Stores the address of the variable (x, y) in the pointer (ptr_x, ptr_y) */
    
    ptr_a = &a; //scenario A
    ptr_b = &b; //scenario B
    *ptr_b = 10;
    
    cout << "\nScenario (A) and (B)" << endl;
    
    cout << "\nInitial value of the variables (a, b): " 
         << a << ", " << b << endl;
    
    cout << "\nAddress of the variables (a, b) using pointers (ptr_a, ptr_b): "
         << ptr_a << ", " << ptr_b << endl;
    
    cout << "Address of the variables (a, b) using reference operator (&a, &b): "
         << &a << ", " << &b << endl;
    
    /* Print the "value(s) pointed by" the pointer(s) */
    cout << "Value pointed by the pointers using the dereference operator"
            " (*ptr_a, *ptr_b): " << *ptr_a << ", " << *ptr_b << endl;
    
    /* Print the "address of" variable(s) pointer(s) */
    cout << "Address of the pointers using reference operator (&ptr_a, &ptr_b): "
         << &ptr_a << ", " << &ptr_b <<"\n\n\n";
    
    
    /* Pointer Operators | Scenario (C) */
    
    /* Local variable(s) & Pointer(s) declaration */
    int c = 7;
    int d = 17;
    
    
    /* The new operator: 
     * 
     * Returns the address of the space allocated for memory at run time within the HEAP.
     * 
     * In the statements below, memory allocation is done dynamically for
     * an integer (pointer) and assigned it the address of variable (c).
     * Furthermore, the pointer (ptr_c) is stored in the STACK as a local 
     * variable, and holds the HEAP's allocated address as its value.
     * The value of 7 is stored at that address in the HEAP through the address
     * of variable (c). */
    
    int *ptr_c = new int;
    ptr_c = &c;
    
    c += d + 6;
    
    cout << "\nScenario (C)" << endl;
    cout << "\nInitial value of variables (c, d): " << c << ", " << d << endl;
    
    do{
        if(c == 30){
            cout << "\nThe value of variable (c) is: " << c << endl;
            d += *ptr_c + 3;
        }
        if(d > c){
            cout << "The value of variable (d) is: " << d << endl;
            *ptr_c -= d; //this stores a negative sign number as the value pointed by the pointer
        }
        if(d%c != 0 && c < 0){
            cout << "The value of variable (c) using pointer's dereference"
                    " operator (*ptr_c) is: " << *ptr_c << endl;
            *ptr_c += 40;
            
            cout << "Value pointed by the pointer using dereference operator"
                    " (*ptr_c) (before delete): " << *ptr_c << endl;
            
            cout << "Address of the variable (c) using pointer"
                    " (ptr_c) (before delete): " << ptr_c << endl;
            
            cout << "Address of the pointer using reference operator"
                    " (&ptr_c) (before delete): " << &ptr_c << endl;
        }
        if(c != d){
            delete ptr_c; //releases the memory pointed to by the pointer
            cout << "Value pointed by the pointer using dereference operator"
                    " (*ptr_c) (after delete): " << *ptr_c << endl;
            
            cout << "Address of the pointer using reference operator"
                    " (&ptr_c) (after delete): " << &ptr_c << endl;
        }
        
        /* The delete operator:
         * 
         * Deallocates the memory block pointed by ptr_* (if not null), releasing
         * the storage space previously allocated to it by a call to operator
         * new and rendering that pointer location invalid. */
        
        ptr_c = new int; //reuse pointer for a new address - no dangling pointer
        
        cout << "Value pointed by the pointer using dereference operator"
                " (*ptr_c) (after reuse): " << *ptr_c << endl;
        
        cout << "Address of the variable (c) using pointer"
                " (ptr_c) (after reuse): " << ptr_c << endl;
        
        cout << "Address of the pointer using reference operator"
                " (&ptr_c) (after reuse): " << &ptr_c << endl;
        
    }while(d < 50);
    
    cout << "\n\n\n";
}
