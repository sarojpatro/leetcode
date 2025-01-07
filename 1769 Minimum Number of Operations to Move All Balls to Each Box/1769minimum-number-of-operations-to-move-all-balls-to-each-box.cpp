class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> ans(n, 0);

        int nbr=0, nbl=0;
        int nmr=0, nml=0;
        
        for(int i=1; i<n;i++)
        {
            if(boxes[i] == '1') 
            {
                nbr++;
                nmr += i;
            }
        }
        ans[0] = nmr;

        for(int i=1; i<n;i++)
        {
            if(boxes[i-1] == '1') nbl++;
            nml = nml + nbl;
            nmr = nmr - nbr;
            ans[i] = nml + nmr;
            if(boxes[i] == '1') nbr--;
        }

        return ans;
    }
};