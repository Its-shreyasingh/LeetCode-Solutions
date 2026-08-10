class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr_count=0;
        int maxcount=0;
        int n=nums.size();
        for(int j=0;j<n;j++)
        {
            if(nums[j]==1)
            {
                curr_count++;
            }
            else{
                maxcount=max(maxcount,curr_count);
                curr_count=0;
            }
        }
        return max(maxcount,curr_count);
    }
};