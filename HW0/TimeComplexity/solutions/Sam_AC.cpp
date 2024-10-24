#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define int long long

using namespace std;

signed main(){
	fastio
	int n;
	cin >> n;
	
	int ans = 0, now = 0;

	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		now = max(x, now + x);
		ans = max(now, ans);
	}

	cout << ans << "\n";
}