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

struct NhanVien {
	string id, name, sex, date, accommodation, fax, time;
};

void nhap(NhanVien &a) {
	getline(cin, a.name);
	cin >> a.sex >> a.date;
	cin.ignore();
	getline(cin, a.accommodation);
	cin >> a.fax >> a.time;
	a.id = "00001";
}

void in(NhanVien a) {
	cout << a.id << " " << a.name << " " << a.sex << " " << a.date << " " << a.accommodation << " " << a.fax << " " << a.time;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
