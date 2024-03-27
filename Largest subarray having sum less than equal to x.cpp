#include <bits/stdc++.h>
using namespace std;


int sum(vector<int>& s, int k) {
    int subarray_start = 0;
    int subarray_end = 0;
    int subarray_sum = 0;
    int max_len = -1;

    for (int i : s) {
        subarray_sum += i;
        subarray_end++;
        while (subarray_sum > k) {
            subarray_sum -= s[subarray_start];
            subarray_start++;
        }
        max_len = max(max_len, subarray_end - subarray_start);
    }

    return max_len;
}


int32_t main() {
        
    return 0;
}
