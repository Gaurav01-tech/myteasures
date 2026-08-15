class Solution {
public:
    string largestOddNumber(string num) {
     string res;
     int pos=-1;
     for(int i=0;i<num.length();i++){
        if(num[i]%2!=0){
            pos=i;
        }
     }
     cout<<num.substr(0,1)<<endl;
      if(num[num.size()-1]%2!=0){
        return num;
      }
      else{
            res+=num.substr(0,pos+1);
      }
      
     return res;
    }
};