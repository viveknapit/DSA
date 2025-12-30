#include <iostream>
#include "Node.h"
#include "Insersion.cpp"
using namespace std;

bool isExist(Node *head, int val)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == val)
            return true;
        temp = temp->next;
    }
    return false;
}

int main()
{
    Node *head = new Node(12);
    Insert(head, 22);
    Insert(head, 25);
    Insert(head, 10, true);
    Insert(head, 14, 3);
    Insert(head, 26);
    Insert(head, 28);

    if (isExist(head, 25))
    {
        cout << "25 is there in the list" << endl;
    }
    else
    {
        cout << "25 is not in the list ";
    }

    return 0;
}