/* Eat_more */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;

#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tester() int t; cin >> t; while(t--)
#define PI atan(1)*4
#define in INT_MAX
#define im INT_MIN
#define fi first
#define se second
#define vi vector <int>
#define vll vector <ll>
#define pii pair <int, int>
#define mp(x, y) make_pair(x, y)
const int Mod = 1e9 + 7;
const int nMax = 1e5 + 1;

string a;

void Input() {
	cin >> a;
}

void Solve() {
	int ans = 0, temp = 0;
	int s = a.size();
	for (int i = 0; i < s-2; ++i) {
		if(a[i] == '1' && a[i+1] == '0' && a[i+2] == '0') {
			temp += 3;
			s -= 3;
			a.erase(i, 3);
			ans = max(ans, temp);
			if(i > 1 && i < s && a[i-2] == '1' && a[i-1] == '0' && a[i] == '0')
				i -= 3;
			else if(i > 0 && i < s-1 && a[i-1] == '1' && a[i] == '0' && a[i+1] == '0')
				i -= 2;
			else if(i < s-2 && a[i] == '1' && a[i+1] == '0' && a[i+2] == '0')
				--i;
			else temp = 0;
		}
	}
	cout << ans << endl;
}

int main() {
	faster();
	tester() {
		Input();
		Solve();
	}
	return 0;
}