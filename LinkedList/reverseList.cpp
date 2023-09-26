#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node(int val){
        data = val;
        next = nullptr;
    }
};

node* reverseList(node* head){
    node* prev=NULL, *curr=head, *nxt ;
    while(curr!=NULL){
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr= nxt;
    }
    return prev;
}
void printList(node* head){
    node* temp = head;
    while(temp!= nullptr){
         cout<<temp->data<<" ";
         temp = temp->next;
    }
}
int main(){
    int t,n,firstNode;
    cin>>t;
    while(t--){
        struct node* head=NULL, *tail=NULL;
        // n is the size of list
        cin>>n;
        cin>>firstNode;
        head = new node(firstNode);
        tail = head;
        for(int i=1; i<n;i++){
            int a;
            cin>>a;
            tail->next = new node(a);
            tail = tail->next;
        }
        printList(head);
        cout<<endl;
        head = reverseList(head);
        printList(head);
    }
    return 0;
}