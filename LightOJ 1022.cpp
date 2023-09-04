

#include<bits/stdc++.h>
using namespace std;
int main() {
    double pi,r,s,c,ans,x;
    long long int i =0,t;
    cin>>t;
    x=2.00*acos (0.0);
    while(t--) {
            cin>>r;
        i++;
        s=(r*2)*(r*2);
        c=x*(r*r);
        cout<<"Case "<<i<<": "<<fixed<<setprecision(2)<<s-c<<endl;
    }
    return 0;
}
