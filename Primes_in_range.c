#include<bits/stdc++.h>
using namespace std;
vector<int>v(10000001,1);
void sieve(){
    v[0]=v[1]=0;
    for(int i=2;i*i<=10000001;i++){
        if(v[i]==1){
        for(int j=i*i;j<=10000001;j+=i){
                v[j]=0;
        }
        }
    }
}
int main(){
    sieve();
    int a,b,c=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(v[i]==1){
            c+=1;
        }
    }
    cout<<c;
    return 0;
}