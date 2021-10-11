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

struct point {
	int x, y;
};

struct node {
	struct point p;
	int length;
};

int xStart, yStart, xEnd, yEnd;
int n, m;
int a[1000][1000];


void Input() {
	cin >> n >> m >> xStart >> yStart >> xEnd >> yEnd;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> a[i][j];
}

bool inMatrix(int i, int j) {
	return i >= 0 && j >= 0 && i < n && j < m;
}

int BFS() {
	if(!a[xStart][yStart] || !a[xEnd][yEnd])
		return -1;
	bool M[n][m];
	memset(M, false, sizeof M);
	M[xStart][yStart] = true;
	queue <struct node> dq;
	struct node cur;
	struct point curP;
	dq.push({{xStart, yStart}, 0});
	while(dq.size()) {
		cur = dq.front();
		curP = cur.p;
		if(curP.x == xEnd && curP.y == yEnd)
			return cur.length;
		dq.pop();
		for (int i = 0; i < 4; ++i) {
			int xNext = curP.x + I[i];
			int yNext = curP.y + J[i];
			if(inMatrix(xNext, yNext) && a[xNext][yNext] && !M[xNext][yNext]) {
				dq.push({{xNext, yNext}, cur.length + 1});
				M[xNext][yNext] = true;
			}
		}
	}
	return -1;
}

void Solve() {
	cout << BFS() << endl;
}

int main() {
	faster();
	tester() {
		Input();
		Solve();
	}
	return 0;
}