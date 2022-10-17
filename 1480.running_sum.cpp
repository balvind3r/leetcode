//Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
//Return the running sum of nums.

class Solution {
public:

    vector<int> runningSum(vector<int>& nums) {
        vector<int> sol;
        int size= nums.size();
        sol.push_back(nums[0]);
        for(int i=0;i<(size-1);i++){
            sol.push_back(sol[i]+nums[i+1]);
        }

        return sol;
    }
};