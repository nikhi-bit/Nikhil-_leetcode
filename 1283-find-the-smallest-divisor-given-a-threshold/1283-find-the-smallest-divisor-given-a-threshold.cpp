class Solution {
    private:
    bool ispossible(vector<int>&nums,int mid,int threshold ){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%mid==0){
                sum=sum+(nums[i]/mid);
            }
            else if(nums[i]%mid==nums[i]){
                sum+=1;
            }
            else{
            sum+=((nums[i]/mid)+1);}
            
            if(sum>threshold){return false;}
        }
        return true;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int ans=-1,s=1;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
        }
        int e=maxi;
        
          while(s<=e){
            int mid=s+(e-s)/2;
            if(ispossible(nums,mid,threshold)){
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