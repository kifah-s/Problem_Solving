
//* Even Numbers Using Recursion Program (Version 4).

/*
* Write a program that prompts the user to enter an integer 'num' and then,
* prints the even numbers from 1 to 'num' in ascending order.

! Input:
! Please, enter a number: 7

! Output:
! Even Numbers from 1 to 7: 2 4 6
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>
#include <map>
#include <cctype>
#include <fstream>

using namespace std;

void resultFun();

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Even Numbers Using Recursion Program (Version 4) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun()
{
    int n = 0;

    cout << "Please, enter a number: ";
    cin >> n;

    return n;
}

// // Check Number - Function.
// bool checkNumberFun(int n)
// {
//     if (n % 2 == 0)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// Recursion - Function.
void recursionFun(int n)
{
    if (n > 0) // Base Case.
    {
        if (n % 2 == 0)
        {
            recursionFun(n - 1); // Recursive call.
            cout << n << " ";
        }
        else
        {
            recursionFun(n - 1); // Recursive call.
        }
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int myNumber = 0;

    // Call Functions.
    printWelcomeMessageFun();

    myNumber = getNumberFun();
    cout << "Even Numbers from 1 To " << myNumber << ": ";
    recursionFun(myNumber);

    cout << "\n"
         << endl;
}
//* End Function ..
