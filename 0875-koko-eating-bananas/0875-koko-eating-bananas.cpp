class Solution {
    private:
    bool ispossible(vector<int>&piles,int mid,int h){
        int hr=0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]<=mid){
                hr++;
            }
            else if(piles[i]%mid==0){
                int s=piles[i]/mid;
                hr=hr+s;
            }
            else if(piles[i]!=0){
                 hr+=(piles[i]/mid)+1;
            }
            if(hr>h){return false;}
        }
        return true;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1;
     int maxe=INT_MIN;
     for(int i=0;i<piles.size();i++){
        maxe=max(maxe,piles[i]);
     }
     int e=maxe;
     int speed=-1;
     while(s<=e){
        int mid=s+(e-s)/2;
        if(ispossible(piles,mid,h)){
            speed=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    
     }
     return speed;
    
    }
}; 