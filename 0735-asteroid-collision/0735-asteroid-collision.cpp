class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroid) {
        stack<int> st;
        int n=asteroid.size();
        for(int i=0;i<n;i++)
        {
            if(asteroid[i]>0)
            {
                st.push(asteroid[i]);
            }
            else{
                while(!st.empty()&& st.top()>0 && st.top()<abs(asteroid[i]))
                {
                    st.pop();
                }
                if(!st.empty() && st.top() == abs(asteroid[i]))
                {
                    st.pop();
                }else if(st.empty() ||st.top()<0)
                {
                    st.push(asteroid[i]);
                }
                
            }
        }
        vector<int> ans(st.size());
        for(int i=st.size()-1;i>=0;i--)
        {
            ans[i]=st.top();
            st.pop();
        }
        return ans;
    }
};