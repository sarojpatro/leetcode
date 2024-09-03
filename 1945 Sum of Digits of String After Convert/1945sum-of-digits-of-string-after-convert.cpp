class Solution {
public:
    int getLucky(string s, int k) {

        int i =0;
        for(char c:s)
        {
            int n = c-'a'+1;
            if(n>9)
            {
                while(n>0)
                {
                    i+=n%10;
                    n/=10;
                }
            }
            else
            {
                i+=n;
            }
        }
        k--;

        int j=0;
        while(k>0)
        {
            while(i>0)
            {
                j+=i%10;
                i=i/10;
            }

            k--;
            i=j;
            j=0;
        }

        return i;
    }
};