

/* >>> Resulting String Program ( Version 3 ) <<< */

/* >>> Write a C++ program that uses the std::string class to concatenate two strings and then print the resulting string to the console. <<< */

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
#include <bitset>

using namespace std;

// ... Namespaces ...

// ... End Namespaces ...

// ... Classes ...

// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Resulting String Program ( Version 3 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create strings.
     string str1 = "Hello, ";
     string str2 = "World";

     // concatenate two strings.
     str1.append(str2);

     cout << str1;

     cout << endl
          << endl;

     return 0;
}