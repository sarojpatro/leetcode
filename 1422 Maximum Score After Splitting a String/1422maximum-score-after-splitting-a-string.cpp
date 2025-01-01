class Solution {
public:
    int maxScore(string s) {
        int leftZero = 0;
        int rightOne = count(s.begin(), s.end(), '1');

        int maxScore = 0;

        for (int i=0; i< s.size() - 1; i++)
        {
            if( s[i] == '0')
            {
                leftZero += 1;
            }
            else
            {
                rightOne -= 1;
            }

            maxScore = max(maxScore, leftZero + rightOne);
        }

        return maxScore;

    }
};