#include<stdio.h>
int main()
{
    int n,a,b,i,j,k,v,car;
    scanf("%d",&n);
    int arr[n][n],rr[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(k=0;k<n;k++){
        for(v=0;v<n;v++){
            scanf("%d",&rr[k][v]);
        }
    }
    for(a=0;a<n;a++){
        for(b=0;b<n;b++){
            car=arr[a][b]-rr[a][b];
            if(car<0){
                car=car*-1;
            }
            if(b==n-1){
            printf("%d",car);
        }
            else{
                printf("%d ",car);
            }
        }
        printf("
");
    }
    return 0;
}