// Leetcode 28: Find the Index of the First Occurrence in a String
// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int hLen = haystack.size();
        int nLen = needle.size();
        if (nLen == 0) return 0;
        if (nLen > hLen) return -1;
        for (int i = 0; i <= hLen - nLen; i++) {
            if (haystack.substr(i, nLen) == needle)
                return i;
        }
        return -1;
    }
};
