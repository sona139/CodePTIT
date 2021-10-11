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

int n, x, ip;
vector <pair <int, pair <int, int> > > a;

void Input() {
    cin >> n >> x;
    for (int i = 0; i < n; ++i) {
        cin >> ip;
        a.push_back(mp(abs(ip-x), mp(ip, i)));
    }
}

bool cmp(pair <int, pair <int, int> > a, pair <int, pair <int, int> > b) {
	if(a.fi < b.fi)
		return true;
	if(a.fi == b.fi && a.se.se < b.se.se)
		return true;
	return false;
}

void Solve() {
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < n; ++i)
		cout << a[i].se.fi << " ";
    cout << endl;
    a.clear();
}

int main() {
    faster();
    tester() {
        Input();
        Solve();
    }
    return 0;
}
