#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define sc ;
#define TC ll tc sc cin >> tc sc while(tc--)
#define forto(var,up) for(ll(var)=0;(var)<(up);(var)++)
#define all(arr) (arr).begin(), (arr).end()
#define fast\
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int mp = 0;


        while (low <= high) 
        {
            mp = (high + low) / 2;
            if (nums[mp] < target)
            {
                low = mp + 1;
            }
            else if (nums[mp] > target)
            {
                high = mp - 1;
            }
            else
            {
                return mp;
            }
        }
        if (nums[mp] < target)
        {
            return mp + 1;
        }
        else
            return mp;
    }
};