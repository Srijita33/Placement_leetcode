/* Longest_Palindromic_substring
Given a string s, return the longest palindromic substring in s.

 

Example 1:

Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.
Example 2:

Input: s = "cbbd"
Output: "bb"
 

Constraints:

1 <= s.length <= 1000
s consist of only digits and English letters.
 
*/

class Solution {
public:
    string longestPalindrome(string s) {
        int l,r;
        int start=0;
        int maxlen=1;
        for(int i=1;i<s.size();i++){
            l=i-1;
            r=i;
            while(l>=0 && r<s.size() && s[l]==s[r]){
                if(r-l+1>maxlen){
                    maxlen=r-l+1;
                    start=l;
                }
                l-=1;
                r+=1;
            }
            //odd length case
            l=i-1;
            r=i+1;
            while(l>=0 && r<=s.size() && s[l]==s[r]){
                if(r-l+1>maxlen){
                    maxlen=r-l+1;
                    start=l;
                }
                l-=1;
                r+=1;
            }

        }
        return s.substr(start,maxlen);
    }
};
