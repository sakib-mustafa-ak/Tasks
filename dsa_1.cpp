#include <bits/stdc++.h>
using namespace std;
int isEven(int n)
{
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cin >> n;
    (isEven(n) == 1) ? cout << "The number X is even.\n" : cout << "The number X is odd.\n";
}

#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "Before swap: a = " << a << ", b = " << b << "\n";
    swap(&a, &b);
    cout << "After swap: a = " << a << ", b = " << b << "\n";
}

#include <bits/stdc++.h>
using namespace std;
int min(int a, int b, int c)
{
    if (a <= b)
    {
        if (a <= c)
            return a;
        else
            return c;
    }
    else
    {
        if (b <= c)
            return b;
        else
            return c;
    }
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << "The minimum of " << a << ", " << b << " and " << c << " is " << min(a, b, c) << ".\n";
}

#include <bits/stdc++.h>
using namespace std;
int check_positive_negative(int a)
{
    if (a < 0)
        return -1;
    else if (a == 0)
        return 0;
    else
        return 1;
}
int main()
{
    int a;
    cin >> a;
    int b = check_positive_negative(a);
    if (b == 1)
        cout << "The number " << a << " is positive.\n";
    else if (b == -1)
        cout << "The number " << a << " is negative.\n";
    else
        cout << "The number " << a << " is neither positive nor negative.\n";
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 1;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << x++ << " ";
        }
        cout << "\n";
    }
}