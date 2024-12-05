class Solution {
public:
    bool canChange(string s, string t) {
        int i = 0, j=0;
        for(; i<s.size(), j<t.size();i++, j++)
        {
            while(s[i] == '_' && i<s.size()) i++;
            while(t[j] == '_' && j<t.size()) j++;

            //cout << "i= " << i << " s[i]= " << s[i] << " j= " << j << " t[j]= " << t[j] << endl;

            if(s[i] != t[j]) return false;
            if(s[i] == 'L' && i < j) return false;
            if(s[i] == 'R' && i > j) return false;
        }

        while(i<s.size()) { if (s[i] != '_') return false; i++;}
        while(j<t.size()) { if (t[j] != '_') return false; j++;}

        return true;
    }
};