/* 
 * File:   mathOperations.h
 * Author: a.skiadopoulos
 *
 * Created on 25 June 2018, 14:44 pm
 * 
 * 
 * This is the header file that holds all appropriate function (prototypes) 
 * and variable declarations. It also includes a template for the corresponding
 * class 'mathOperations{};'.
 */

/* Implementing Header Guards */
#ifndef MATHOPERATIONS_H
#define MATHOPERATIONS_H

/* A template for the class mathOperations{}; */
class mathOperations {
public:
    //method(s) declaration
    void setOperants(int a, int b);
    getAddition();
    getSubtraction();
    getMultiplication();
    getDivision();
    getModulus();
private:
    int x, y; //encapsulation
};

#endif /* MATHOPERATIONS_H */
