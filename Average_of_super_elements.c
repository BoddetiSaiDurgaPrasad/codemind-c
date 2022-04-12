#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,k;
    float f,c=0;
    vector<int>v;
    set<int>q;
    cin>>s;
    for(int i=0;i<s;i++){
        cin>>k;
        v.push_back(k);
    }
    for(int j=0;j<v.size();j++){
        if(count(v.begin(),v.end(),v[j])==v[j]){
            q.insert(v[j]);
        }
    }
    if(q.size()==0){
        cout<<"-1";
    }else{
    for(auto i=q.begin();i!=q.end();i++){
        f=(*i);
        c+=f;
    }
    printf("%0.2f",c/(q.size()));}
    return 0;
}