class Solution {
public:
    int minimumCost(vector<int>& arr) {

        int first = INT_MAX;
        int index = -1;
        for(int i=1; i<arr.size(); i++){
            if(arr[i]<=first){
                first = arr[i];
                index = i;
            }

        }

        int second = INT_MAX;
        for(int i=1; i<arr.size(); i++){
            if(i!=index && second>=arr[i]) second = arr[i];
        }

        int sum = arr[0] + first + second;
        return sum;
    }
};