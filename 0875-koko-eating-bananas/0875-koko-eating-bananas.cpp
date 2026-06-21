class Solution {
    bool helper(vector<int>& piles,int mid,int h)
    {
        int time=0;
        for(int i :piles)
        {
            time +=i/mid;
            if(i%mid)
            {
                time++;
            }
            if(time>h)
            {
                return false;
            }
        }
        return true;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while(low<high)
        {
            int mid=(low+high)/2;
            if(helper(piles,mid,h))
            {
                high=mid;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};