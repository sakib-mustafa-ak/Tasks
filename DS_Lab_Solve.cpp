#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    // Accept an integer n as the initial size of the array.
    cout << "Enter the initial size of the array: ";
    cin >> n;

    int a[100];
    // Acceppt n integers as elements of the array.
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int x;
    cout << "Enter the number of position-based insertion: ";
    cin >> x;

    while (x--)
    {
        cout << "Enter value to insert and position: ";
        int value, position;
        cin >> value >> position;

        for (int i = n; i >= position; i--)
        {
            a[i] = a[i - 1];
        }

        a[position - 1] = value;
        n++;
    }

    cout << "Array after position-based insertion: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    int value, insert_after;
    cout << "Enter value to insert and target value to insert after: ";
    cin >> value >> insert_after;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == insert_after)
        {
            for (int j = n; j > i; j--)
            {
                a[j] = a[j - 1];
            }
            a[i + 1] = value;
            n++;
        }
    }

    cout << "Array after value-based insertion: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}