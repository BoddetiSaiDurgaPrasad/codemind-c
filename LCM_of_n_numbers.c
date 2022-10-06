#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans=0;
    ans=(v[0]*v[1])/__gcd(v[0],v[1]);
    for(int i=2;i<n;i++){
        ans=(ans*v[i])/__gcd(ans,v[i]);
        }
    cout<<ans;
    return 0;
}