

/* >>> Counter Class Program ( Version 3 ) <<< */

/* >>> Create a class called "Counter" that has a static member variable "count" and two member functions "increment" and "getCount".
The "increment" function should increment the "count" variable, and "getCount" should return the value of "count".
Write a simple main function to test the "Counter" class by creating several objects and calling the "increment" function. <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <cctype>
#include <utility>
#include <map>
#include <cstring>

using namespace std;

// ... Classes ...
// Create main class.
class Counter
{
public:
     static double count;

     void increment(double x)
     {
          count += x;
     }

     double getCount()
     {
          return count;
     }
};
double Counter::count = 0;

// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Counter Class Program ( Version 3 ) .." << endl
          << endl;
}

// Add and review counter class / Function.
void addAndRevCouClaFun()
{
     Counter c1;
     c1.increment(1);
     c1.increment(1);
     c1.increment(1);
     c1.increment(1);
     c1.increment(1);

     cout << c1.getCount();
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Add and review counter class.
     addAndRevCouClaFun();

     cout << endl
          << endl
          << endl;

     return 0;
}