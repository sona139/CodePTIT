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

int n, l, r;
int a[nMax];

void Input() {
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    cin >> l >> r;    
}

void Solve() {
    int i = l;
    while(i < r && a[i] <= a[i+1])
        ++i;
    if(i == r)
        cout << "Yes";
    else {
        while(i <= r && i < n && a[i] >= a[i+1])
            ++i;
        if(i < r)
            cout << "No";
        else cout << "Yes";
    }
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
