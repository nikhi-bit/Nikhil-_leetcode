class Solution {
    private:
    bool ispossible(vector<int>&nums,int mid,int k){
        int subarray=1;
        int sum=0;
        for(int i=0;i<nums.size();){
            if(sum+nums[i]<=mid){
                sum+=nums[i];
                i++;
            }
            else{
                subarray++;
                sum=0;
            }
            if(subarray>k){return false;}
        }
        
        return true;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int s=0;
        int total=0;
        
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
        }
        int e=total;
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(ispossible(nums,mid,k)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};