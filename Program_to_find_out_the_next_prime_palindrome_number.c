#include<bits/stdc++.h>
using namespace std;
bool p(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
bool pal(int n){
    int c=n;
    int h=0;
    while(n){
        int r=n%10;
        h=h*10+r;
        n=n/10;
    }
    return h==c;
}
int main(){
    int n;
    cin>>n;
    //cout<<pal(n)<<" ";
    n+=1;
    while(true){
        if(p(n) &&pal(n)){
            cout<<n;
            break;
        }
        n+=1;
    }
    return 0;
}