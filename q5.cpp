// Move all the negative elements to one side of the array 

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {-2,6,4,-9,1,-1,-6,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i = -1;
    int pivot = 0;
    for(int j = 0; j < size; j++)
    {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    for(int i = 0 ; i < size; i++)
    {
        cout << arr[i] << "";
    }

}