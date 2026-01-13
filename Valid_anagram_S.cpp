/* Valid Anagram
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

 

Example 1:

Input: s = "anagram", t = "nagaram"

Output: true

Example 2:

Input: s = "rat", t = "car"

Output: false

 

Constraints:

1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.
 

Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> ma;
        unordered_map<char,int> mb;
        //we use const so that the string that acts a char container doesnt change
        for(const auto &el:s){
            ma[el]++;
        }
        for(const auto &el:t ){
            mb[el]++;
        }
        return ma==mb;
    }
};
