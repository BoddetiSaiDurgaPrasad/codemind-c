#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a=0;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s=="++X" || s=="X++"){
            a+=1;
        }
        else{
            a--;
        }
    }
    cout<<a;
    
}