class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>indices;
        int size = numbers.size();
        int start = 0;
        int end = size - 1;

        while(start<end){
            int pairsum = numbers[start] + numbers[end];

            if(pairsum > target){
                end--;
            }else if(pairsum < target){
                start++;
            }else if(pairsum == target){
                indices.push_back(start+1);
                indices.push_back(end+1);
                return indices;
            }
        }
        return {};
    }
};
