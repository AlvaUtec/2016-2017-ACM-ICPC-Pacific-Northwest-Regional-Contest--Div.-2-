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

int n,m,ans=0;
char a[51][51];
bool vis[51][51];

void dfs(int i, int j){
    if (i<0 || j<0 || i>=n || j>=m || vis[i][j] || a[i][j] == 'W') return;
    vis[i][j] = true;
    dfs(i+1,j);
    dfs(i-1,j);
    dfs(i,j+1);
    dfs(i,j-1);
}

void solve(){
    cin>>n>>m;
    rep(i,0,n){
        string s;
        cin>>s;
        rep(j,0,m)
            a[i][j] = s[j];       
    }

    rep(i,0,n)
        rep(j,0,m)
            if(!vis[i][j] && a[i][j]=='L'){
                ans++;
                dfs(i,j);
            }
        
    
    cout<<ans<<endl;
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