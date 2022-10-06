#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    //for(auto it:)
    int ans=0;
    for(auto it:v){
        ans=__gcd(ans,it);
        }
    cout<<ans;
    return 0;
}