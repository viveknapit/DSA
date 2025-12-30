#include <iostream>
#include "Node.h"

#ifndef PRINTLL
#define PRINTLL

using namespace std;

void print(DllNode *head)
{
    cout << "The List is : ";
    DllNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        if (temp->next != nullptr)
        {
            cout << " -> ";
        }
        temp = temp->next;
    }
    cout << " -> NULL ";
    cout << endl;
}

#endif