class Solution {
public:
    vector<int> m;
    char kthCharacter(int k) {
        int n = 2;
        m=vector<int>(k,0);
        
        m[0] = 0;
        for(int i=1; i<k; i++)
        {
            if(i/n >= 2) n*=2;
            
            m[i] = m[i%n] + 1;
        }

        return 'a' + m[k-1];
    }
};