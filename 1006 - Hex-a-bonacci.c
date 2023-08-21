#include<stdio.h>
#include<stdlib.h>

int main()
{
    long long int caseno,cases,i,n,x,a[10005];
    scanf("%lld",&cases);
    for(caseno=1; caseno<=cases; caseno++)
    {
        scanf("%lld%lld%lld%lld%lld%lld%lld",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&n);
        for(i=6; i<=n; i++)
        {
            a[i]=(a[i-1]+a[i-2]+a[i-3]+a[i-4]+a[i-5]+a[i-6]);
            a[i]=a[i]%10000007;
        }
        x=a[n]%10000007;
        printf("Case %lld: %lld\n",caseno,x);
    }
    return 0;
}
