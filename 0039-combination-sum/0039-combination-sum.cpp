class Solution {
    void solve(vector<int>&candidates,vector<vector<int>>&ans,int target, vector<int>temp,int i=0){
        //base case 1
         if(target==0){
            ans.push_back(temp);
            return;
         }        
        // base case 2
        if(i==candidates.size()){
            return;
        }  

        //recursive case
        if(candidates[i]<=target){
            temp.push_back(candidates[i]);
            solve(candidates,ans,target-candidates[i],temp,i);
            temp.pop_back();//back tracking 
        }

        //if current element is greater than target
           solve(candidates,ans,target,temp,i+1);
   

    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<vector<int>>ans;
       vector<int>temp;
        solve(candidates,ans,target,temp,0);
        return ans;
        
    }
};