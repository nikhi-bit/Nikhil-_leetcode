class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n,0);  
        vector<int>v1(n,0);
        int sum1=0;
        int sum2=0;
        for(int i=0;i<nums.size();i++){
           v[i]=sum1;
            sum1+=nums[i];
          
        }
          for(int i=nums.size()-1;i>=0;i--){
             v1[i]=sum2;
            sum2+=nums[i];
           
        }
        for(int i=0;i<nums.size();i++){
           int sub=abs(v[i]-v1[i]);
            v[i]=sub;
        }
        return v;
    }
};