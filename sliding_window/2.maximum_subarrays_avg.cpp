#include<bits/stdc++.h>
using namespace std;

double maximumsubArrayAvg(vector<int>& arr,int k){
    int n=arr.size();
    if(n<k) return -1;

    //for first window sum
    int sum=0;
    for(int i=0;i<k;i++){
        sum=sum+arr[i];
    }

    int maxsum=sum;
    for(int i=k;i<n;i++){
        sum=sum+arr[i]-arr[i-k];
        maxsum=max(maxsum,sum);
    }
    return (double)maxsum/k;
}

int main(){
    vector<int> arr={1,2,3,4,5};
    int k=3;
    cout<<"Maximum avg sum : "<<maximumsubArrayAvg(arr,k);
}