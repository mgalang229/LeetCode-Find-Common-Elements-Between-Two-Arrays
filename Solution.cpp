class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1, s2;
        for (int& x : nums1)
            s1.insert(x);
        for (int& x : nums2)
            s2.insert(x);
        vector<int> ans(2, 0);
        for (int& x : nums1)
            ans[0] += (s2.find(x) != s2.end());
        for (int& x : nums2)
            ans[1] += (s1.find(x) != s1.end());
        return ans;
    }
};
