class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int idx=-1;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int sum=0;
            while(a>0){
                sum+=(a%10);
                a=a/10;
            }
            if(sum==i){
                idx=i;
                break;
            }
        }
        return idx;
    }
};