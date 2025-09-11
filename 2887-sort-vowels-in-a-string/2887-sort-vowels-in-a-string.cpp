class Solution {
public:
    string sortVowels(string s) {
        
        vector<char>arr;

        for(int i=0; i<s.length(); i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'
                ||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||
                s[i]=='O'||s[i]=='U'){
                arr.push_back(s[i]);
            }
        }

        sort(arr.begin(), arr.end());

        int j = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'
            ||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||
            s[i]=='O'||s[i]=='U'){
                s[i] = arr[j];
                j++;
            }
        }

        return s;
    }
};