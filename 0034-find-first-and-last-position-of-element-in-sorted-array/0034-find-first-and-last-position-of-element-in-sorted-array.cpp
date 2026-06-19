class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto getlb=lower_bound(nums.begin(),nums.end(),target);
        auto getub=upper_bound(nums.begin(),nums.end(),target);
            if(getlb==nums.end() || *getlb!=target)
            {
                return {-1,-1};
                
            }
            int lb = getlb-nums.begin();
            int ub = (getub-nums.begin())-1;
        return {lb,ub};
    }
};