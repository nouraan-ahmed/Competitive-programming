class Solution {
public:
    bool checkZeroOnes(string s) {
    int max1=0,max0=0,count1=0,count0=0;
        bool flag=true;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){

                if(flag==false){
                    count1=0;
                }
                flag=true;
                count1++;
                if(max1<count1) max1=count1;
            }
            else if(s[i]=='0'){

                if(flag==true){
                    count0=0;
                }
                 flag=false;
                count0++;
                if(max0<count0) max0=count0;
            }
        }
    
        return max1>max0;
    }
};
