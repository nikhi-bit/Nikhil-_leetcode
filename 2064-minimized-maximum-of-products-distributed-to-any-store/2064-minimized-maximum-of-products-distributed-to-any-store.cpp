class Solution {
    private: 
    bool ispossible(vector<int>&quantities,int mid,int n){
        int shop=0;
         for(int i=0;i<quantities.size();i++){
         
            shop+=(quantities[i]+mid-1)/mid;
         if(shop>n){return false;}
    }
    return true;
    }
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        int s=1;
        int e=*max_element(quantities.begin(),quantities.end());
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(ispossible(quantities,mid,n)){
                ans=mid;
                e=mid-1;
            }
            else{s=mid+1;}
        }
        return ans;
    }
};