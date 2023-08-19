#include <bits/stdc++.h>
using namespace std;

#define cpu() ios::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rev(i,a,b) for(ll i=a;i>b;i--)
#define endl "\n"

const ll mod = 1e9+7;
const ll inf = INT64_MAX;
const ll ninf = INT64_MIN;
const int MAXN = 1e6;

void solve(){
    vector<int> a1(6),a2(6);
    rep(i,0,6) cin>>a1[i];
    rep(i,0,6) cin>>a2[i];
    int p_ganar=0,p_empatar=0;
    rep(i,0,6){
        rep(j,0,6){
            if (a1[i]>a2[j]) p_ganar++;
            else if (a1[i]==a2[j]) p_empatar++;
        }
    }
    double tot = p_ganar/(36.0-p_empatar);
    cout<<fixed<<setprecision(5)<<tot<<endl;
}

int main(){
    cpu();
    int t=1;
    //cin >> t;
    while(t--)
        solve();
    return 0;
}