#include <iostream>
#include "Node.h"
using namespace std;

// this method will insert a new node at the end of the list
void Insert(Node *head, int val)
{
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = new Node(val);
}

// this method will insert new node at given position
void Insert(Node *head, int val, int pos)
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
    Node *newNode = new Node(val, temp->next);
    temp->next = newNode;
}

// this method will insert a new node at the head of the linkedlist
void Insert(Node *head, int val, bool isAtHead)
{
    if (isAtHead == false)
    {
        Insert(head, val);
        return;
    }
    Node *newHead = new Node(val, head);
    head = newHead;
    return;
}

// Insert a node at the end in doubly linked list
void Insert(DllNode *&head, int val)
{
    DllNode *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = new DllNode(val);
    temp->next->prev = temp;
}

void Insert(DllNode *&head, int val, bool isAtHead)
{
    if (isAtHead == false)
    {
        Insert(head, val);
        return;
    }
    DllNode *node = new DllNode(val, nullptr, head);
    head->prev = node;
    head = node;
}