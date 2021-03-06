// find Largest sum contiguous Subarray [V. IMP]

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int a[] = {7,5,-13,5,10,-2,5}; 
    int size = sizeof(a)/sizeof(a[0]); 

    int max_so_far = INT_MIN, max_ending_here = 0; 
  
    for (int i = 0; i < size; i++) 
    { 
        max_ending_here = max_ending_here + a[i]; 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    cout << max_so_far;
}
