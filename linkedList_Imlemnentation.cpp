#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data= x;
        next=NULL;
    }
};

int main()
{
    Node* head;

    head = new Node(10);

    head->next = new Node(20);
    head->next->next= new Node(30);

    printf("%d", head->data);
    
    return 0;
}