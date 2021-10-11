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

int cnt = 1;

class SinhVien {
	private:
		string name, Class, date;
		float gpa;
		int id;
	
	public:
		friend istream &operator >> (istream &in, SinhVien &a);
		friend ostream &operator << (ostream &out, SinhVien a);
};

istream &operator >> (istream &in, SinhVien &a) {
	scanf("\n");
	getline(in, a.name);
	in >> a.Class >> a.date >> a.gpa;
	if(a.date[1] == '/')
		a.date.insert(a.date.begin(), '0');
	if(a.date[4] == '/')
		a.date.insert(a.date.begin() + 3, '0');
	a.id = cnt++;
	return in;
}

ostream &operator << (ostream &out, SinhVien a) {
	if(a.id < 10)
		out << "B20DCCN00" << a.id;
	else out << "B20DCCN0" << a.id;
	out << " " << a.name << " " << a.Class << " " << a.date << " " << fixed << setprecision(2) << a.gpa << endl;
	return out;
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
