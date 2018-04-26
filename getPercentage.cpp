
/* This simple function returns the percentage and the total 
 * amount of a given array. It takes two parameters, one for
 * the name and one for the size of the array. */

/* library input */
#include <iostream>

/* namespace(s) definition */
using namespace std;

/* function content */
void getPercentage()
{
    float num, pct, res;
    
    cout << "\nGive amount: ";
    cin >> num;
    
    cout << "Give percentage [%]: ";
    cin >> pct;
    
    res = num * pct / 100;
    cout << "\nPercentage amount: " << res;
    cout << "\nTotal amount: " << num + res << "\n\n\n";
    
}