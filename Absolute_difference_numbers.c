#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n;
    string s1,s2;
    cin>>s>>n;
    for(int i=0;i<n;i++){
        s1+=s[i];
    }
    for(int i=s.size()-1;i>=s.size()-n;i--){
        s2+=s[i];
    }
    reverse(s2.begin(),s2.end());
    stringstream ss;
    int n1;
    ss<<s1;
    ss>>n1;
    stringstream ss2;
    int n2;
    ss2<<s2;
    ss2>>n2;
    cout<<abs(n1-n2);
    return 0;
}