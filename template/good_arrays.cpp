#include<bits/stdc++.h>
const char nl = '\n';
typedef long long ll;
typedef long double ld;
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

    ll sum_v = 0 , cnt_1 = 0;
    for( auto x : v )
    {
        sum_v += x;
        if( x == 1 ) cnt_1++;
        
    }
    
    if( sum_v >= cnt_1 + n && n > 1 ) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

	
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