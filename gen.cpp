// The ones who fear failure are those who have never tasted it..

#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define pb push_back
#define int long long
#define vec_i vector<int>
#define sz(x) (int)(x.size())
#define all(x) (x).begin(),(x).end()
#define forr(x,a,m) for(int x=a;x<m;x+=1)
const int mod = 1000000007, N = 100005;

void solve() {
	srand(time(0));
	int num = (rand() %(100 - 1 + 1)) + 1;
	cout << num << '\n';
}

signed main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int tin = 1; //cin >> tin;
	while (tin--) solve();
	return 0;
}
