#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<char,int>mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }
    int c=0;
    for(auto it:mpp){
        if(it.second>1){
            c++;
        }
    }
    if(c==0){
        cout<<"Unique Number";
    }
    else{
        cout<<"Not Unique Number";
    }
    return 0;
}