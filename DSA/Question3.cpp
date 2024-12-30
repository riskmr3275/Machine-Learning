class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int n=nums.size();
        int i=0;
        int j=0;
        long int tempSum=0;
        int ans=INT_MAX;
        while(j<n&&i<n)
        {
            tempSum+=nums[j];
            if(tempSum<target)
            {
                j++;
            }
            if(tempSum>=target)
            {
                ans=min(ans,j-i+1);
                tempSum=tempSum-nums[i]-nums[j];
                i++;
            }  
        }   
        return ans==INT_MAX? 0:ans; 
    }
};