#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0)

void Build_SparseTable (vector<int>& vec, vector<vector<int> >& sparse_table)
{

    int rows = vec.size();
    int cols = sparse_table[0].size();

    for (int r = 0; r < rows; r++)
    {
        sparse_table[r][0] = vec[r];
    }


    for (int c = 1; c <= cols; c++)
    {
        int range = (1 << c);
        for (int r = 0; r + range <= rows; r++)
        {
            sparse_table[r][c] = min (sparse_table[r][c-1], sparse_table[r+(1<<(c-1))][c-1]);
        }
    }

}

void RMQ (int left, int right, vector<vector<int> >& sparse_table)
{

    int power_of_2 = (int) log2( right + 1 - left );
    int x = right + 1 - ( 1 << power_of_2 );

    if ( sparse_table[left][power_of_2] <= sparse_table[right + 1 - ( 1 << power_of_2 )][power_of_2] )
    {
        cout << sparse_table[left][power_of_2] << endl;
    }
    else
    {

        cout<< sparse_table[right + 1 - ( 1 << power_of_2)][power_of_2] << endl;
    }
}

int main()
{
    fast;
    int t,x;
    cin>>t;
    int cas;
    for(cas=1; cas<=t; cas++)
    {

        vector<int> vec;
        int n,q;
        cin>>n;
        cin>>q;
        for(int d=0; d<n; d++)
        {
            int s;
            cin>>s;
            vec.push_back(s);
        }
        int sz = ceil (log2 (vec.size()) ) + 1;
        vector<vector<int> > sparse_table (vec.size(), vector<int>(sz));
        Build_SparseTable (vec, sparse_table);
        cout<<"Case "<<cas<<":"<<endl;
        while(q--)
        {
            int p,q;
            cin>>p>>q;
            RMQ (p-1, q-1, sparse_table);
        }

    }

    return 0;
}
