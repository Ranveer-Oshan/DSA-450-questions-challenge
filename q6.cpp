// Find the Union of the two sorted arrays.

#include <iostream>
#include <unordered_map> 
using namespace std;

int main()
{
    int arr1[] = {1, 2, 3, 4, 6, 8, 9};
    int arr2[] = {1, 3, 5, 7, 8, 9, 11, 12};
    unordered_map<int,int> map;
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    for (int i = 0; i < size1; i++)
    {
        map[arr1[i]++];
    }
    for (int i = 0; i < size2; i++)
    {
        map[arr2[i]++];
    }
    cout << map.size() << endl;
}