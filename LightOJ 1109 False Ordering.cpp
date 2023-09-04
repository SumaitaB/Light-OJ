
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

bool compare(pair<ll,ll>a, pair<ll,ll>b)
{
    if(a.first==b.first)
    {
        return (a.second>b.second);
    }
    else
    {
        return (a.first<b.first);

    }
}

int main()
{
    ll t, i, n,j,k;
    vector <pair<int, int> > v;

    for(i=1; i<=1000; i++)
    {

        ll d=0;
        n=i;
        for(k=1; k<=n; k++)
        {
            if(n%k==0)
            {
                d++;
            }
        }

        v.push_back(make_pair(d,i));
    }

    sort(v.begin(),v.end(),compare);

    cin>>t;
    j=1;
    while(t--)
    {
        cin>>n;
        cout<<"Case "<<j<<": "<<(v[n-1].second)<<endl;
        j++;
    }
    return 0;
}
