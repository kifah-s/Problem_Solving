

// >>> Maximum Elements Program ( Version 1 ) <<< */

/* >>> Write a C++ program to find the maximum elements in an array. <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <cctype>

using namespace std;

// ... Functions ...
void welcomeMassageFun();
int maximumElementsFun(int m, int arr[], int l);
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     // ... Variables ...
         int myArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, maxEle = myArray[0],
         myArrayLength = sizeof(myArray) / sizeof(myArray[0]);
     // ... End Variables ...

     // ... Functions ...
     maxEle = maximumElementsFun(maxEle, myArray, myArrayLength);
     // ... End Functions ...

     cout << "Max Element is: " << maxEle << endl
          << endl
          << endl;

     return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Maximum Elements Program ( Version 1 ) .." << endl
          << endl;
}

// find the maximum elements / Function.
int maximumElementsFun(int m, int arr[], int l)
{
     for (int i = 0; i < l; i++)
     {
          if (arr[i] > m)
          {
               m = arr[i];
          }
     }

     return m;
}
// ... End Functions ...