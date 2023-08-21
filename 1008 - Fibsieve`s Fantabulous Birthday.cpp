#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll p,q,r,s,n,i=1,t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=sqrt(s);
        p=(n*n)+n+1;
        q=s-(n*n);
        r=((n+1)*(n+1))-s+1;

        if (s%2==0&&s==(n*n))  // s even and perfect square
        {
            cout<<"Case "<<i<<": "<<n<<" "<<1<<endl;
        }
        else if (s%2==1&&s==(n*n))    // s odd and perfect square
        {
            cout<<"Case "<<i<<": "<<1<<" "<<n<<endl;
        }

         ///s==p

        else if (p==s)
        {
            cout<<"Case "<<i<<": "<<n+1<<" "<<n+1<<endl;
        }

        ///s<p

        else if ((s<p)&&(n%2==0))   // n even s<p
        {
            cout<<"Case "<<i<<": "<<n+1<<" "<<q<<endl;
        }
        else if ((s<p)&&(n%2==1))   // n odd s<p
        {
            cout<<"Case "<<i<<": "<<q<<" "<<n+1<<endl;
        }

        ///s>p

        else if ((s>p)&&(n%2==0))  // n even s>p
        {
            cout<<"Case "<<i<<": "<<r<<" "<<n+1<<endl;
        }
        else if ((s>p)&&(n%2==1))  // n even s>p
        {
            cout<<"Case "<<i<<": "<<n+1<<" "<<r<<endl;
        }

        i++;
    }
    return 0;
}
