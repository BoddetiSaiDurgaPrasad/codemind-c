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
    for(a=0;a<n;a++){
         c=0;
        for(b=0;b<m;b++){
            c=c+arr[a][b];
        }
        //printf("%d h",c);
        if(x<c){
            x=c;
        }
    }printf("%d",x);
    return 0;
}