

/* >>> Three Key Value Program ( Version 2 ) <<< */

/* >>> Write a C++ program that creates an empty map and inserts three key-value pairs into it. Then, iterate over the map and print out the keys and values. <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <cctype>
#include <utility>
#include <map>

using namespace std;

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Three Key Value Program ( Version 2 ) .." << endl
          << endl;
}

// Add Three Key Value to map / Function.
map<int, int> addThreeKeyFun(map<int, int> m)
{
     m.insert({1, 123});
     m.insert({2, 456});
     m.insert({3, 789});
     // m[1] = 123;
     // m[2] = 456;
     // m[3] = 789;

     return m;
}

// Print map / Function.
void printMapFun(map<int, int> m)
{
     for (auto k : m)
     {
          cout << "Key: " << k.first << ", Value: " << k.second << endl;
     }
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Creat empty map;
     map<int, int> myMap;

     // Add Three Key Value to map.
     myMap = addThreeKeyFun(myMap);

     // Print map.
     printMapFun(myMap);

     cout << endl
          << endl;

     return 0;
}