
#include <iostream>
#include<algorithm>
#include <cstdlib>
#include<vector>
using namespace std;


bool solve()
{
    int n ,k;
    cin>>n>>k;
    
    vector<int> a(n);
    for( int i = 0; i< n; i++ )
    {
        cin>>a[i];
    }
    
    int i , j , left , right , k_left , k_right;
    i = 0 , j = n-1, left = 0, right = 0 , k_left = k , k_right = k;
    
    
    if( a[0] == a[n-1] )
    {
        k_left = k/2;
        k_right = k - k_left;
    }
    
    for( ; i < n && left < k_left ; i++ )
    {
        if( a[i] ==  a[0] )left++;
    }
    for( ; j  >= 0 && right < k_right ; j-- )
    {
        if( a[j] == a[n-1] )right++;
    }
    
    return ( i - 1 ) < ( j + 1 );
    
    
}
int main()
{
    int t = 1;
    cin>>t;
    
    while( t-- )
    {
        bool ans = false;
        ans = solve();
        if( ans ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
        

    return 0;
}
