class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());

        long long ans=0; int s=skill.size();
        int sum = skill[0] + skill[s-1];

        for(int i=0, j=s-1; i<j; i++, j--)
        {
            int temp = skill[i] + skill[j];
            if(temp != sum) return -1;
            ans += skill[i] * skill[j];
        }

        return ans;
    }
};