class Solution {
public:
    int findMax(int i, int j=0, int k=0)
    {
        return 0;
    }
    int maximumLength(string s) {
        map<char, vector<int>> m;
        
        char p = s[0];
        int c = 1;

        for(int i=1; i<s.size();i++)
        {
            if(p == s[i])
            {
                c++;
            }
            else
            {
                m[s[i-1]].push_back(c);
                c = 1;
                p = s[i];
            }

            if(i == s.size() - 1)
            {
                m[s[i]].push_back(c);
            }
        }

        int ml = -1;

        for(auto x:m)
        { 
            //cout << x.first << x.second[x.second.size()-1] << endl;
    
            sort(x.second.begin(), x.second.end());
            //if m[i] has > 3
            if(x.second.size() >= 3)
            {
                cout << "comes here" << endl;
                int s = x.second.size();
                int a = x.second[s-1];
                int b = x.second[s-2]; 
                int c = x.second[s-3];

                //cout << "a: " << a << "b: " << b << "c: "<< c<< endl;

                if(a == b && b == c)
                {
                    ml = max(ml, a);
                }
                else if(a >= b && b >=c)
                {
                    ml = max(ml, c);
                    if(a > b)
                    {
                        ml = max(ml, b);
                    }
                    if(a == b)
                    {
                        ml = max(ml, b-1);
                    }
                    if(a >= 3) 
                    {
                        ml = max(ml, a-2);
                    }
                }

            }
            else if(x.second.size() == 2)
            {
                //cout << "comes here" << x.second[0] << " " << x.second[1]<< endl;
                if(x.second[1] > x.second[0])
                {
                    ml = max(ml, x.second[0]);
                }
                if(x.second[1] == x.second[0])
                {
                    ml = max(ml, x.second[0] -1 );
                }
                if(x.second[1] >= 3) 
                {
                    //cout << "comes here" << x.second[0] << " " << x.second[1]<< endl;
                    ml = max(ml, x.second[1]-2);
                }
            }
            else if(x.second.size() == 1)
            {
                if(x.second[0] >= 3) 
                {
                    ml = max(ml, x.second[0]-2);
                }
            }
        }


        return ml == 0 ? -1 : ml;
    }
};