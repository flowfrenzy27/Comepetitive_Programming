
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t = 1;
  cin>>t; 
   while( t-- )
   {
       int n,k;
       cin>>n>>k;
       
       vector<int> a(n);
       for( auto &it : a )
       {
           cin>>it;
       }
       
       sort( a.begin() , a.end());
       
       
       int cnt = 1, ans = 1;
       for( int i = 1; i <n ;i++ )
       {
           if( a[i] -a[i-1] > k ) cnt = 1;
           else cnt++;
           
           ans = max( ans , cnt );
       }
       
       cout<<n - ans <<endl;
   }

    return 0;
}