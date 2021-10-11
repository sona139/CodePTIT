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

class PhanSo {
	private:
		ll tu, mau;

	public:
		PhanSo(ll , ll);
		void rutgon();
		PhanSo operator + (PhanSo b);
		friend istream &operator >> (istream &input, PhanSo &ps);
		friend ostream &operator << (ostream &output, PhanSo ps);
};

istream &operator >> (istream &input, PhanSo &ps) {
	input >> ps.tu >> ps.mau;
	return input;
}

ostream &operator << (ostream &output, PhanSo ps) {
	output << ps.tu << "/" << ps.mau << endl;
	return output;
}

PhanSo :: PhanSo(ll tu, ll mau) {
	this -> tu = tu;
	this -> mau = mau;
}

void PhanSo :: rutgon() {
	ll gcd = __gcd(tu, mau);
	tu /= gcd;
	mau /= gcd;
}

PhanSo PhanSo :: operator + (PhanSo b) {
	PhanSo c(1, 1);
	c.tu = tu*b.mau + mau*b.tu;
	c.mau = mau*b.mau;
	c.rutgon();
	return c;
}

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
