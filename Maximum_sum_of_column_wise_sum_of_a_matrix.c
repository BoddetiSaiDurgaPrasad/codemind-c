#include<stdio.h>
int main()
{
    int n,c,m,i,j,a,b,x=0;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
            //printf("%d",arr[i][j]);
        }//printf("
");
    }
    for(a=0;a<m;a++){
         c=0;
        for(b=0;b<n;b++){
            c=c+arr[b][a];
        }
        if(x<c){
            x=c;
        }
    }printf("%d",x);
    return 0;
}