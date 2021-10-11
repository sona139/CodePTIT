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

struct ThiSinh {
	string name, date;
	float a, b, c, tong;
};

void nhap(ThiSinh &a) {
	getline(cin, a.name);
	cin >> a.date >> a.a >> a.b >> a.c;
	a.tong = a.a + a.b + a.c;
}

void in(ThiSinh a) {
	cout << fixed << setprecision(1) << a.name << " " << a.date << " " << a.tong;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
