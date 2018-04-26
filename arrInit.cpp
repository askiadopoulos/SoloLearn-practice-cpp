
/* This simple function initialize an array with elements through data entry.
 * It takes two parameters, one for the name and one (pointer) for the size
 * of the array. */

/* library input */
#include <iostream>

/* namespace(s) definition */
using namespace std;

/* function content */
int arrInit(int arr[], int *size)
{
    cout << "\nEnter Array Size: ";
    cin >> *size;
    cout << endl;
    
    for(int i=0; i<*size; i++)
    {
        cout << "Array Index [" << i << "]." << " Enter a number to register: ";
        cin >> arr[i];
    }
    return (*size);
}