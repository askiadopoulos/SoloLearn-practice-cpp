/* 
 * File:   main.cpp
 * Author: a.skiadopoulos
 *
 * Created on 23 February 2018, 21:06 pm
 * 
 * 
 * This is a workshop for SoloLearn C++ Online Course.
 * 
 * It implements algorithmic functions for making various operations with
 * integers, characters, strings and arrays as well as demonstrating the use of
 * program flow control structures, arithmetic operators, arrays, pointers etc.
 */


/* System | User-Defined Headers | Predefined Library Functions */
#include "sololearn.h" //declare sololearn header
#include "mathOperations.h" //Makes class mathOperations visible
#include "encapsulation.h" //Makes class Encapsulation visible
#include "constructors.h" //Makes class Constructors visible
#include "bankAccount.h" //Makes class BankAccount visible
#include <iostream> //Standard Input/Output Stream

/* Built-in C++ Library Routines (standard namespace)  */
using::std::cin;
using::std::cout;
using::std::endl;

/* Prototype for function printS() | (Overloading) */
void printS(int var);
void printS(float var);
void printS(char var);                       
void printS(std::string var);

/* Prototype for function defaultArgs() */
int defaultArgs(int x, int y);

/* Definition for function defaultArgs()
 * 
 * The specific function is an example of how to use a default argument.
 * When calling the below function, if we skip defining the second argument (y),
 * then it will use the default value (94 in our example). */
int defaultArgs(int x, int y = 94){
    int result = x + y;
    return result;
}

/* Implementation of function Main */
int main(int argc, char** argv) {
  
    /* Declaring object(s) of class mathOperations */
    mathOperations add, sub, multi, div, mod;
    
    /* Declaring object(s) of class constructors */
    Constructors ptrTxt1("C++ is an OOP language !.");
    Constructors ptrTxt2("C is an imperative procedural programming language !.\n");
    
    /* Declaring object(s) of class BankAccount */
    BankAccount ba;
    
    /* Global variable declarations */
    double deposit, withdraw;
    int arrSize = 0, arrName[arrSize];
    int num1 = 6, num2 = 4, num, result;
    short int choice, atmMenu = 0, semaphore = 1;    
    
    /* Implementing the structure of the main menu */
    cout << " SoloLearn Workshop project\n" << endl;
    cout << "1. Initialize an Array..., and sum its elements..." << endl;
    cout << "2. Find the Percentage..." << endl;
    cout << "3. A Do-While loop..." << endl;
    cout << "4. An If-Else statement..." << endl;
    cout << "5. Declaring Arrays as Pointers..." << endl;
    cout << "6. Using Pointer Operators..." << endl;
    cout << "7. Passing default Arguments in Functions..." << endl;
    cout << "8. Function Overloading..." << endl;
    cout << "9. Find the Factorial of a Number..." << endl;
    cout << "10. Swapping values between two Numbers..." << endl;
    cout << "11. Basic Arithmetic Operations..." << endl;
    cout << "12. Printing text messages using Constructors..." << endl;
    cout << "13. Entering an ATM Bank transaction menu..." << endl;
    cout << "14. Exit SoloLearn Workshop...\n" << endl;
    
    cout << "Enter a choice: ";
    cin >> choice;
    
    switch(choice){
        case 1:
            system("CLS");
            arrInit(arrName, &arrSize);
            arrSum(arrName, arrSize);
        break;
        case 2:
            system("CLS");
            getPercentage();
        break;
        case 3:
            system("CLS");
            doWhile();
        break;
        case 4:
            system("CLS");
            ifElse();
        break;
        case 5:
            system("CLS");
            ptrArrays();
        break;
        case 6:
            system("CLS");
            ptrOperators();
        break;
        case 7:
            /* Calling of function defaultArgs() */
            system("CLS");
            result = defaultArgs(num1, num2);
            cout << "\n" << result << endl;
            result = defaultArgs(num1);
            cout << "\n" << result << endl;
        break;
        case 8:
            /* Calling of function printS() */
            system("CLS");
            printS(5);
            printS(3.3f); /* If we declare the function parameter data type as double,
                           * then it is not necessary to use the f suffix.
                           * Below is an example:
                           * 
                           * void printS(double var){} //Function definition
                           * printS(3.3); //Calling Function */
            printS('J');
            printS("Test the output of function printF\n");
        break;
        case 9:
            /* Calling of function factorial() */
            system("CLS");
            cout << "\nEnter a positive integer: ";
            cin >> num;
            cout << "\nFactorial of " << num << " is: " << factorial(num) << "\n\n";
        break;
        case 10:
            /* Calling of function swapNums() */
            system("CLS");
            swapNums(num1, num2);
            cout << num1 << " ," << num2 << endl;
            swapNums(&num1, &num2);
            cout << num1 << " ," << num2 << endl;
        break;
        case 11:
            /* Calling method(s) of class mathOperations */
            system("CLS");
            add.setOperants(11,5);
            sub.setOperants(2,5);
            multi.setOperants(3,4);
            div.setOperants(25,4);
            mod.setOperants(25,4);

            cout << add.getAddition() << endl;
            cout << sub.getSubtraction() << endl;
            cout << multi.getMultiplication() << endl;
            cout << div.getDivision() << endl;
            cout << mod.getModulus() << endl;
        break;
        case 12:
            /* Calling method(s) of class constructors */
            system("CLS");
            cout << ptrTxt1.getText() << endl;
            cout << ptrTxt2.getText() << endl;
            break;
        case 13:
            /* Calling method(s) of class BankAccount */
            system("CLS");
            cout << "\nBank Account Transactions Menu !" << endl;

            while(semaphore > 0){

                do{
                cout << "\n1. Deposit" << endl;
                cout << "2. Withdraw" << endl;
                cout << "3. Exit" << endl;
                cout << "\nEnter a choice: ";
                cin >> atmMenu;

                switch(atmMenu){
                case 1:  
                    ba.deposit(deposit);
                    cout << "\nBalance: " << ba.getBalance() << endl;
                    break;        
                case 2:
                    ba.withdraw(withdraw);
                    cout << "\nBalance: " << ba.getBalance() << endl;
                    break;
                case 3:
                    cout << "\nExit Bank Account...\n" << endl;
                    semaphore = 0;
                    break;
                default:
                    cout << "\nInvalid choice. Bank Account menu is terminated...\n\n";
                    semaphore = 0;
                    break;
                }

                }while(atmMenu > 0 && atmMenu < 3);   
            }
            //break;
        case 14:
            cout << "\nExit SoloLearn Workshop project...\n" << endl;
            break;
        default:
            cout << "\nInvalid choice. SoloLearn Workshop project is terminated...\n\n";
            break;
    }
    return 0;
}
