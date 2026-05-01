#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c){
    c=tolower(c);
    return(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

int maxVowelCountSubstring(string str,int k){
    int n=str.length();
    if(n<k) return -1;
    int count=0;

    //for first window
    for(int i=0;i<k;i++){
       if(isVowel(str[i])) count++;
    }

    int maxCount=count;
    //sliding window
    for(int i=k;i<n;i++){
        if(isVowel(str[i])) count++;
        if(isVowel(str[i-k])) count--;
        maxCount=max(maxCount,count);
    }
    return maxCount;
}

int main(){
    string str="ritik";
    int k=3;
    cout<<"Maximum number of vowels in any substring of lenght "<<maxVowelCountSubstring(str,k)<<endl;
}