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

struct SinhVien {
	string id = "B20DCCN";
	int stt;
	string name, Class, date;
	float gpa;
	vector <string> ten;
};

void nhap(struct SinhVien a[], int n) {
	for (int i = 0; i < n; ++i) {
		a[i].stt = i+1;
		scanf("\n");
		getline(cin, a[i].name);
		cin >> a[i].Class >> a[i].date >> a[i].gpa;
		if(a[i].date[1] == '/')
			a[i].date.insert(a[i].date.begin(), '0');
		if(a[i].date[4] == '/')
			a[i].date.insert(a[i].date.begin() + 3, '0');
		stringstream ss(a[i].name);
		string token;
		while(ss >> token) {
			for (int i = 0; i < token.size(); ++i)
				if(token[i] < 'a')
					token[i] += 32;
			token[0] -= 32;
			a[i].ten.push_back(token);
		}
	}
}

bool cmp(struct SinhVien a, struct SinhVien b) {
	return a.gpa > b.gpa;
}

void sapxep(struct SinhVien a[], int n) {
	sort(a, a+n, cmp);
}

void in(struct SinhVien a[], int n) {
	for (int i = 0; i < n; ++i) {
		cout << a[i].id;
		if(a[i].stt < 10) cout << "00" << a[i].stt << " ";
		else cout << "0" << a[i].stt << " ";
		for (int j = 0; j < a[i].ten.size(); ++j)
			cout << a[i].ten[j] << " ";
		cout << a[i].Class << " " << a[i].date << " " << fixed << setprecision(2) << a[i].gpa << endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
