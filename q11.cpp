// find duplicate in an array of N+1 Integers
#include <iostream>
using namespace std;

int main()
{
int arr[] = {1,3,4,2,2};
int duplicate;
int size = sizeof(arr)/sizeof(arr[0]);
for(int i = 0; i<size; i++)
{
    for (int j = 0; j < size; j++)
    {
        if (arr[i] == arr[j] && i!=j)
        {
            duplicate = arr[i];
            break;
        }
    }
}
cout<< "duplicate is:" << duplicate;
}