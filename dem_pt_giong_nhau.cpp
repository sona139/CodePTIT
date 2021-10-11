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

int n;
vector <vi> a;
vi mark;

void Input() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; ++i) {
        a[i].resize(n);
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];
    }
	mark.resize(nMax, 0);
}

bool find_out(int k) {
	if(mark[k])
		return false;
	int cnt = 0;
	int era[n];
    for (int i = 1; i < n; ++i) {
		int j = 0;
		while(j < a[i].size() && a[i][j] != k)
			++j;
		if(j == a[i].size())
			return false;
		era[i] = j;
	}
	mark[k] = 1;
    return true;
}

void Solve() {
    int count = 0;
    for (int i = 0; i < n; ++i)
        if(find_out(a[0][i]))
            ++count;
    cout << count << endl;
    a.clear();
	mark.clear();
}

int main() {
    faster();
    tester() {
        Input();
        Solve();
    }
    return 0;
}
