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

void Input() {
    cin >> a;
}

void Solve() {
    int temp = 1;
    int s = a.size();
    stack <int> dp;
    vector <int> ans;
    for (int i = 0; i < s; ++i) {
        if(a[i] == 'D') {
            if(i == 0 || a[i-1] == 'I')
                dp.push(temp++);
            dp.push(temp++);
        }
        else {
            while(!dp.empty()) {
                ans.push_back(dp.top());
                dp.pop();
            }
            if(i == 0)
                ans.push_back(temp++);
            if(i == s-1 || a[i+1] != 'D')
                ans.push_back(temp++);
        }
    }
    while(!dp.empty()) {
        ans.push_back(dp.top());
        dp.pop();
    }
    for (int i = 0; i <= s; ++i)
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
