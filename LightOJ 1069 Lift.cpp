
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
long long int t,i=1,a,b,x;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a<=b)
        {
            x=b;
            x=x*4;
        }
        else
        {
            x=(a-b)*4;
            x=x+a*4;
        }
        x=x+16+3;
        cout<<"Case "<<i<<": "<<x<<endl;
        i++;
    }
    return 0;
}
