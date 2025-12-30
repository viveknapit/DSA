#include <iostream>
#include "Node.h"
using namespace std;

DllNode *DeleteHead(DllNode *head)
{
    DllNode *newHead = head->next;
    if (newHead == nullptr)
        return newHead;

    newHead->prev = NULL;
    delete (head);
    return newHead;
}
