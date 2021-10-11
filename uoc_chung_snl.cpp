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

ll a;
string b;

void Input() {
	cin >> a >> b;
}

bool cmp(ll a, ll b) {
	return a > b;
}

ll gcd(vll uoc) {
	for (int i = 0; i < uoc.size(); ++i) {
		string c = b;
		ll temp = 0;
		for (int j = 0; j < c.size(); ++j) {
			temp *= 10;
			temp += c[j] - '0';
			temp %= uoc[i];
		}
		if(!temp)
			return uoc[i];
	}
}

void Solve() {
	vll uoc;
	for (int i = 1; i <= sqrt(a); ++i)
		if(a%i == 0) {
			uoc.push_back(i);
			uoc.push_back(a/i);
		}
	sort(uoc.begin(), uoc.end(), cmp);
	cout << gcd(uoc) << endl;
}

int main() {
	tester() {
		Input();
		Solve();
	}
	return 0;
}
