// Find the maximum and minimum element in an array

#include <iostream>
using namespace std;

void maximum(int a[], int size)
{   
    int max = 0;
    for(int i = 0; i < size; i++)
    {   
        if(a[i] > max)
        max = a[i];
    }
    cout << "Maximum is " << max << endl;
}

void minimum(int a[], int size)
{   
    int min = a[0];
    for(int i = 1; i < size; i++)
    {   
        if(a[i] < min)
        min = a[i];
    }
    cout << "Minimum is " << min << endl;
}

int main ()
{
    int arr[] = {5, 3, 8, 0, 4, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    maximum(arr, size);
    minimum(arr, size);
}