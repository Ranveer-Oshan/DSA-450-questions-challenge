// Next Permutation

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1,2,3};
    int idx = -1;
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = n; i > 0; i--)
    {
        if (arr[i] > arr[i-1])
        {
            idx = i;
            break;
        }
    }
    if (idx == -1)
    {
        reverse(arr, arr+n);
    }
    else{
        int prev = idx;
        for (int i = idx+1; i < n; i++)
        {
            if (arr[i]>arr[idx-1] and arr[i] <= arr[prev])
            {
                prev=i;
            }
        }
        swap(arr[idx-1],arr[prev]);
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i] << " ";
    }

} 