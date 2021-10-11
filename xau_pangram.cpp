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

string a;
int n;

void Input() {
    cin >> a >> n;
}

void Solve() {
    int dem[26] = {0};
    int s = a.size();
    for (int i = 0; i < s; ++i)
        dem[a[i] - 'a']++;
    int res = 0;
    for (int i = 0; i < 26; ++i)
        if(dem[i] == 0)
            ++res;
    if(res <= n && s >= 26)
        cout << 1;
    else cout << 0;
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
