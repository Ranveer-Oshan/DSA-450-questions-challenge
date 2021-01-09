// Find the "Kth" max and min element of an array 

#include <iostream>
#include <algorithm>
using namespace std;

void min(int a[], int size, int k)
{
    sort(a, a + size);
    cout << a[k-1] << endl;
}

void max(int a[], int size, int k)
{
    sort(a, a + size, greater<int>());
    cout << a[k-1] << endl;
}

int main()
{
    int arr[] = {2,6,4,9,1,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    max(arr, size, 3);
    min(arr, size, 2);
}