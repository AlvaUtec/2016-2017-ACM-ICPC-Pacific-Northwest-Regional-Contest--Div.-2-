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
    int n,m;
    cin>>n>>m;
    char a[n][m];
    int o[m];
    rep(i,0,n){
        string s;
        cin>>s;
        rep(j,0,m){
            if (s[j]=='o') o[j]++;
            a[i][j]=s[j];
        }
    }

    rep(j,0,m){
        int apples=0,lastblock=-1;
        rep(i,0,n){
            if (a[i][j]=='o') apples++;
            if (a[i][j]=='#'){
                
                for(int k=i-1;k>=i-apples;k--)
                    a[k][j]='o';
                
                for(int k=i-apples-1;k>lastblock;k--)
                    a[k][j]='.';

                lastblock=i;
                apples=0;
            }
        }
        if (apples>0){
            for(int k=n-1;k>=n-apples;k--)
                a[k][j]='o';
            
            for(int k=n-apples-1;k>lastblock;k--)
                a[k][j]='.';
        }
    }

    rep(i,0,n){
        rep(j,0,m)
            cout<<a[i][j];
        
        cout<<endl;
    }

    cout<<endl;
}

int main(){
    cpu();
    int t=1;
    //cin >> t;
    while(t--)
        solve();
    return 0;
}