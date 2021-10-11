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

struct PhanSo {
	ll tu, mau;
};

void nhap(PhanSo &a) {
	cin >> a.tu >> a.mau;
}

void rutgon(PhanSo &a) {
	ll gcd = __gcd(a.tu, a.mau);
	a.tu /= gcd;
	a.mau /= gcd;
}

void in(PhanSo a) {
	cout << a.tu << "/" << a.mau;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}