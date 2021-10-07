class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        int ind=0;
        int indbef=0;
        int valu=0,valbef=0;
        vector <char> ch={'I','V','X','L','C','D','M'};
        vector <int> val={1,5,10,50,100,500,1000};
       
        if(s.length()==1){
            for(int j=0;j<ch.size();j++){
                        if(s[0]==ch[j]){
                            valu=val[j];

                        }
            }
            return valu;
        }
        
      for(int i=1;i<s.length();i++){
      for(int j=0;j<ch.size();j++){
                        if(s[i]==ch[j]){
                            valu=val[j];

                        }
                        if(s[i-1]==ch[j]){
                        valbef=val[j];
                        }
      }
      if(valu<=valbef){

                    sum+=valbef;


      }
      else if(valu>valbef){

       sum-= valbef;
      }

       if(i==s.length()-1){
      sum+=valu;
      }
      }
        return sum;
    }
};
