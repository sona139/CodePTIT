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

string a, b;

void Input() {
    cin >> a >> b;
}

void Solve() {
    int sa = a.size(), sb = b.size();
    if(sa < sb || sa == sb && a < b) {
        swap(sa, sb);
        swap(a, b);
    }
    int ans[sa];
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    for (int i = sb; i < sa; ++i)
        b.push_back('0');
    for (int i = 0; i < sa; ++i) {
        ans[i] = a[i] - b[i];
        if(ans[i] < 0) {
            ans[i] += 10;
            a[i+1]--;
        }
    }
    for (int i = sa - 1; i >= 0; --i)
        cout << ans[i];    
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
