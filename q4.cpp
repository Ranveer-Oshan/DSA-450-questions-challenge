// Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

#include <iostream>
using namespace std;

int main() 
{
    int size;
    cin >> size;
    int arr[size];
    for(int j = 0; j < size; j++)
        cin >> arr[j];
    int c0 = 0, c1=0, c2=0;

    for(int j = 0; j < size; j++)
    {
        if(arr[j] == 0)
        c0++;
    }
        
    for(int j = 0; j < size; j++)
    {
        if(arr[j] == 1)
        c1++;
    }
        
    for(int j = 0; j < size; j++)
    {
        if(arr[j] == 2)
        c2++;
    }
        
    
    cout << c0 << c2<< c1 << endl;
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";    
    cout << endl;

    int c = 0;

    for(int j = c0; j > 0; j--)
        {
            arr[c] = 0;
            c++;
        }
        
    for(int j = c1; j > 0; j--)
        {
            arr[c] = 1; 
            c++;
        }
    for(int j = c2; j > 0; j--)
        {
            arr[c] = 2; 
            c++;
        }  
    
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
}