#include<bits/stdc++.h>
using namespace std;

int mod = 1000000007;
void solve() {
	int n;
	cin>>n;

	vector<int> v(n);
	for( auto &it : v )
	{
		cin>>it;
	}

	int maxi = 0;
	for( int i = 1;i <n  ;i++)
	{
		if( v[i] < v[i-1] ) maxi = max(maxi,v[i-1]);
	}

	cout<<maxi<<endl;
	return;
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