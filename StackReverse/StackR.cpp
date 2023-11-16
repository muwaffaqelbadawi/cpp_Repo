#include <iostream>
#include <stack>

using namespace std;



struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;

void Reverse()
{
    if (head == NULL)
        return;

    stack<struct Node *> S;
    struct Node *temp = S.top();

    while (temp != NULL)
    {
        S.push(temp);
        temp = temp->next;
    }

    temp = S.top();
    head = temp;
    S.pop();

    while (!S.empty())
    {
        temp->next = S.top();
        S.pop();
        temp = temp->next;
    }
    temp->next = NULL;
}

int main()
{
    return 0;
}