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

class KhachHang {
	private:
		string name, sex, date, accommodation;

	public:
		string id;
		friend istream &operator >> (istream &in, &KHanhHang a);
		friend ostream &operator << (ostream &out, KhachHang a);
};

class MatHang {
	private:
		string name, dv;
		int in, out;
	
	public:
		string id;
		friend istream &operator >> (istream &in, &MatHang a);
		friend ostream &operator << (ostream &out, MatHang a);
};

class HoaDon {
	private:
		string id;
		int sl;

	public:
		string mkh, mmh;
		class KhachHang, MatHang;
		friend &operator istream >> (istream &in, HoaDon &a);
		friend &operator ostream << (ostream &out, HoaDon a);
}

int cntKh = 1;
int cntMh = 1;
int cntHd = 1;

istream &operator >> (istream &in, KhachHang &a) {
	string id = to_string(cntKh++);
	if(id.size() > 1) a.id = "KH0" + id;
	else a.id = "KH00" + id;
	scanf("\n");
	getline(in, a.name);
	cin >> a.sex >> a.date;
	scanf("\n");
	getline(in, a.accomodation);
	return in;
}

istream &operator >> (istream &in, MatHang &a) {
	string id = to_string(cntMh++);
	if(id.size() > 2) a.id = "MH0" + id;
	else a.id = "MH00" + id;
	scanf("\n");
	getline(in, a.name);
	in >> a.dv >> a.in >> a.out;
	return in;
}

istream &operator >> (istream &in, HoaDon &a) {
	string id = to_string(cntHd++);
	if(id.size() > 1) a.id = "HD0" + id;
	else a.id = "HD00" + id;
	in >> a.mkd >> a.mmh >> a.sl;
	return in;
}

ostream &operator << (ostream &out, HoaDon a) {
	out << 
}

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}

void Input() {

}

void Solve() {

}

int main() {
	faster();
	Input();
	Solve();
	return 0;
}
