#include<stdio.h>
#include<math.h>
int main()
{
    long long int x,y,m,k;
    scanf("%lld %lld %lld",&x,&y,&m);
    k=pow(x,y);
    printf("%lld",k%m);
    return 0;
}