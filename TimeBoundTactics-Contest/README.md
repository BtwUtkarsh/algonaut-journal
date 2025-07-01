##  Problem: Partition String

LeetCode: [2405. Optimal Partition of String](https://leetcode.com/problems/optimal-partition-of-string/)  
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

```cpp
class Solution {
public:
    int partitionString(string s) {
        unordered_set<char> seen;
        int count = 0;

        for (char ch : s) {
            if (seen.count(ch)) {
                count++;
                seen.clear();
            }
            seen.insert(ch);
        }

        return count + 1;
    }
};

