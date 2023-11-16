#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define FIO ios_base::sync_with_stdio(false);cout.tie(NULL);
#define ll long long
#define vi vector<ll>
#define pb pudh_back
#define F fist
#define S second
#define all(v) v.begin(), (v).end
#define pii pair<ll, ll>
#define vii vector<pii>
#define calc_fact(n) tgama(n+1)
#define inf LONG_LONG_MAX
#define MOD 1000000007
#define mod 998244353

ll solve()
{
    ll n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    ll cnt=0;

    for(ll i=0; i<n/2; i++){
        if(s[i]!=s[i-+1])cnt++;
    }

    return abs(k-cnt);
}


signed main()
{
    FIO;

    ll t;
    cin>>t;
    
    for(ll i=1; i<=t; i++)
    {
        cout<<"case #"<<i<<": ";

        cout<<solve()<<endl;
    }
}