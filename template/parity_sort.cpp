
#include <iostream>
#include<algorithm>
#include <cstdlib>
#include<vector>
using namespace std;


bool solve()
{
    int n ;
    cin>>n;
    
    vector<int> a(n),b(n);
    for( int i = 0; i< n; i++ )
    {
        cin>>a[i];
        b[i] = a[i];
    }
    
    sort( b.begin() , b.end() );
    
    for( int i = 0 ;i < n ; i++ )
    {
        if( a[i] % 2 != b[i] % 2 )
        {
            return false;
        }
    }
    
    return true;
    
    
}
int main()
{
    int t = 1;
    cin>>t;
    
    while( t-- )
    {
        bool ans = solve();
        if( ans ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
        

    return 0;
}
