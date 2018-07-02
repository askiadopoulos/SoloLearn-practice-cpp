/* 
 * File:   bankAccount.cpp
 * Author: a.skiadopoulos
 * 
 * Created on 2 July 2018, 11:58 am
 * 
 * 
 * The implementation of the class 'BankAccount' and its methods go into the
 * source file cpp (bankAccount.cpp in out example).
 * Currently it includes an empty (default) constructor as well as all the
 * necessary methods for class 'BankAccount'.
 */

/* System | User-Defined Headers | Predefined Library Functions */
#include "bankAccount.h" //Makes class BankAccount visible
#include <iostream> //Standard Input/Output Stream

/* Built-in C++ Library Routines (standard namespace)  */
using::std::cin;
using::std::cout;

BankAccount::BankAccount(){
    /* Scope Resolution Operator:
     * It is used to define a particular class member functions, which have
     * already been declared.
     * For example, BankAccount::BankAccount() refers to the BankAccount()
     * member function - or in the above example - to the constructor of the
     * BankAccount class.
     */
}

/* Construction(s) & Method(s) definition */

//The user can make a deposit
void BankAccount::deposit(double dp) {
    cout << "\nEnter amount for deposit: ";
    cin >> dp;
    balance += dp;
}
//The user can make a withdraw
void BankAccount::withdraw(double wd) {
    cout << "\n Enter amount for withdraw: ";
    cin >> wd;
    balance -= wd;
}
//getBalance() returns the available balance after a transaction occurs
double BankAccount::getBalance(){
    return balance;
}
