#include<bits/stdc++.h>
#include<algorithm>
#include<stdio.h>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
         vector<int> res={nums[0]};
        for(int i=1;i<nums.size();i++)
        {
            res.push_back(res.back() + nums[i]);
        }
        return res;
    }
};


