class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(char c:s)
        {
            freq[c]++;
        }
        vector<pair<int,char>> text;
        for(auto e:freq)
        {
            text.push_back({e.second,e.first});
        }
        sort(text.rbegin(),text.rend());
        string ans;
        for(auto e:text)
        {
            // while(e.first--)
            // {
            //     ans +=e.second;
            // }
            ans +=string(e.first,e.second);
        }
        return ans;
    }
};