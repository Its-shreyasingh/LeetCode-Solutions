class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto lb=lower_bound(nums.begin(),nums.end(),target);
        auto ub=upper_bound(nums.begin(),nums.end(),target);
            if(lb==nums.end() || *lb!=target)
            {
                return {-1,-1};
                
            }
            int lb_idx = lb-nums.begin();
            int ub_idx = (ub-nums.begin())-1;
        return {lb_idx,ub_idx};
    }
};