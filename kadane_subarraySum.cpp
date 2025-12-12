class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // kadanes algo
        //int ansStart=-1,ansEnd=-1,start=-1;
        int maxSum=INT_MIN,sum=0;
        for(int i=0;i<nums.size();i++){
            //if(sum==0)start=i;
            sum+=nums[i];
            if(sum>maxSum){
                maxSum=sum;
                //ansStart=start;
                //ansEnd=i;

            }
            if(sum<0){sum=0;} 
        }
        //for(int i=ansStart;i<ansEnd;i++) cout<<nums[i]<<" ";
        return maxSum;
    }
};
