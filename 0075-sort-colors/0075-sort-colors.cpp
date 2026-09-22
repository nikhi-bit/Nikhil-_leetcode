class Solution {
public:
    void sortColors(vector<int>& nums) {
       int l=0;
       int mid=0;
       int h=nums.size()-1;
       while(mid<=h){
        if(nums[mid]==2){
            swap(nums[mid],nums[h]);
            h--;
        }
        else if(nums[mid]==0){
            swap(nums[mid],nums[l]);
            l++;
            mid++;
        }
        else{mid++;}
       }
    }
};