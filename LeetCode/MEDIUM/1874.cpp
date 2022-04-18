class Solution {
public:
    int minProductSum(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        long long s = 0;
        int l = 0, r = nums1.size()-1;
        while (l < r){
            s += nums1[l]*nums2[r];
            s += nums1[r--]*nums2[l++];
            
        }
        if (nums1.size()%2 == 1){
            s += nums1[nums1.size()/2]*nums2[nums1.size()/2];
        }
        return s;
    }
};
