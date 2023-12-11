class Solution {
public:
    int maximumCount(vector<int>& nums)
    {
        int posIntCount = 0;
        int negIntCount = 0;

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] > 0)
                posIntCount++;
            if(nums[i]< 0)
                negIntCount++;
        }
        return max(posIntCount, negIntCount);
    }
};