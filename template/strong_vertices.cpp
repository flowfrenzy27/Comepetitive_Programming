#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        int a[n+1],b[n+1];
        
        for( int i = 1 ;i <= n ; i++ )
        {
            cin>>a[i];
        }
        for( int i = 1 ;i <= n ; i++ )
        {
            cin>>b[i];
        }
        
        int mx = INT_MIN;
        for( int i = 1 ;i <= n ; i++ ) mx = max( mx , a[i] - b[i] );
        
        int c = 0;
        for( int i = 1 ;i <= n ; i++ )
        {
            if( mx == ( a[i] - b[i] ) ) c++;
        }
        
        cout<<c<<endl;
        for( int i = 1 ;i <= n ; i++ )
        {
            if( mx == ( a[i] - b[i] ) ) cout<<i<<' ';
        }
        
        cout<<endl;
        
        
        
    
    }
}