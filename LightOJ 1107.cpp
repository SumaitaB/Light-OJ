
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ll i =0;
    ll t,x1,y1,x2,y2,x3,x4,y3,y4,m,cx,cy,f=0;
    cin>>t;
    while(t--) {
        i++;
        cin>>x1>>y1>>x2>>y2>>m;
        x3=x2;
        y3=y1;
        x4=x1;
        y4=y2;
        cout<<"Case "<<i<<":"<<endl;
//           cout<<"x1="<<x1<<" "<<"y1 = "<<y1<<endl;  cout<<"x2="<<x2<<" "<<"y2 = "<<y2<<endl;
//            cout<<"x3="<<x3<<" "<<"y3 = "<<y3<<endl;  cout<<"x4="<<x4<<" "<<"y4 = "<<y4<<endl;
        while(m--) {
            f=0;
            cin>>cx>>cy;
            if((cx>=x1&&cx<=x3)&&(cy>=y1&&cy<=y4)) {

                 cout<<"Yes"<<endl;
            } else {
               cout<<"No"<<endl;
            }
        }

    }
    return 0;
}
