class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[i] == nums[j]){
                    ans +=1;
                }
            }
        }
        return ans;
    }
};