
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

    ll t,i;
    cin>>t;

    for(i=1; i<=t; i++)
    {
        ll n,j;
        ll a[25][5] = {0};

        cin>>n;

        for(j=0; j<n; j++)
        {
            cin>>a[j][0];
            cin>>a[j][1];
            cin>>a[j][2];
        }
        for(j=1; j<n; j++)
        {
            a[j][0]+= min(a[j-1][1],a[j-1][2]);
            a[j][1]+= min(a[j-1][0],a[j-1][2]);
            a[j][2]+= min(a[j-1][1],a[j-1][0]);
        }
        ll p=min(a[n-1][0],(min(a[n-1][1],a[n-1][2])));
        cout<<"Case "<<i<<": "<<p<<endl;

    }
    return 0;
}
