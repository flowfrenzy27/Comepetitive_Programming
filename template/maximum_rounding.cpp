#include<bits/stdc++.h>
using namespace std;

int mod = 1000000007;
void solve() {

	string s ;
	cin>>s;

	 s = '0' + s;
	 int p = s.size();
	 int n = s.size();

	 for( int i = n -1  ; i >=0 ; i--)
	 {
	 	if( s[i] >= '5' )
	 	{
	 		s[i-1]++;
	 		p = i;
		}
	 }

	 for( int i = ( s[0] == '0' ) ; i < n ; i++ )
	 {
	 	cout<<( i >= p ? '0' : s[i] );
	 }

	 cout<<endl;


}

int32_t main()
{

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen( "../input/input.txt", "r" , stdin);
	freopen( "../output/output.txt" , "w" , stdout);
#endif


	clock_t z = clock();

	int t = 1;
	cin >> t;
	while (t--) solve();

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

	return 0;

}