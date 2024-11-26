#include <bits/stdc++.h>
using namespace std;

// Globally declared Stack using Array.
int Stack[100000000];
int top = -1;

int main()
{
    int x, value;
    cout << "Enter your choice: ";
    cin >> x;
    while (x > 0 && x < 6)
    {
        if (x == 1)
        {
            cout << "Enter the value to push: ";
            cin >> value;
            Stack[++top] = value;
            cout << "Pushed: " << value << endl;
        }
        else if (x == 2)
        {
            cout << "Popped: " << Stack[top] << endl;
            top--;
        }
        else if (x == 3)
        {
            cout << "Top of the Stack: " << Stack[top] << endl;
        }
        else if (x == 4)
        {
            if (top < 0)
                cout << "Stack is empty!\n";
            else
                cout << "Stack is not empty.\n";
        }
        else if (x == 5)
        {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--)
            {
                cout << Stack[i] << " ";
            }
            cout << endl;
        }
        cout << "---Stack Operations---\n";
        cout << "Enter your choice: ";
        cin >> x;
    }
}