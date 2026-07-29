class Solution {
public:
    void sortColors(vector<int>& nums) {
    int i = 0;
    int j = nums.size() - 1;

    // Move all 0's to the left
    while (i < j)
    {
        if (nums[i] == 0)
        {
            i++;
        }
        else if (nums[j] != 0)
        {
            j--;
        }
        else
        {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }

    // Move all 2's to the right
    i = 0;
    j = nums.size() - 1;

    while (i < j)
    {
        if (nums[j] == 2)
        {
            j--;
        }
        else if (nums[i] != 2)
        {
            i++;
        }
        else
        {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
}

        
    
};