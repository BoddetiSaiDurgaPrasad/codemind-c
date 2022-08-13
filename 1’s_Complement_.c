#include<bits/stdc++.h>
using namespace std;
int bin(string h){
    int k=0;
    for(int i=0;i<h.size();i++){
    if(h[i]=='1'){
        k+=pow(2,i);
    }
    }
    return k;
}
int main(){
    int a;
    cin>>a;
    string h;
    while(a){
        if(a&1){
            h+='0';
        }
        else{
            h+='1';
        }
        a=a>>1;
    }
    cout<<bin(h);
    return 0;
}