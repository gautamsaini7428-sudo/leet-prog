class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;

        int maxcnt = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push('(');
                maxcnt = max(maxcnt, (int)st.size());
            } else if (s[i] == ')') {
                st.pop();
            }
        }
        return maxcnt;
    }
};