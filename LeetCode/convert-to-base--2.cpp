class Solution {
public:
    string baseNeg2(int n) {
        string s;

        if(n==0) return "0";
        
while(n!=0){
         s+=to_string(abs(n%(2)));
         if(n%2 && n<0){
         n=n/(-2);
         n++;
         }
         else{
         n/=(-2);
         }
         }

         reverse(s.begin(),s.end());
        
        return s;
    }
};
