class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq=1,n=nums.size();
        
        sort(nums.begin(),nums.end());
        int ans=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1])
            {
                freq++;
            }
            else
            {
                ans=nums[i];
            }
            if(freq>n/2)
            {

                return ans;
            }
        }
        return ans;
    }
};