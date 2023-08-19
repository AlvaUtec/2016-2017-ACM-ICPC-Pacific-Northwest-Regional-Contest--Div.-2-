#include <bits/stdc++.h>
using namespace std;
#define cpu() ios::sync_with_stdio(false); cin.tie(nullptr)
 
typedef long long ll;
#define f first
#define s second
 
const ll MAX = 2*1e5+10;
const ll MIN = -1e6 + 10;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
 
// ------------------------------- //

int dp[MAX];
void solve(){
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); ++i){
        for (int j = 0; j < i; ++j){
            if(s[j] < s[i]) dp[i] = max(dp[i], dp[j]+1);
        }
    }

    int ans = dp[0];
    for (int i = 1; i < s.size(); ++i){
        ans = max(ans, dp[i]);
    }

    cout << 26 - ans -1 << endl;

}


int main(){
    cpu();
    ll t =1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;  
}