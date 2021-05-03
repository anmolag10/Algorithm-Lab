#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int counter = 0;

int interpolationSearch(int arr[], int lo, int hi, int x)
{
    counter++;
    int pos;

    if (lo <= hi && x >= arr[lo] && x <= arr[hi])
    {
        counter++;
        pos = lo + (((double)(hi - lo) / (arr[hi] - arr[lo])) * (x - arr[lo]));

        if (arr[pos] == x)
        {
            counter++;
            return pos;
        }

        if (arr[pos] < x)
        {
            counter++;
            return interpolationSearch(arr, pos + 1, hi, x);
        }

        if (arr[pos] > x)
        {
            counter++;
            return interpolationSearch(arr, lo, pos - 1, x);
        }
    }
    return -1;
}

int main()
{

    int arr[] = {10, 12, 13, 16, 18, 19, 20, 21,
                 22, 23, 24, 33, 35, 42, 47};

    int n = sizeof(arr) / sizeof(arr[0]);

    int x = 18;
    int index = interpolationSearch(arr, 0, n - 1, x);

    if (index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found.";
    
    cout<<endl<<"Count: "<<counter;
    return 0;
}
