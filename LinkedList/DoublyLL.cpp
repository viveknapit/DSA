#include <iostream>
#include "Node.h"
#include "Insersion.cpp"
#include "PrintLL.cpp"
#include "Deletion.cpp"
#include "reverseDll.cpp"

using namespace std;

int main()
{
    DllNode *head = new DllNode(1);
    Insert(head, 2);
    Insert(head, 5);
    Insert(head, 22, true);
    print(head);
    //   head = DeleteHead(head);
    //   print(head);
    head = Reverse(head);
    print(head);

    return 0;
}