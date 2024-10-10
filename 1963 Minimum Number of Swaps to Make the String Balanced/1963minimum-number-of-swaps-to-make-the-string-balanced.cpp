class Solution {
public:
    int a = 0;
    int minSwaps(string s) {
        int cb =0;
        //cout << "s : " << s << endl;
        int sz = s.size();
        for(int i=0, j=sz-1; i<j;i++)
        {
            if(s[i] == ']') cb++;
            else cb--;

            if(cb > 0) 
            {
                while(s[j] != '[') j--;
                //swap(s[i], s[j]);
                a++;
                cb-=2; // That's the main idea !!
                j--;
              
            }
        }

        return a;
    }
};