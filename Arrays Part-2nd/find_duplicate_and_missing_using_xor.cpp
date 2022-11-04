
#include<bits/stdc++.h>
using namespace std;
pair<int, int> findMissingAndDuplicate(vector<int> const &arr)
{
    int n = arr.size();
 
    // take XOR of all array elements from index 0 to `n-1`
    // all numbers in range 1 to `n`
    int result = n;
    for (int i = 0; i < n; i++) {
        result = result ^ arr[i] ^ i;
    }
 
    // `x` and `y` stores the duplicate element and missing number
    int x = 0, y = 0;
 
    // `result` stores `x ^ y`
 
    // find the position of the rightmost set bit in result
    int k = log2(result & -result);
 
    // split the array into two subarrays
    for (int val: arr)
    {
        // array elements that have k'th bit 1
        if (val & (1 << k)) {
            x = x ^ val;
        }
        // array elements that have k'th bit 0
        else {
            y = y ^ val;
        }
    }
 
    // split range [1, n] into two subranges
    for (int i = 1; i <= n; i++)
    {
        // number `i` has k'th bit 1
        if (i & (1 << k)) {
            x = x ^ i;
        }
 
        // number `i` has k'th bit 0
        else {
            y = y ^ i;
        }
    }
 
    // linear search for the missing element
    if (find(arr.begin(), arr.end(), x) == arr.end()) {
        return make_pair(y, x);
    }
 
    return make_pair(x, y);
}
 
int main()
{
    int n,a;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
 
    pair<int, int> p = findMissingAndDuplicate(v);
 
    cout << "{"<< p.first << "," << p.second<<"}";
 
    return 0;
}

//TC = O(N);
//SC = O(1);