#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    while(n--){
        int k;
        cin>>k;
        v.emplace_back(k);
    }
    sort(v.begin(),v.end());
    for(auto it:v){
        cout<<it<<" ";
    }
    return 0;
}