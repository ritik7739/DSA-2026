#include<bits/stdc++.h>
using namespace std;


int  findMaxsumSubarray(vector<int> arr){
     int max_sum=INT_MIN;
     int current_sum=0;
     for (int i=0;i<arr.size();i++){
            current_sum+=arr[i];
            max_sum=max(max_sum,current_sum);
            if (current_sum<0){
                current_sum=0;
            }
     }
     return max_sum;
}

int main(){
    
}