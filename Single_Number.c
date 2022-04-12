#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,k;
    vector<int>v;
    cin>>s;
    for(int i=0;i<s;i++){
        cin>>k;
        v.push_back(k);
    }
    for(int j=0;j<v.size();j++){
        if(count(v.begin(),v.end(),v[j])==1){
            cout<<v[j];
            break;
        }
    }
    return 0;
}