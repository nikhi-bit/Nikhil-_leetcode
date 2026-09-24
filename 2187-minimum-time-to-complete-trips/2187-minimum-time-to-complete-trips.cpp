class Solution {
    bool ispossible(vector<int>&time,long long mid,int totalTrips){
      long long tt=0;
      for(int i=0;i<time.size();i++){
        tt+=(mid/time[i]);
        if(tt>=totalTrips){return true;}
      }
      return false;
    }
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long s=1;
        long long e = 1LL * (*max_element(time.begin(), time.end())) * totalTrips;
        long long timetrip=e;
        while(s<=e){
            long long mid=s+(e-s)/2;
            if(ispossible(time,mid,totalTrips)){
                timetrip=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
         return timetrip;
    }
};