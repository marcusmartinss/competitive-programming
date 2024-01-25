class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        if(!s.size()) return 0;
        int cookie_index = s.size() - 1;
        int child_index = g.size() - 1, result = 0; 

        while(cookie_index >= 0 and child_index >= 0)
        {
            if(s[cookie_index] >= g[child_index])
            {
                result++;           
                cookie_index--;
                child_index--;
            }
            else child_index--;
        }

        return result;
    }
};