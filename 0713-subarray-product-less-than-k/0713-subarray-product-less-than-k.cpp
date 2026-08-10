class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1)
        {
            return 0;
        }
        int currproduct=1;
        int count=0;
        int l=0;
        for(int r=0;r<nums.size();r++)
        {
            currproduct *= nums[r];
            while(currproduct>=k)
            {
                currproduct /=nums[l];
                l++;
            }
            count +=r-l+1;
        }
        return count;
    }
};