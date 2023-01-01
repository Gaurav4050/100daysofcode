// https://practice.geeksforgeeks.org/problems/median-of-2-sorted-arrays-of-different-sizes/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
       vector<int> arr;
       int n1= array1.size();
       int n2=array2.size();
       int i=0;
       int j=0;
 
       while(i<n1 && j<n2){
           if(array1[i]<=array2[j]){
               arr.push_back(array1[i]);
               i++;
           }
           else{
               arr.push_back(array2[j]);
               j++;
           }
       }
    
       
        while(i<n1){
            arr.push_back(array1[i]);
            i++;
        }
       
        while(j<n2){
           arr.push_back(array2[j]);
               j++;
        }
         
        
        if(arr.size()%2!=0){
            return arr[arr.size()/2];
        }else{
            
            double ans=  arr[arr.size()/2]+ arr[arr.size()/2-1];
            return ans/2;
        }

    
    }
};

int main(){

        

    return 0;
}