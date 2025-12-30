#include <iostream>
using namespace std;

struct Node
{
    int data;
    // here Node* meaning it will store the address of Node or Node type of DS
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
    Node(int val, Node *nxt)
    {
        data = val;
        next = nxt;
    }
};

// insert at end of the list
void Insert(Node *head, int value)
{
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = new Node(value);
}

// insert data items at the start of the list
void InsertAtHead(Node *&head, int value)
{
    Node *newHead = new Node(value, head);
    head = newHead;
}

// insert data items at any index or any position on the list
void Insert(Node *head, int value, int pos)
{
    Node *temp = head;
    int count = 1;
    while (temp != nullptr)
    {
        if (count < pos - 1)
        {
            count++;
            temp = temp->next;
        }
        else
        {
            break;
        }
    }
    Node *newNode = new Node(value, temp->next);
    temp->next = newNode;
}

void print(Node *head)
{
    Node *temp = head;
    cout << endl;
    cout << "The list is ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    // this is a example of object it means here head is storing
    // an object of Node but what if we waned to use head as next of any
    // other node so for that we need to use &head to assign its address all the time.
    Node head = Node(20);
    cout << head.data << endl;

    // * means it will store the address of Node object into head1
    // we need to use new keyword here as it will create the object and return the address of the object.
    // to access its properties we can't use . (head1.data) as it is not an object,
    // while it is an address. so either we can (*head1).data (*head1 means value to the address head1)
    // or we can simply use head1->data
    Node *head1 = new Node(20);

    cout << (*head1).data << endl;
    head1->data = 12;
    cout << head1->data << endl;

    // in java pointers are managed internally so we don't require to use * or ->
    // we can use object for linkedlist as java internally manage it.

    // Insertion in LL
    Insert(head1, 4);
    print(head1);
    Insert(head1, 5);
    print(head1);
    Insert(head1, 23);
    print(head1);
    Insert(head1, 99, 2);
    print(head1);
    Insert(head1, 33);
    print(head1);
    InsertAtHead(head1, 90);
    print(head1);

    return 0;
}