// Longest subarray lenght such that sum is divisible by k'
// soln:
//     the maximum distance beetween two same reminder is the ans
// proof:
//     suppose an array 1 2 2 2 1 and k=3

// let the sum of index 1 to 1 is a
//                 index 2 to 4 is b
//                 index 1 to 4 is c
// so now      b%k==0
//         -> (c-a)%k==0
//         -> c%k-a%k=0
//         -> c%k == a%k
// so if any subarrays upper lenght is in c there must exist one 
// reminder beetween (1 to c-1) we call it a such that it is same as c


#include <bits/stdc++.h>
using namespace std;
#define int long long 

int32_t main() {


    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    int ans = -1;
    int csum = 0;
    map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        csum += v[i];
        int rem = csum%k;
        if(rem==0) {
            ans = max(ans, i+1);
        }
        else if(mp.find(rem)!=mp.end()) {
            ans = max(ans, i-mp[rem]);
        }
        else {
            mp[rem]=i;
        }
    }
    if(ans==-1) cout<<ans<<endl;
    else cout<<n-ans<<endl; 

    return 0;
}
