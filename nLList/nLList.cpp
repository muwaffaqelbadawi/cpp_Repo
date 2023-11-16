

#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head;

void AddNode(int data, int n)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;

    if (n == 1)
    {
        temp->next = head;
        head = temp;
        return;
    }

    Node *temp_1 = head;

    for (int i = 0; i < n - 2; i++)
    {
        temp_1 = temp_1->next;
    }
    temp->next = temp_1->next;
    temp_1->next = temp;
}

void Output()
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int main()
{
    cout << "List: \n";
    head = NULL; // empty list

    AddNode(1, 1);
    AddNode(4, 2);
    AddNode(5, 3);
    AddNode(9, 4);

    Output();

    return 0;
}