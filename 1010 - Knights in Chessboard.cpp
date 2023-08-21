#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t,i,m,n,p;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>m>>n;
        p=m*n;
        if(m==1||n==1)
        {
            p=m*n;
        }
        else if(m==2&&n==2)
        {
            p=m*n;
        }
        else if(m==2||n==2)
        {
            if(m==2)
            {
                p=n;
            }
            else if (n==2)
            {
                p=m;
            }
            if(p%4==0)
            {
                p=p;
            }
            else if(p%4==1)
            {
                p++;
            }
            else if(p%4==2)
            {
                p+=2;
            }
            else if(p%4==3)
            {
                p++;
            }
        }
        else if(p%2==0)
        {
            p=p/2;
        }
        else if(p%2==1)
        {
            p=(p+1)/2;
        }
        cout<<"Case "<<i<<": "<<p<<endl;
    }
    return 0;
}
