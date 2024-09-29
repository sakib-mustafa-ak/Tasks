#include <bits/stdc++.h>
using namespace std;

int ternarySearch(int arr[], int n, int key)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;
        if (key == arr[mid1])
            return mid1;
        else if (key == arr[mid2])
            return mid2;
        else if (key < arr[mid1])
            right = mid1 - 1;
        else if (key > arr[mid1] && key < arr[mid2])
            left = mid1 + 1, right = mid2 - 1;
        else
            left = mid2 + 1;
    }
    return -1;
}

int main()
{
    int n, key;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> key;

    sort(arr, arr + n);

    int idx = ternarySearch(arr, n, key);
    if (idx >= 0)
        cout << "Found in position " << idx + 1 << endl;
    else
        cout << "Not found.\n";
}