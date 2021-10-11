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

db a, b, c, d;

void Input() {
	cin >> a >> b >> c >> d;
}

void Solve() {
	db denta = b*b - 3*a*c;
	db k = (9*a*b*c - 2*b*b*b - 27*a*a*d)/(2*sqrt(pow(abs(denta), 3)));
	cout << k << endl;
	if(denta > 0) { 
		if(abs(k) <= 1) {
			db x1 = (2*sqrt(denta)*cos(acos(k)/3) - b)/(3*a);
			db x2 = (2*sqrt(denta)*cos(acos(k)/3 - 2*PI/3) - b)/(3*a);
			db x3 = (2*sqrt(denta)*cos(acos(k)/3 + 2*PI/3) - b)/(3*a);
			cout << fixed << setprecision(5) << x1 << " " << x2 << " " << x3;
		}
		else {
			db x = (sqrt(denta)*abs(k))*(pow(abs(k) + sqrt(k*k - 1), 1.0/3) - pow(abs(k) - sqrt(k*k - 1), 1.0/3))/(3*a*k) - b/(3*a);
			cout << x;
		}
	}
	else if(denta == 0) {
		db x = (-b + pow(b*b*b - 27*a*a*d, 1.0/3))/(3*a);
		cout << x;
	}
	else {
		db x = sqrt(abs(denta))*(pow(k + sqrt(k*k+1), 1.0/3) + pow(k - sqrt(k*k+1), 1.0/3))/(3*a) - b/(3*a);
		cout << x;
	}
}

int main() {
	faster();
	Input();
	Solve();
	return 0;
}
