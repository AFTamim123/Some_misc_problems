
// #given an array n. You have to make it zero by decreasing a subsegment by 1;
// if(a[i]>a[i+1]) then applying operation to a[i] will make a[i+1] zero too;
// supoose for [3,2,1]
// applying 3 operations in index 1 will make 2,3 zero too. So, ans is 3
// so we can say that for an element a[i]. It will get at most a[i+1] operation
// Thats why if(a[i]>a[i+1]) a[i+1] is already zero.because we applied a[i] operation before

// The conclusion is an index i will get already a[i-1] operations.


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
    cin>>n;
    vl v(n);
    inv(v);
    int ans = v[0];
    for (int i = 1; i < n; i++)
    {
        ans+=max(v[i]-v[i-1], 0LL);
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