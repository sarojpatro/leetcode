class Solution {
public:
    void print(vector<char> s)
    {
        for(int i=0; i<s.size(); i++)
        {
            cout << s[i];
        }
        cout << endl;
    }
    string sortVowels(string s) {
        //First iteration : Go over the list and fetch the vowels
        //store it in another container
        std::map<char, int> vowel_map = {
            {'A', 0},
            {'E', 0},
            {'I', 0},
            {'O', 0},
            {'U', 0},
            {'a', 0},
            {'e', 0},
            {'i', 0},
            {'o', 0},
            {'u', 0},
            };
        
        int count = 0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == 'A' ||
               s[i] == 'E' ||
               s[i] == 'I' ||
               s[i] == 'O' ||
               s[i] == 'U' ||
               s[i] == 'a' ||
               s[i] == 'e' ||
               s[i] == 'i' ||
               s[i] == 'o' ||
               s[i] == 'u' )
               {
                    count++;
                    vowel_map[s[i]] += 1; 
               }
        }

        // Fill a heap
        vector<char> vowels;
        std::map<char, int>::iterator it;
        for (it = vowel_map.begin() ; it != vowel_map.end(); it++)
        {
            vowels.insert(vowels.end(), it->second, it->first);
        }

        print(vowels);
        std::vector<char>::iterator it2;
        it2 = vowels.begin();
        //second iteration : Re-go over the list and just replace
        //the vowels from the container
        string t(s);
        for (int i=0; i < s.length(); i++)
        {
            if(s[i] == 'A' ||
               s[i] == 'E' ||
               s[i] == 'I' ||
               s[i] == 'O' ||
               s[i] == 'U' ||
               s[i] == 'a' ||
               s[i] == 'e' ||
               s[i] == 'i' ||
               s[i] == 'o' ||
               s[i] == 'u' )
               {
                   t[i] = *it2;
                   it2++;
               }
               else
               {
                   t[i] = s[i];
               }
        }

        cout << t ;
        return t;
    }
};