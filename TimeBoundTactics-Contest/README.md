##  Problem: Partition String

LeetCode: [[2405. Optimal Partition of String](https://leetcode.com/problems/optimal-partition-of-string/)](https://leetcode.com/problems/partition-string/)  
Category: Greedy, HashSet  
Difficulty: Medium  
**Status: Solved  
Time Taken: 3 hrs  

---

###  Problem Description

Given a string `s`, partition the string into the fewest possible number of substrings such that each letter appears in **at most one substring**. Return the minimum number of substrings in such a partition.

Each substring should be a contiguous block of characters from the original string.

---

###  Approach

- Use a `unordered_set<char>` to track characters seen in the current segment.
- Iterate through the string:
  - If a character is already in the set, it means we need to break the segment here:
    - Increment the partition count.
    - Clear the set and start a new segment.
  - Else, insert the character into the set.
- At the end, add 1 to the count to include the last segment.

---

###  Code (C++)


class Solution {
public:
    vector<string> partitionString(string s) {
        unordered_set<string> seen;
        vector<string> result;
        string segment = "";

        for (int i = 0; i < s.size(); ++i) {
            segment += s[i];

            if (!seen.count(segment)) {
                result.push_back(segment); 
                seen.insert(segment);      
                segment = "";              
            }
        }

        return result;
    }
};

