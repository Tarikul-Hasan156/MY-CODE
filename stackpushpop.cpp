#include <bits/stdc++.h>
using namespace std;

#define Max 5
int Stack[Max];
int top = -1;

bool isfull()
{
    return top >= Max - 1;
}

bool isempty()
{
    return top < 0;
}

void push(int data)
{
    if (!isfull())
    {
        top++;
        Stack[top] = data;
    }
    else
    {
        cout << "Overflow" << endl;
    }
}

void pop()
{
    if (!isempty())
    {
        int data = Stack[top];
        top--;
    }
    else
    {
        cout << "Underflow" << endl;
    }
}

void display()
{
    if (isempty())
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++)
        {
            cout << Stack[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    push(10);
    push(20);
    display();
    pop();
    display();
    return 0;
}
