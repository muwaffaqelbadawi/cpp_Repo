

#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

// Node *head;

// Node* Add_Node(Node *head, int x)
void Add_Node(Node **head, int x)
{
    Node *temp = new Node(); // create new node
    temp->data = x;        // fill node with data
    temp->next = *head;    // let temp point to the previous head
    *head = temp;          // let head point to the new head

    // retutn head;
}

void Print(Node *head)
{
    // Node *temp = head;
    cout << "List is: ";

    while (head != NULL)
    {
        cout << " " << head->data;
        head = head->next;
    }
    cout << "\n";
}

int main()
{
    // head = NULL; // empty list
    Node *head = NULL; // empty list
    cout << "How many numbers?\n";

    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number\n";
        cin >> x;
        // head = Add_Node(head, x);
        Add_Node(&head, x);
        Print(head);
    }
    return 0;
}