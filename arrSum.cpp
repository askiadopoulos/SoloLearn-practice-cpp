
/* This simple function returns the total sum of all numbers in an array plus
 * the counting of them. It takes two parameters, one for the name and one for
 * the size of the array. */

/* library input */
#include <iostream>

/* namespace(s) definition */
using namespace std;

/* function content */
int arrSum(int arr[], int size)
{
    int sum = 0;
    
    for(int i=0; i<size; i++)
    {
        sum+=arr[i];
    }
    cout << endl << "The Total Sum of all numbers: " << sum << endl;
    return sum;
}