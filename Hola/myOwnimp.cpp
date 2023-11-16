

#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = new Node();

void Add_newNode(int data, int n)
{
    Node *newNode = new Node();

    newNode->data = data;
    newNode->next = NULL;

    if (n == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node *previousNode = head;

    for (int i = 0; i < n - 2; i++)
    {
        previousNode = previousNode->next;
    }
    newNode->next = previousNode->next;
    previousNode->next = newNode;
}

void OutPut()
{
    Node *local = head;

    while (local != NULL)
    {
        cout << local->data << " ";
        local = local->next;
    }
}

int main()
{
    head = NULL;

    cout << "List: \n";

    Add_newNode(9, 1);
    Add_newNode(15, 2);
    Add_newNode(8, 3);
    Add_newNode(-5, 4);

    OutPut();

    return 0;
}