class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        int s1 = nums1.size();
        int s2 = nums2.size();
        int s = max(s1, s2);
        vector<int> a;
        for(int i=0, j=0; (i<s1) & (j<s2) ;)
        {
            int iv = nums1[i];
            int jv = nums2[j];
            if(iv == jv) { a.push_back(iv);i++; j++;}
            else if(iv < jv) { i++;}
            else {j++;}
        }
        
        return a;
    }
};