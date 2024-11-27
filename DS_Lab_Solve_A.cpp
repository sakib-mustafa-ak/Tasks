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
    cout << "Enter the number of insertions: ";
    cin >> x;

    int count = 0;
    while (x--)
    {
        if (n == 100)
        {
            cout << "Array is full.\n";
            break;
        }

        else
        {
            cout << "Enter position and value to inser: ";
            int value, position;
            cin >> position >> value;
            position += count;
            for (int i = n; i >= position; i--)
            {
                a[i] = a[i - 1];
            }

            a[position - 1] = value;
            n++;
        }
        count++;
    }

    cout << "Array after position-based insertion: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Enter the number of deletions: ";
    cin >> x;

    while (x--)
    {
        cout << "Enter 1 to delete by position, 2 to delete by value: ";
        int ans;
        cin >> ans;
        if (n < 0)
        {
            cout << "Array is empty.\n";
            break;
        }

        else if (ans == 1)
        {

            cout << "Enter position to delete: ";
            int position;
            cin >> position;
            for (int i = position - 1; i < n - 1; i++)
                a[i] = a[i + 1];
            n--;
        }
        else if (ans == 2)
        {

            cout << "Enter value to delete: ";
            int value;
            cin >> value;
            int flag = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == value)
                {
                    flag = 1;
                    for (int j = i; j < n; j++)
                    {
                        a[j] = a[j + 1];
                    }
                    n--;
                    i--;
                }
            }
            if (flag == 0)
                cout << "Value not found.\n";
        }
    }

    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}