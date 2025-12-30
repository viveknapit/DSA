#include <iostream>
#include "Node.h"
using namespace std;

int LLSize(DllNode *head)
{
    int cnt = 0;
    while (head != nullptr)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}