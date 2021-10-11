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

int cnt = 1;
string cnt1 = "0000", cnt2 = "000";

struct NhanVien {
	string name, sex, date, accommodation, fax, time;
	int id;
};

void nhap(NhanVien &a) {
	cin.ignore();
	getline(cin, a.name);
	cin >> a.sex >> a.date;
	cin.ignore();
	getline(cin, a.accommodation);
	cin >> a.fax >> a.time;
	a.id = cnt++;
}

void inds(NhanVien a[], int n) {
	for (int i = 0; i < n; ++i) {
		if(a[i].id < 10)
			cout << cnt1 << a[i].id;
		else cout << cnt2 << a[i].id;
		cout << " " << a[i].name << " " << a[i].sex << " " << a[i].date << " " << a[i].accommodation << " " << a[i].fax << " " << a[i].time << endl;
	}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
