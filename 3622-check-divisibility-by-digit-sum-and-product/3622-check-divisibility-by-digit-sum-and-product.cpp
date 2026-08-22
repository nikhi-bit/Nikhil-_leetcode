class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,f=1;
        int c=n;
        while(n>0){
            int a=n%10;
            sum+=a;
            f=f*a;
            n=n/10;
        }
        if(c%(f+sum)==0) return true;
        else return false;
    }
};