class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> ms,mt;
        if(s.length()!=t.length())
        {
            return false;
        }
        for(int i=0;i<s.length();i++)
        {
            if((ms.find(s[i])!=ms.end()))
            {
                if(ms[s[i]] !=t[i])
                {
                    return false;
                }
            }
            else if((mt.find(t[i])!=mt.end()))
            {
                if(mt[t[i]] !=s[i])
                {
                    return false;
                }
            }
            else{
                ms[s[i]]=t[i];
                mt[t[i]]=s[i];
            }
        }
        return true;
    }
};