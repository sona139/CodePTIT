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

int I[4] = {-1, 0, 0, 1};
int J[4] = {0, -1, 1, 0};

int n, m;
vector <vector <char> > a;

void Input() {
	cin >> n >> m;
	a.resize(n);
	for (int i = 0; i < n; ++i) {
		a[i].resize(m);
		for (int j = 0; j < m; ++j)
			cin >> a[i][j];
	}
}

bool inMatrix(int i, int j) {
	return i >= 0 && j >= 0 && i < n && j < m;
}

bool Try(int i, int j, bool ok, vector <vector <bool> > mark) {
	if(ok) return false;
	for (int k = 0; k < 4; ++k) {
		mark[i][j] = true;
		int inext = i + I[k];
		int jnext = j + J[k];
		if(inMatrix(inext, jnext)) {
			if(a[inext][jnext] == 'O')
				return Try(inext, jnext, ok, mark);
		}
		else {
			ok = true;
			return false;
		}
	}
	return true;
}

void change(int i, int j) {
	a[i][j] = 'X';
	for (int k = 0; k < 4; ++k) {
		int inext = i + I[k];
		int jnext = j + J[k];
		if(inMatrix(inext, jnext) && a[inext][jnext] == 'O')
			change(inext, jnext);
	}
}

void Solve() {
	vector <vector <bool> > mark;
	mark.resize(n);
	for (int i = 0; i < n; ++i) {
		mark[i].resize(m);
		for (int j = 0; j < m; ++j)
			if(!mark[i][j] && a[i][j] == 'O') {
				bool ok = false;
				if(Try(i, j, ok, mark))
					change(i, j);
			}
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

int main() {
	 int n;
    cin >> n;
    queue<ll> q;
    q.push(1);
    ll tmp;
    for(int i = 1; i < n; ++i)
    {
        tmp = q.front();
        q.pop();
        q.push(tmp * 10);
        q.push(tmp * 10 + 1);
        cout << tmp << ' ';
    }
    cout << endl;
	return 0;
}
