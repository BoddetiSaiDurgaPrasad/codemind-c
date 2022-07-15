#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,b,w,c;
    cin>>l>>b>>w>>c;
    int h=(2*(l*w))+(2*(b*w));
    int ca=4*(w*w);
    cout<<(h+ca)*c;
    return 0;
}