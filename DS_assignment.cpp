#include <bits/stdc++.h>
using namespace std;

// merge function to merge two subarrays
void merge(int arr[], int left, int mid, int right)
{
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // temp arrays for left and right subarrays
    int L[n1], R[n2];

    // copy elements to temp arrays L[] & R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // now merge the both temp arrays back into arr[l..r]
    i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    // copy the remaining elements of L[](if there any remaining element)
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    // copy the remaining elements of R[](if there any remaining element)
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        //(right-left) is to avoid overflow for large left
        int mid = left + (right - left) / 2;

        // sort first halve
        mergeSort(arr, left, mid);
        // sort second halve
        mergeSort(arr, mid + 1, right);
        // merge both halves
        merge(arr, left, mid, right);
    }
}
int main()
{
    int arr[] = {4, 3, 2, 10, 12, 1, 5, 6};
    int sz = sizeof(arr) / sizeof(arr[0]); //(total size / size of an element)
    cout << "Original array.\n";
    for (int i = 0; i < sz; i++)
        cout << arr[i] << " ";
    cout << endl;
    mergeSort(arr, 0, sz - 1);
    cout << "Sorted array in ascending order.\n";
    for (int i = 0; i < sz; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << "Sorted array in descending order.\n";
    for (int i = sz - 1; i >= 0; i--)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}