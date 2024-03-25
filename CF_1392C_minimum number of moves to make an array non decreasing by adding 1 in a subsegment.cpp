// minimum number of moves to make an array non decreasiing
// ans id sum of all max(a[i]-a[i+1], 0);
// for 5,4,2
// the need is 0,1,3
// when we add 1 n segment [2,3]
// it means we can add atmost +1 in ind 2 
// so all the next element will be +1
// think it in a number line
// then for a[i+1] we need a[i+1]-a[i+2]

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
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
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
#define lcm(a,b) (a*b)/__gcd(a,b)
using namespace std;
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

void solve() {
    int n;
    cin >> n;
    vl v(n);
    inv(v);
    ll ans = 0;
    for (int i = 0; i < n-1; i++)
    {
        if(v[i]>v[i+1])
			ans+=v[i]-v[i+1];
    }
    cout<<ans<<endl;
}
int main() {
    fastio;
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}