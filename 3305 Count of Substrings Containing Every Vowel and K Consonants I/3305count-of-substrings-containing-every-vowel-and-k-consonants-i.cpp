class Solution {
public:
    int a = 0, e = 0, i= 0, o= 0, u=0, conso=0;
    void reset()
    {
        a=0, e=0, i=0, o=0, u=0, conso=0;
    }
    bool AddcheckVowel(char c, int k)
    {
        if(c == 'a') a++;
        else if(c == 'e') e++;
        else if(c == 'i') i++;
        else if(c == 'o') o++;
        else if(c == 'u') u++;

        if(a>0 && e>0 && i>0 && o>0 && u>0) return true;
        //cout << "vowel check fails " << endl;
        return false;
    }

    bool AddCheckConso(char c, int k)
    {
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
        {
            conso++;
        }

        //if (conso != k) 
            //cout << " Conso fails conso :  " << conso << " k " << k << endl;
        //else 
            //cout << " Conso passed conso :  " << conso << " k " << k << endl;

        return conso == k;
    }

    bool RemoveCheckConso(char c, int k)
    {
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
        {
            conso--;
        }

        //if (conso != k) 
           // cout << " Conso fails ";
        return conso == k;
    }

    bool RemovecheckVowel(char c)
    {
        if(c == 'a') a--;
        if(c == 'e') e--;
        if(c == 'i') i--;
        if(c == 'o') o--;
        if(c == 'u') u--;

        if(a>0 && e>0 && i>0 && o>0 && u>0) return true;
        //cout << " Vowel fails " << endl;
        return false;
    }
   
    int countOfSubstrings(string word, int k) {
        int s = word.size();
        if (s < 5) return 0;

        int ans = 0;
        for(int i = 0; i<s; i++)
        {
            for(int j=i; j<s; j++ )
            {
                //cout << "start++++++++++++++++++++++++++++++++++++++" << endl;
                //cout << "i : "<< i << " j: " << j << " " << endl;
                bool v = AddcheckVowel(word[j], k);
                bool c = AddCheckConso(word[j], k);
                if(v && c) 
                {
                    //cout << "passed "<< "passed "<< "passed "<< "passed ";
                    //cout << "i : "<< i << " j: " << j << " k: " << k << " " << word.substr(i, j-i+1) << endl;
                    ans++;
                }
                //else
                //{
                    //cout << "Fails " <<  "i : "<< i << " j: " << j << " k: "<< k <<" " << word.substr(i, j-i+1) << endl;
                //}
                //cout << "end++++++++++++++++++++++++++++++++++++++" << endl;
            }

            reset();
        }

        return ans;
    }
};