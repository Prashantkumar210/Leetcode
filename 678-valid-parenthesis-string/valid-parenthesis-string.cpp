class Solution {
public:
    bool checkValidString(string s) {
      stack<char>st;
     
      int close=0;
      for(int i=0;i<s.length();i++)
      {
        
        if(s[i]=='('||s[i]=='*')
        {
          close++;
        }
        else
        {
            if(close==0)return false;
           close--;
        }
      }

      int open=0;
      for(int i=s.length()-1;i>=0;i--)
      {
        
        if(s[i]==')'||s[i]=='*')
        {
         open++;
        }
        else
        {
            if(open==0)return false;
            open--;

        }
      }
      return true;
    }
};