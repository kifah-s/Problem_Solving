
//* Dou Cir Linked List Search Program (Version 1).

/*
* Write a program to search for a specific element in a Double Circular Linked List.

! Input & Output:
! 1) Add
! 2) Show
! 3) Reverse Show
! 4) Calculate Length
! 5) Delete All Nodes
! 6) Calculate Sum
! 7) Find Max
! 8) Find Min
! 9) Count Occurrences Number
! 10) Count Even Number
! 11) Sum Even Number
! 12) Search Number
! 13) Exit
! Please, enter your choice: 1
! Please, enter a number: 1

! 1) Add
! 2) Show
! 3) Reverse Show
! 4) Calculate Length
! 5) Delete All Nodes
! 6) Calculate Sum
! 7) Find Max
! 8) Find Min
! 9) Count Occurrences Number
! 10) Count Even Number
! 11) Sum Even Number
! 12) Search Number
! 13) Exit
! Please, enter your choice: 1
! Please, enter a number: 2

! 1) Add
! 2) Show
! 3) Reverse Show
! 4) Calculate Length
! 5) Delete All Nodes
! 6) Calculate Sum
! 7) Find Max
! 8) Find Min
! 9) Count Occurrences Number
! 10) Count Even Number
! 11) Sum Even Number
! 12) Search Number
! 13) Exit
! Please, enter your choice: 1
! Please, enter a number: 3

! 1) Add
! 2) Show
! 3) Reverse Show
! 4) Calculate Length
! 5) Delete All Nodes
! 6) Calculate Sum
! 7) Find Max
! 8) Find Min
! 9) Count Occurrences Number
! 10) Count Even Number
! 11) Sum Even Number
! 12) Search Number
! 13) Exit
! Please, enter your choice: 12
! Please, enter a number: 5
! Number 5 Not Found in Circular Double Linked List.
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

//* Struct ..

struct Node
{
    int number;
    Node *next, *prev;
};

//* End Struct ..

//* Functions ..

// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Dou Cir Linked List Search Program (Version 1) ..\n"
         << endl;
}

// Display Menu - Function.
int displayMenuFun()
{
    int answer = 0;

    cout << "\n----------------------------" << endl;
    cout << "1) Add" << endl
         << "2) Show" << endl
         << "3) Reverse Show" << endl
         << "4) Calculate Length" << endl
         << "5) Delete All Nodes" << endl
         << "6) Calculate Sum" << endl
         << "7) Find Maximum" << endl
         << "8) Find Minimum" << endl
         << "9) Count Occurrences Number" << endl
         << "10) Count Even Number" << endl
         << "11) Sum Even Number" << endl
         << "12) Search Number" << endl
         << "13) Exit" << endl
         << "Please, enter your choice: ";
    cin >> answer;
    cout << "----------------------------\n"
         << endl;

    return answer;
}

// Add Nodes - Function.
Node *addNodesFun(Node *head, Node *current)
{
    if (current == NULL || head->next == current)
    {
        Node *temp = (Node *)malloc(sizeof(Node));

        cout << "Please, enter a number: ";
        cin >> temp->number;

        if (current == NULL)
        {
            temp->next = temp;
            temp->prev = temp;
            return temp;
        }

        temp->next = current;
        current->prev = temp;
        head->next = temp;
        temp->prev = head;
        return head;
    }

    head->next = addNodesFun(head->next, current);

    return head;
}

// Show Nodes - Function.
void showNodesFun(Node *head)
{
    if (head == NULL)
    {
        cout << "Double Circular Linked List Is Empty." << endl;
        return;
    }

    Node *current = head;
    cout << "Double Circular Linked List: ";
    do
    {
        cout << head->number << " ";
        head = head->next;
    } while (head != current);

    cout << endl;
}

// Reverse Show Nodes - Function.
void reverseShowNodesFun(Node *head)
{
    if (head == NULL)
    {
        cout << "Double Circular Linked List Is Empty." << endl;
        return;
    }

    Node *current = head;
    cout << "Reverse Double Circular Linked List: ";
    do
    {
        cout << head->number << " ";
        head = head->prev;
    } while (head != current);

    cout << endl;
}

// Calculate Length - Function.
void calculateLengthFun(Node *head)
{
    if (head == NULL)
    {
        cout << "Double Circular Linked List Is Empty." << endl;
        return;
    }

    Node *current = head;
    int length = 0;
    do
    {
        length++;
        head = head->next;
    } while (head != current);

    cout << "Length of Double Circular Linked List: " << length << endl;
}

// Delete All Nodes - Function.
void deleteAllNodesFun(Node *head)
{
    if (head == NULL)
    {
        cout << "Double Circular Linked List Already Is Empty." << endl;
        return;
    }

    Node *current = head, *temp;

    do
    {
        temp = current;
        current = current->next;
        free(temp);
    } while (current != head);

    head = NULL;
    cout << "All Nodes Deleted!" << endl;
}

// Calculate Sum - Function.
void calculateSumFun(Node *head)
{
    if (head == NULL)
    {
        cout << "Double Circular Linked List Is Empty." << endl;
        return;
    }

    Node *current = head;
    int sum = 0;
    do
    {
        sum += head->number;
        head = head->next;
        // head = head->prev;
    } while (head != current);

    cout << "Sum: " << sum << endl;
}

// Find Maximum - Function.
void findMaximumFun(Node *head)
{
    if (head == NULL)
    {
        cout << "Double Circular Linked List Is Empty." << endl;
        return;
    }

    Node *current = head;
    int max = current->number;
    do
    {
        if (current->number > max)
        {
            max = current->number;
        }

        current = current->next;
        // current = current->prev;
    } while (current != head);

    cout << "Maximum Number: " << max << endl;
}

// Find Minimum - Function.
void findMinimumFun(Node *head)
{
    if (head == NULL)
    {
        cout << "Double Circular Linked List Is Empty." << endl;
        return;
    }

    Node *current = head;
    int min = current->number;
    do
    {
        if (current->number < min)
        {
            min = current->number;
        }

        current = current->next;
        // current = current->prev;
    } while (current != head);

    cout << "Minimum Number: " << min << endl;
}

// Count Occurrences Number - Function.
void countOccurrencesNumberFun(Node *head)
{
    if (head == NULL)
    {
        cout << "Double Circular Linked List Is Empty." << endl;
        return;
    }

    int num = 0;
    cout << "Please, enter a number: ";
    cin >> num;

    Node *current = head;
    int counter = 0;

    do
    {
        if (current->number == num)
        {
            counter++;
        }

        current = current->next;
        // current = current->prev;
    } while (current != head);

    cout << "\nOccurrences of " << num << " in Double Circular Linked List: " << counter << endl;
}

// Count Even Number - Function.
void countEvenNumberFun(Node *head)
{
    if (head == NULL)
    {
        cout << "Double Circular Linked List Is Empty." << endl;
        return;
    }

    Node *current = head;
    int counter = 0;

    do
    {
        if (current->number % 2 == 0)
        {
            counter++;
        }

        current = current->next;
        // current = current->prev;
    } while (current != head);

    cout << "Even Number: " << counter << endl;
}

// Sum Even Number - Function.
void sumEvenNumberFun(Node *head)
{
    if (head == NULL)
    {
        cout << "Double Circular Linked List Is Empty." << endl;
        return;
    }

    Node *current = head;
    int sum = 0;

    do
    {
        if (current->number % 2 == 0)
        {
            sum += current->number;
        }

        current = current->next;
        // current = current->prev;
    } while (current != head);

    cout << "Sum Even Number: " << sum << endl;
}

// Search Number - Function.
void searchNumberFun(Node *head)
{
    if (head == NULL)
    {
        cout << "Double Circular Linked List Is Empty." << endl;
        return;
    }

    int num = 0;
    cout << "Please, enter a number: ";
    cin >> num;

    Node *current = head;
    bool found = false;

    do
    {
        if (current->number == num)
        {
            found = true;
            break;
        }

        current = current->next;
        // current = current->prev;
    } while (current != head);

    if (found)
    {
        cout << "\nNumber " << num << " found in double circular linked list." << endl;
    }
    else
    {
        cout << "\nNumber " << num << " not found in double circular linked list." << endl;
    }
}

// Free Allocated Memory - Function.
void freeAllocatedMemoryFun(Node *head)
{
    Node *current = head;

    while (head != current)
    {
        Node *nextNode = head->next; // Save Next Node Before Freeing.
        free(head);                  // Free Current Node.
        head = nextNode;             // Move To Next Node.
    }
    cout << "----------------------------" << endl;
    cout << "Memory freed successfully!" << endl;
    cout << "----------------------------" << endl;
}

// Handling User Choice - Function.
void handlingUserChoiceFun(Node *head)
{
    int answer = 0;

    do
    {
        answer = displayMenuFun();

        switch (answer)
        {
        case 1:
            head = addNodesFun(head, head);
            break;

        case 2:
            showNodesFun(head);
            break;

        case 3:
            reverseShowNodesFun(head);
            break;

        case 4:
            calculateLengthFun(head);
            break;

        case 5:
            deleteAllNodesFun(head);
            break;

        case 6:
            calculateSumFun(head);
            break;

        case 7:
            findMaximumFun(head);
            break;

        case 8:
            findMinimumFun(head);
            break;

        case 9:
            countOccurrencesNumberFun(head);
            break;

        case 10:
            countEvenNumberFun(head);
            break;

        case 11:
            sumEvenNumberFun(head);
            break;

        case 12:
            searchNumberFun(head);
            break;

        default:
            break;
        }

    } while (answer != 13);

    freeAllocatedMemoryFun(head);
}

// Result - Function.
void resultFun()
{
    // Declare Pointers And Variables.
    Node *head = NULL;

    // Call Functions.
    printWelcomeMessageFun();
    handlingUserChoiceFun(head);

    cout << endl
         << endl;
}

//* End Function ..

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}
