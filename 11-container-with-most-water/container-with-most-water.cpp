class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;

        // for(int i=0; i<height.size(); i++){
        //     for(int j=i+1; j<height.size(); j++){
        //         int width =  j-i;
        //         int h = min(height[i], height[j]);
        //         int currentWater = width * h;

        //         maxWater = max(currentWater, maxWater);
        //     }
        // }
        // return maxWater;

        int i = 0, j = height.size() - 1;

        while(i < j){
            int width = j-i;
            int h = min(height[i], height[j]);
            int currentWater = width * h;
            maxWater = max(currentWater, maxWater);

            if(height[i] < height[j]){
                i++;
            }else{
                j--;
            }
        }
        return maxWater;
    }
};