/* 
 * File:   bankAccount.h
 * Author: a.skiadopoulos
 *
 * Created on 2 July 2018, 11:58 am
 * 
 * 
 * This is the header file that holds all appropriate function (prototypes) 
 * and variable declarations. It also includes a template for the corresponding
 * class 'BankAccount{};'.
 */

/* Implementing Header Guards */
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

/* A template for the class BankAccount{}; */
class BankAccount {
public:
    //method(s) declaration
    BankAccount(); //member function
    void deposit(double dp);
    void withdraw(double wd);
    double getBalance();
private:
    double balance = 0; //encapsulation
};

#endif /* BANKACCOUNT_H */

