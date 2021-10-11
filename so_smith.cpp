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

void Input() {
	cin >> n;
}

int tong_uoc(int m) {
	int ans = 0;
	if(m == 2)
		return -1;
	while(m%2 == 0){
		ans += 2;
		m /= 2;
	}
	int i = 3;
	while(i <= sqrt(m)) {
		int temp = 0, j = i;
		while(j) {
			temp += j%10;
			j /= 10;
		}
		while(m%i == 0) {
			m /= i;
			ans += temp;
		}
		i += 2;
	}
	if(m == n)
		return -1;
	if(m > 1) {
		while(m) {
			ans += m%10;
			m /= 10;
		}
	}
	return ans;
}

int tong(int m) {
	int ans = 0;
	while(m) {
		ans += m%10;
		m /= 10;
	}
	return ans;
}

void Solve() {
	int smith1 = tong_uoc(n);
	int smith2 = tong(n);
	smith1 == smith2 ? cout << "YES" : cout << "NO";
	cout << endl;
}

int main() {
	tester() {
		Input();
		Solve();
	}
	return 0;
}
