#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   /*
   //one possible solution can be : sort(arr,arr+n);
   */

   vector<int> v(3,0);
   for(int i=0;i<n;i++){
      v[arr[i]]++;
   }
   
   int idx=0;
   for(int i=0;i<3;i++){
      int counter=0;
      while(counter<v[i]){
         arr[idx]=i;
         idx++;
         counter++;
      }
   }
}