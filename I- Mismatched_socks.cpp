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
    ll n,maxi=0,sum=0,temp;
    cin>>n;
    rep(i,0,n){
        cin>>temp;
        sum+=temp;
        maxi = max(maxi,temp);
    }

    sum>=2*maxi ? cout<<sum/2<<endl : cout<<sum-maxi<<endl;
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