#include<bits/stdc++.h>
using namespace std;
long long pal(long long n){
    int h=0;
    while(n){
        int r=n%10;
        h=h*10+r;
        n=n/10;
    }
    return h;
}
int main(){
    long long int n,c;
    cin>>n;
    while(true){
        n+=pal(n);
        if(n==pal(n)){
            cout<<n;
            break;
        }
        
    }
    return 0;
}