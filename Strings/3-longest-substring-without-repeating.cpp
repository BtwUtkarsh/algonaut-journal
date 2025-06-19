class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()) return 0; 
        int n = s.size();
        int maxlen = 0;
        for (int left = 0; left < n; left++) {
            unordered_set<char> set;
            int right;
            for (right = left; right < n; right++) {
                if (set.find(s[right]) != set.end()) {
                    break;
                }
                set.insert(s[right]);
            }
            maxlen = max(maxlen, right - left);
        }

        return maxlen; // Ensure the correct length is returned
    }
};