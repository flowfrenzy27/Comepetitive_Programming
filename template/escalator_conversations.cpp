#include <iostream>
#include <cstdlib>
#include<vector>
using namespace std;

void solve()
{
    int n , m , k , h ;
    cin>>n>>m>>k>>h;
    
    vector<int> v(n);
    for( auto &it : v )
    {
        cin>>it;
    }
    
  
    int count = 0;
    for( auto x : v )
    {
        if( h != x && (abs(h - x)%k == 0) && (abs(h - x) <= (m-1)*k) ) count++;
    }
    
    cout<<count<<endl;
}
int main()
{
    int t = 1;
    cin>>t;
    
    while( t-- )
        solve();

    return 0;
}
