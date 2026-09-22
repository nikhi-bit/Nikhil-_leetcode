class Solution {
public:
    void sortColors(vector<int>& nums) {
        int one=0,two=0,zero=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) zero++;
            if(nums[i]==1) one++;
            if(nums[i]==2) two++;
        }
        for(int i=0;i<nums.size();i++){
            if(i<zero) nums[i]=0;
            else if(i>=zero && i<one+zero) nums[i]=1;
            else if(i>=one && i<two+one+zero) nums[i]=2;
        }

    }
};