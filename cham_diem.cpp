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

int ma;
string ans_101, ans_102, ans;

void set_ans() {
    ans_101 = "A B B A D C C A B D C C A B D";
    ans_102 = "A C C A B C D D B B C D D B B";
}

void Input() {
    cin >> ma;
    cin.ignore();
    getline(cin, ans);
}

void Solve() {
    int correct = 0;
    if(ma == 101) {
        for (int j = 0; j < 30; j += 2)
            if(ans[j] == ans_101[j])
                ++correct;
    }
    else
        for (int j = 0; j < 30; j += 2)
            if(ans[j] == ans_102[j])
                ++correct;
    cout << setprecision(2) << fixed << 1.0*correct*2.0/3 << endl;    
}

int main() {
    faster();
    set_ans();
    tester() {
        Input();
        Solve();
    }
    return 0;
}
