class Solution {
    private:
    void solve(int k,int target,vector<vector<int>>&ans,vector<int>temp,int i){
        //base case 1
        if(temp.size()==k){
            if(target==0){
                ans.push_back(temp);
                return;
            }
        }
        //base case 2
        if(i>9 || target<0){return;}
          
        if(i<=target){
            temp.push_back(i);
            solve(k,target-i,ans,temp,i+1);
            temp.pop_back();
        }

        solve(k,target,ans,temp,i+1);
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>temp;
       solve(k,n,ans,temp,1);
       return ans;

    }
};