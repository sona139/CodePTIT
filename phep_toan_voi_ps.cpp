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

struct PhanSo {
	ll tu, mau;
};

struct PhanSo c, d;

void psC(PhanSo a, PhanSo b) {
	ll gcd = __gcd(a.mau, b.mau);
	ll lcm = a.mau/gcd*b.mau;
	c.mau = lcm;
	c.tu = lcm/a.mau*a.tu + lcm/b.mau*b.tu;
	gcd = __gcd(c.tu, c.mau);
	c.tu /= gcd;
	c.mau /= gcd;
	c.tu *= c.tu;
	c.mau *= c.mau;
	cout << c.tu << "/" << c.mau << " ";
}

void psD(PhanSo a, PhanSo b) {
	d.tu = a.tu * b.tu * c.tu;
	d.mau = a.mau * b.mau * c.mau;
	ll gcd = __gcd(d.tu, d.mau);
	d.tu /= gcd;
	d.mau /= gcd;
	cout << d.tu << "/" << d.mau << endl;
}

void process(PhanSo a, PhanSo b) {
	psC(a, b);
	psD(a, b);
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}