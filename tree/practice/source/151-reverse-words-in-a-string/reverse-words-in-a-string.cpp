class Solution {
public:
    string reverseWords(string s) {
        string res;
        int pos;
        bool first=true;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==' '){
                pos=i+1;}
                else if(i==0){
                    pos=0;
                } 
                if(pos<s.length()&&s[pos]!=' '){
                    if(!first)
                        res+=' ';
                while(s[pos]!='\0'&&s[pos]!=' '){
                    
                    res+=s[pos];
                    pos++;
                }
                first=false;
                }
                
               
            }
       return res;
        }
};