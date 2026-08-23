class Solution {
    private:
    bool ispossible(vector<int>&candies,int mid,long long k){
        long long child=0;
        for(int i=0;i<candies.size();i++){
            child+=(candies[i]/mid);

            
            if(child>=k){return true;}
        }
    return false;
    } 
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int s=1;
        int ans=0;
        int e=*max_element(candies.begin(),candies.end());
        while(s<=e){
            int mid=s+(e-s)/2;
            if(ispossible(candies,mid,k)){
                ans=mid;
                s=mid+1;
            }
            else{e=mid-1;}
        }
        return ans;
    }
};