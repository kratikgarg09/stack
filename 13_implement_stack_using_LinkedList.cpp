#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

class Stack
{
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }

    void push(int data)
    {
        Node *temp = new Node(data);

        if (!temp)
        {
            cout << "\nstack overflow\n";
            exit(1);
        }
        temp->data = data;
        temp->next = top;
        top = temp;
    }

    bool isEmpty()
    {
        if (top == NULL)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void pop()
    {
        Node *temp;
        if (top == NULL)
        {
            cout << "\n stack underflow \n";
            exit(1);
        }
        else
        {
            temp = top;
            top = top->next;
            free(temp);
        }
    }

    int peek()
    {
        if (!isEmpty())
        {
            return top->data;
        }
        else
        {
            return -1;
        }
    }

    void display()
    {
        Node *temp;
        if (top == NULL)
        {
            cout << "\nstack underflow\n";
            exit(1);
        }
        else
        {
            temp = top;
            while (temp != NULL)
            {
                cout << temp->data;
                temp = temp->next;
                if (temp != NULL)
                {
                    cout << " -> ";
                }
            }
            cout << "\n";
        }
    }
};

int main()
{
    Stack st;
    st.push(4);
    st.push(5);
    st.push(2);
    st.push(7);
    st.display();
    cout << "top element is : " << st.peek() << endl;
    st.pop();
    st.display();

    return 0;
}