class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        if(arr.size()<=2) return false;

        int i = 0;

        bool check = false;

        while(arr[i]<arr[i+1]){
            check = true;
            i++;
        }

        if(!check || i == arr.size()-1) return false;

        while(i<arr.size()-1){
            if(arr[i]<=arr[i+1]) return false;
            i++;
        }

        return true;
    }
};