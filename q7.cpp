// Write a program to cyclically rotate an array by one.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int first = arr[size-1];
    for (int i = size-1; i > 0; i--)
      arr[i] = arr[i-1];
    arr[0] = first;
    for (int i = 0; i < size; i++)
      cout << arr[i] << " ";
}