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

int n;
vector <int> a;

void Input() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
}

void Solve() {
    int the_end = 0;
    for (int i = 0; i < n-1; ++i)
        if(a[i] && a[i] == a[i+1]) {
            a[i] *= 2;
            a.push_back(0);
            a.erase(a.begin() + i + 1,a.begin() + i + 2);
        }
        else if(a[i] == 0) {
            a.push_back(0);
            a.erase(a.begin() + i, a.begin() + i + 1);
            --i;
            ++the_end;
            if(the_end > n)
                break;
        }
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    faster();
    tester() {
        Input();
        Solve();
    }
    return 0;
}
