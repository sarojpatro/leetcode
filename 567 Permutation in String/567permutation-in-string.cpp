class Solution {
public:
    bool isEmpty(const map<char, int>& m) {
        for (const auto& a : m) {
            if (a.second != 0) return false;
        }
        return true;
    }

    void print(map<char, int> m)
    {
        for(auto& a: m)
        {
            cout << a.first << " " << a.second << endl;
        }
    }

    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        map<char, int> m1;
        for (auto& c : s1) m1[c]++;
        //cout << "m1 :::" << endl;
        //print(m1);

        for (int i = 0; i < s1.size(); i++) m1[s2[i]]--;
        //cout << "m1 :::" << endl;
        //print(m1);

        if (isEmpty(m1)) return true;

        //cout << "before for loop" << endl;
        //print(m1);
        for (int i = s1.size(); i < s2.size(); i++) {
            cout << "inside for loop" << endl;
            //print(m1);
            m1[s2[i]]--;
            m1[s2[i - s1.size()]]++;
            //cout << "inside for loop end" << endl;
            //print(m1);

            if (isEmpty(m1)) return true;
        }

        return false;
    }
};

