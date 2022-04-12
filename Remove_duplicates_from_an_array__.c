#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,k;
    cin>>s;
    set<int>q;
    for(int i=0;i<s;i++){
        cin>>k;
        q.insert(k);
    }
    for(auto i=q.begin();i!=q.end();i++){
        cout<<*i<<" ";
    }
    return 0;
}