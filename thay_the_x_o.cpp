/* Eat_more */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
 
#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tester() int t; cin >> t; while(t--)
#define PI atan(1)*4
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
 
int n, m, ine, jne;
char a[20][20];
bool ok;
 
void Input() {
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> a[i][j];
}
 
bool inMatrix(int i, int j) {
	return i >= 0 && j >= 0 && i < n && j < m;
}
 
void Try(int i, int j) {
	a[i][j] = 'O';
	for (int k = 0; k < 4; ++k) {
		ine = i + I[k];
		jne = j + J[k];
		if(inMatrix(ine, jne))
			Try(ine, jne);
	}	
}
 
void Solve() {
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			if(a[i][j] == 'O')
				a[i][j] = 'S';
	for (int i = 0; i < n; ++i) {
		if(a[i][0] == 'S')
			Try(i, 0);
		if(a[i][m-1] == 'S')
			Try(i, n-1);
	}
	for (int j = 0; j < m; ++j) {
		if(a[0][j] == 'S')
			Try(0, j);
		if(a[n-1][j] == 'S')
			Try(n-1, j);
	}
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			if(a[i][j] == 'S')
				a[i][j] = 'O';
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
 
int main() {
	faster();
	tester() {
		Input();
		Solve();
	}
	return 0;
}