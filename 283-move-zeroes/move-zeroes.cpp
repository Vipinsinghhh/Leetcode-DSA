class Solution {
public:
    vector<int>moveZeroes(vector<int>& nums) {

        // int j = 0;

        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i] != 0) {
        //         swap(nums[i], nums[j]);
        //         j++;
        //     }
        // }

        vector<int>temp(nums.size(), 0);

        int tempIndex = 0;

        for(int i =0; i<nums.size(); i++){
            if(nums[i] != 0){
                temp[tempIndex] = nums[i];
                tempIndex++;
            }
        }

        for(int i =0; i<temp.size();i++){
            nums[i] = temp[i];
        }

        return nums;
    }
};