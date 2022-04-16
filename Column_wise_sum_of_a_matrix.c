#include<stdio.h>
int main()
{
    int n,m,i,j,a,b;
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
        int c=0;
        for(b=0;b<n;b++){
            c=c+arr[b][a];
        }
        printf("%d ",c);
    }
    return 0;
}