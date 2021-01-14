// Merge Intervals

#include <iostream>
using namespace std;

int main()
{
   int m=4, n=2, k=0;
   int arr[m][n] = {{1,3},{2,6},{8,10},{15,18}};
   int newarr[m][n];
   for (int i = 0; i < m; i++)
   {    
       if (arr[i][1] >= arr[i+1][0] && arr[i+1][0] != NULL)
       {       
           newarr[k][0] = arr[i][0];
           newarr[k][1] = arr[i+1][1];
           k++;
           i++;
       }else
       {
            newarr[k][0] = arr[i][0];
            newarr[k][1] = arr[i][1];
            k++;
       }
       
   }
   for (int i = 0; i < k; i++)
   {   cout<< '{'; 
       cout << newarr[i][0] <<','<< newarr[i][1] << "}, ";
   }
   
  
};
