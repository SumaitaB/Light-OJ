#include<stdio.h>
int main()
{
    int t,i,n,p;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        p=n-1;
        if(n<=10)
        {
            printf("%d 0\n",n);
        }
        else
        {
         p=n-10;
      printf("10 %d\n",p);
        }
    }

    return 0;
}
