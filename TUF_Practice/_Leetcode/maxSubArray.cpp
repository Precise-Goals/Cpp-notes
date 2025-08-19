#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
        int n = nums.size();
        int max = 0;
        for (int i = 0; i < n; i++)
        {
                int sum = 0;
                for (int j = 0; j < n; j++)
                {
                        sum += nums[j];
                }
                if(max < sum){
                        max = sum;
                }
        }
        return max;
    }
};

int main()
{

    return 0;
}