class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> v;
        for(auto& s:timePoints)
        {
            string s1 = s.substr(0,2);
            string s2 = s.substr(3,2);

            int d = atoi(s1.c_str())*60 + atoi(s2.c_str());
            v.push_back(d-24*60);
            v.push_back(d);
        }

        sort(v.begin(), v.end());

        int diff = INT_MAX;;
        int s = v.size();
        for(int i=1; i<s; i++)
        {
            int d = v[i]-v[i-1];
            diff=min(d, diff);
        }

        return diff;
    }
};