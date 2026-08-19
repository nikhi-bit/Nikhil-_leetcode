class Solution {
    private:
    bool ispossible(vector<int>position,int mid,int m){
       int mag=1;
       int  pos=position[0];
       for(int i=1;i<position.size();i++){
        if(position[i]-pos>=mid){
            mag++;
            pos=position[i];
        }
        if(mag==m){
            return true;
        }
       }
         return false;
    }
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int ans=-1;
        int s=1;
        int e=position[position.size()-1];
        while(s<=e){
            int mid=s+(e-s)/2;
            if(ispossible(position,mid,m)){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
};