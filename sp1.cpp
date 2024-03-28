#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 5, a = 9;
    printf("%d ", --x - x--);
    int y = x-- + ++a;
    cout << x << " " << y << " " << a;
}