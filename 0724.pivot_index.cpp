class Solution {
    public:
        int pivotIndex(vector<int>& nums){
            
            int size=nums.size();
            int rsum=0, lsum=0;
            for(int i=1; i<size; i++){
                rsum+=nums[i];
            }
            if (rsum==0){
                return 0;
            }
            lsum += nums[0];
            for(int i=1;i<size;i++) {
                rsum-=nums[i];
                if (rsum==lsum){
                    return i;
                }
                lsum += nums[i];
            }
            
            
            
            
            
            
            
            /*int rightSum = 0, leftSum=0;
            vector<int> sol;
            int size= nums.size();
            for(int i=1;size-1;i++){
                rightSum += nums[i];
            }
            if (rightSum == leftSum){
                return 0;
            }
            
            for(int i=1;i<size-1;i++){
                rightSum = 0;
                leftSum = 0;
                for(int j=0;j<i;j++){
                    leftSum += nums[j];
                }
                for(int k=i+1;k<size;k++){
                    rightSum += nums[k];
                }
                if (rightSum == leftSum){
                    return i;
                }
            }

            leftSum = 0;
            for(int i=0;i<size-1;i++){
                leftSum += nums[i];
            }
            if(leftSum == 0){
                return size-1;
            }
            return -1;*/
        }
};