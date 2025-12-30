#include <iostream>
#include "Node.h"
#include "PrintLL.cpp"
using namespace std;

DllNode *Reverse(DllNode *head)
{
    DllNode *curr = head, *prev = nullptr, *nxt;
    while (curr != NULL)
    {
        prev = curr->prev;
        nxt = curr->next;
        curr->prev = nxt;
        curr->next = prev;
        if (nxt == NULL)
        {
            return curr;
        }
        curr = nxt;
    }
}