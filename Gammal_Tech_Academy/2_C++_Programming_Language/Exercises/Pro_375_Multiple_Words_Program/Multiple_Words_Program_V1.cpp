
//* Multiple Words Program (Version 1).

/*
* Create a program that allows the user to enter multiple words,
* checks if each word is in the dictionary, and suggests corrections if necessary.

* hello, hi, ok

! Input & Output:
! Please enter a number of words: 3

! enter word 1: hey
! did you mean 'hello'?

! enter word 2: fi
! did you mean 'hi'?

! enter word 3: test
! did you mean 'hello'?
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
    cout << "\n\nYou welcome in Multiple Words Program (Version 1) ..\n"
         << endl;
}

// Add Elements To Vector - Function.
vector<string> addElementsToVectorFun(vector<string> myVec)
{
    // myVec = {"hello", "hi", "ok"};
    myVec.push_back("hello");
    myVec.push_back("hi");
    myVec.push_back("ok");

    return myVec;
}

// Get Number Of Words - Function.
int getNumberOfWordsFun(int numOfWo)
{
    cout << "Please, enter a number of words: ";
    cin >> numOfWo;

    return numOfWo;
}

// Get Word - Function.
string getWordFun(string wo, int i)
{
    cout << "\nenter word " << i + 1 << ": ";
    cin >> wo;

    return wo;
}

// Check Word - Function.
bool checksWordFun(vector<string> myVec, string myWo, bool fou)
{
    for (int i = 0; i < myVec.size(); i++)
    {
        if (myVec[i] == myWo)
        {
            fou = true;
        }
    }

    return fou;
}

// Suggests Correct Word - Function.
string suggestsCorrectWordFun(vector<string> myVec, string myWo, string corWo)
{
    int maxCount = 0;
    for (int i = 0; i < myVec.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < myVec[i].size(); j++)
        {
            for (int k = 0; k < myWo.size(); k++)
            {
                if (myVec[i][j] == myWo[k])
                {
                    count++;
                }
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            corWo = myVec[i];
        }
    }

    return corWo;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    vector<string> myVector;
    string myWord, correctWord;
    int numberOfWords = 0;

    // Call Functions.
    myVector = addElementsToVectorFun(myVector);
    numberOfWords = getNumberOfWordsFun(numberOfWords);
    for (int i = 0; i < numberOfWords; i++)
    {
        bool foundWord = false;
        myWord = getWordFun(myWord, i);
        foundWord = checksWordFun(myVector, myWord, foundWord);
        if (foundWord)
        {
            cout << "The word \"" << myWord << "\" is in the dictionary.";
        }
        else
        {
            correctWord = suggestsCorrectWordFun(myVector, myWord, correctWord);
            cout << "Did you mean \" " << correctWord << " \"?";
        }
    }

    cout << "\n"
         << endl;
}
//* End Function ..
