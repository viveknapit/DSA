#include <iostream>
using namespace std;

#ifndef NODE_H
#define NODE_H

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
    Node(int val, Node *next)
    {
        data = val;
        this->next = next;
    }
};

struct DllNode
{
    int data;
    DllNode *next;
    DllNode *prev;

    DllNode(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
    DllNode(int val, DllNode *prv)
    {
        data = val;
        next = nullptr;
        prev = prv;
    }
    DllNode(int val, DllNode *prv, DllNode *nxt)
    {
        data = val;
        next = nxt;
        prev = prv;
    }
};

#endif