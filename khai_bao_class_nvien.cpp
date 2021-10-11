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
#define a() a;
#define mp(x, y) make_pair(x, y)
const int Mod = 1e9 + 7;
const int nMax = 1e5 + 1;

class NhanVien {
	private:
		string id = "00001", name, sex, date, accommodation, fax, time;
	
	public:
		NhanVien() {};
		friend istream &operator >> (istream &input, NhanVien &a);
		friend ostream &operator << (ostream &output, NhanVien a);
};

istream &operator >> (istream &input, NhanVien &a) {
	getline(input, a.name);
	input >> a.sex >> a.date;
	scanf("\n");
	getline(input, a.accommodation);
	input >> a.fax >> a.time;
	return input;
}

ostream &operator << (ostream &output, NhanVien a) {
	output << a.id << " " << a.name << " " << a.sex << " " << a.date << " " << a.accommodation << " " << a.fax << " " << a.time;
	return output;
}

int main(){
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}
