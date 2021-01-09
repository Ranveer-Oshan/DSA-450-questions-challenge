//Reverse the array

#include <iostream>
using namespace std;
int main()
{
    string arr[] = {"Never","Give","Up"};
    int size = sizeof(arr)/sizeof(arr[0]);
    string reverse_arr[3];
    for(int i = size -1; i >= 0; i--)
    {
        reverse_arr[size -1 - i] = arr[i];
    };
    for (int j = 0; j < size; j++)
    cout << arr[j] << " ";
    cout << endl;
    for (int j = 0; j < size; j++)
    cout << reverse_arr[j] << " ";

    return 0;

};