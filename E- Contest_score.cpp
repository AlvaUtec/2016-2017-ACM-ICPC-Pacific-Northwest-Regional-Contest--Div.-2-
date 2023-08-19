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
    ll n,k,ans=0,current_time=0,t;
    cin>>n>>k;
    set<ll> seti;
    rep(i,0,k){
        cin>>t;
        seti.insert(t);
    }
    rep(i,0,n-k){
        auto it = seti.begin();
        ans+=*it+current_time;
        current_time+=*it;
        seti.erase(it);
        cin>>t;
        seti.insert(t);
    }
    while(!seti.empty()){
        auto it = seti.begin();
        ans+=*it+current_time;
        current_time+=*it;
        seti.erase(it);
    }
    cout<<ans<<endl;
}

int main(){
    cpu();
    int t=1;
    //cin >> t;
    while(t--)
        solve();
    return 0;
}