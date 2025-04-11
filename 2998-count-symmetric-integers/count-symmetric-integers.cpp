class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        
        int count = 0;

        for(int i=low; i<=high; i++){

            string st = to_string(i);

            int n = st.length();
            
            if(n%2==0){
                int s = 0;
                int len = n/2;
                int e = len;
                
                int leftsum = 0;
                int rightsum = 0;
                while(s<len && e<n){
                    leftsum += st[s];
                    rightsum += st[e];
                    s++;
                    e++;
                }
                if(leftsum==rightsum) count++;
            }
        }

        return count;
    }
};