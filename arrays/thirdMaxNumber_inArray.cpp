class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long max=LLONG_MIN,secMax=LLONG_MIN, thirdMax=LLONG_MIN;
        for(int i=0;i<nums.size();i++)
            {
                if(nums[i]>max)
                {
                    thirdMax=secMax;
                    secMax=max;
                    max=nums[i];
                }
                else if(nums[i]>secMax && nums[i]!=max)
                {
                    thirdMax=secMax;
                    secMax=nums[i];
                }
                else if(nums[i]>thirdMax && nums[i]!=max && nums[i]!=secMax)
                {
                    thirdMax=nums[i];
                }
            }
        if(thirdMax==LLONG_MIN)
        {
            return max;
        }
        else
        {
            return thirdMax;
        }
    }
};