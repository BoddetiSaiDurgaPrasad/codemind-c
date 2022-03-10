#include<stdio.h>
int main()
{
    long long int n,a,i,c,j;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&a);
        c=1;
        for(j=1;j<=a;j++){
            c=c*j;
        }
        printf("%lld
",c);
    }
    return 0;
}