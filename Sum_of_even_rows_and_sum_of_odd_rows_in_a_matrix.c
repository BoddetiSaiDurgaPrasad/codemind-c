#include<stdio.h>
int main()
{
    int n,a,b,i,j,h,k,v=0,c=0;
    scanf("%d %d",&n,&k);
    int arr[n][k];
    for(i=0;i<n;i++){
        for(j=0;j<k;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(a=0;a<n;a++){
        if(a%2==0){
        for(b=0;b<k;b++){
          h=arr[a][b];  
          c=c+h;
        }}
        else{
            for(b=0;b<k;b++){
            h=arr[a][b];
            v=v+h;}
        }
    }printf("%d %d",c,v);
    return 0;
}