class Solution {
    private:
    void solve(int n,vector<string>&v,string s,int open,int close){
        if(open==n && close==n){
            v.push_back(s);
            return;}
        if(close>open || open>n){
            return;
        }    
        solve(n,v,s+"(",open+1,close);
        solve(n,v,s+")",open,close+1);
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string>v;
        int open=0,close=0;
        string s="";
        solve(n,v,s,open,close);
        return v;
        
    }
};