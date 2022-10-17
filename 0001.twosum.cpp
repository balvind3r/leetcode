/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.*/


class Solution {
public:
 
vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> test;
        test=nums;
        sort(test.begin(), test.end());
        int length=test.size();
        int a=0;
        int b=length-1;
        vector<int> sol;
        vector <int> test_sol;
        
        while(a>=0){
            int sum=test[a]+test[b];
            if (sum == target){
                sol.push_back(a);
                sol.push_back(b);
                break;
            }else if (sum > target){
                b--;
            }else if (sum < target){
                a++;
            }
        }

        for(int i=0;i<length;i++){
            if (test[sol[0]]==nums[i]){
                test_sol.push_back(i);
                a=i;
                break;
            }
        }
        
        for(int i=0;i<length;i++){
            if (test[sol[1]]==nums[i] && i!=a){
                test_sol.push_back(i);
                break;
            }
        }
        
        return test_sol;
    }
};