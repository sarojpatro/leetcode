class Solution {
public:
    string addBinary(string a, string b) {
        int max_size = a.size() > b.size() ? a.size() : b.size();
        string c;

        if(a.size() > b.size())
        {
            b.insert(0, a.size() - b.size() , '0');
        }
        else if (b.size() > a.size())
        {
            a.insert(0, b.size() - a.size() , '0');
        }

        int carryover = 0;
        for (int i = max_size - 1 ; i >= 0 ; i--)
        {
            if (a[i] == b[i] && a[i] == '1')
            {
                carryover == 0 ? c.insert(0, "0") : c.insert(0, "1");
                carryover = 1;
            }
            else if (a[i] == b[i] && a[i] == '0')
            {
                carryover == 0 ? c.insert(0, "0") : c.insert(0, "1");
                carryover = 0;
            }
            else
            {
                carryover == 0 ? c.insert(0, "1") : c.insert(0, "0");
                carryover == 0 ? carryover = 0 : carryover = 1;               
            }
        }

        if(carryover == 1)
        {
            c.insert(0, "1");
        }
        cout << c << endl;

        return c;
    }
};