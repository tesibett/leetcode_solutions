class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum=0;
        int i=0;
        int x;
        while(i<nums.size()){
            int x=i +1;
        
        while (x<nums.size()){
            sum=nums[x]+ nums[i];

            if (sum==target){
                return{x,i};
            }
            x++;
        }
        i++;
        }
        return{};
    }
};