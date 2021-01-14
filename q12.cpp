// Merge 2 sorted arrays without using Extra space.

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {0, 2, 6, 8, 9};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    int arr[size1+size2];
    int j = 0;
    int k = 0;
    for (int i = 0; i < size1; i++)
    {
        arr[i] = arr1[i];
    }
    for (int i = size1; i < size1+size2; i++)
    {   
        arr[i] = arr2[j];
        j++;
    }
    sort(arr, arr + (size1+size2));
    for (int i = 0; i < size1; i++)
    {   
        arr1[i] = arr[i];
    }
    for (int i = size1; i < size1+size2; i++)
    {   
        arr2[k] = arr[i];
        k++;
    }
    for (int i = 0; i < size1; i++)
    {
        cout<< arr1[i] << " ";
    }
    for (int i = 0; i < size2; i++)
    {
        cout<< arr2[i] << " ";
    }

}