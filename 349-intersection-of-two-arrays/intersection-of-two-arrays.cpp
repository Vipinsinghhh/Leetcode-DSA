// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         vector<int>ans;
//         for(int i=0;i<nums1.size();i++){
//             for(int j=0;j<nums2.size();j++){
//                 if(nums1[i]==nums2[j]){
//                     bool exist = false;
//                     for(int k=0;k<ans.size();k++){
//                         if(ans[k]==nums1[i]){
//                             exist = true;
//                             break;
//                         }
//                     }
//                     if(!exist){
//                     ans.push_back(nums1[i]);
//                     }
//                     break;
//                 }
                
//             }
//         }
//         return ans;
//     }
// };

//optimal

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> ans;
        int i = 0, j = 0;

        while(i < nums1.size() && j < nums2.size()) {

            if(nums1[i] == nums2[j]) {
                // avoid duplicates
                if(ans.empty() || ans.back() != nums1[i]) {
                    ans.push_back(nums1[i]);
                }
                i++;
                j++;
            }
            else if(nums1[i] < nums2[j]) {
                i++;
            }
            else {
                j++;
            }
        }
        return ans;
    }
};
