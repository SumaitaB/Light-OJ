#include<stdio.h>
#include<math.h>
int main()
{
    long long int s,n,i,t,q,r,p1;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&s);
        n=sqrt(s);
        p1=(n*n)+n+1;
        q=s-(n*n);
        r=((n+1)*(n+1))-s+1;
        if(s%2==0&&(s==(n*n)))
        {
            printf("Case %lld: %lld 1\n",i,n);
        }
         else if(s%2==1&&(s==(n*n)))
        {
            printf("Case %lld: 1 %lld\n",i,n);
        }
        else if(p1==s)
        {
            printf("Case %lld: %lld %lld\n",i,n+1,n+1);
        }
         else if(s<p1&&(n%2==0))
        {
            printf("Case %lld: %lld %lld\n",i,n+1,q);
        }
         else if(s>p1&&(n%2==0))
        {
            printf("Case %lld: %lld %lld\n",i,r,n+1);
        }

        else if(s<p1&&(n%2==1))
        {
            printf("Case %lld: %lld %lld\n",i,q,n+1);
        }
         else if(s>p1&&(n%2==1))
        {
            printf("Case %lld: %lld %lld\n",i,n+1,r);
        }
    }
    return 0;
}
