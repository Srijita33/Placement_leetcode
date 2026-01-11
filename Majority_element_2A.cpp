/* majority element 2
Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

 

Example 1:

Input: nums = [3,2,3]
Output: [3]
Example 2:

Input: nums = [1]
Output: [1]
Example 3:

Input: nums = [1,2]
Output: [1,2]
 

Constraints:

1 <= nums.length <= 5 * 104
-109 <= nums[i] <= 109
 

Follow up: Could you solve the problem in linear time and in O(1) space?*/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int el1=0,el2=0;
        int n=nums.size();
        int cnt1=0,cnt2=0;
        for (auto num:nums){
            if(cnt1>0 && num==el1){
                cnt1++;
            }else if(cnt2>0 && num==el2){
                cnt2++;
            }else if(cnt1==0){
                el1=num;
                cnt1=1;
            }else if(cnt2==0){
                el2=num;
                cnt2++;
            }else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0,cnt2=0;
        for(auto num:nums){
            if(num==el1)cnt1++;
            else if(num==el2)cnt2++;
        }
        vector<int> majorityEle;
        if(cnt1>n/3)
            majorityEle.push_back(el1);
        if(cnt2>n/3)
            majorityEle.push_back(el2);
        return majorityEle;

    }
};
