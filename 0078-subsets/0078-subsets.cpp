class Solution {
    private:
    void solve(vector<int>&nums,vector<vector<int>>&v,vector<int>temp,int i=0){
        if(i==nums.size()){
            v.push_back(temp);
            return ;
        }
        solve(nums,v,temp,i+1);
        temp.push_back(nums[i]);
        solve(nums,v,temp,i+1);

    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>temp;
          solve(nums,v,temp);
          return v;
    }
};