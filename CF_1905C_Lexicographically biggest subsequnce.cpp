#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define vi vector<int>
#define vl vector<long long>
#define ll long long
#define F first
#define S second
#define pii pair<int,int>
#define inv(a) for(auto &it : a) cin >> it;
#define outv(a) for(auto &it : a) cout << it << " ";cout<<"\n"
#define outv1(a) for(auto &it : a) cout << it << " "<<"\n";cout<<"\n"
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define int long long 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define N 1000009


void solve() {
    int n; cin>>n;
    string s;
    cin>>s;

    // code for lexicographically biggest subsequence

    string ans = "";
    ans+=s[0];
    vector<int> v;
    v.pb(0);
    for (int i = 1; i < s.size(); i++)
    {
        while (!ans.empty() && ans.back()<s[i])
        {
            // for smallest if(ans.back()>s[i]) popback

            ans.pop_back();
            v.pop_back();
        }
        ans+=s[i];
        v.pb(i);
        
    }
    // end;

    int soman = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        if(ans[i]==ans.front()) soman++;
    }
    reverse(all(ans));
    int lo = 0;
    for (int i = 0; i < v.size(); i++)
    {
        s[v[i]]=ans[lo++];
    }
    
    int res = ans.size()-soman;
    if(!is_sorted(all(s)))
        cout<<-1<<endl;
    else cout<<ans.size()-soman<<endl; 
    
}

int32_t main() {
    fastio;
    int T=1;
    cin>>T;
    while (T--)
    {
        solve();
    }

    return 0;
}

// https://codeforces.com/contest/1905/problem/C