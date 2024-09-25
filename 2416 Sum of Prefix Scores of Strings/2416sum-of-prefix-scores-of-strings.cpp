struct TrieNode{
    TrieNode* next[26] = {};
    int cnt = 0;
};

class Solution {
    TrieNode root;
public:

    void insert(string& word)
    {
        auto node = &root;
        for(auto& c: word)
        {
            if(!node->next[c-'a'])
                node->next[c-'a'] = new TrieNode();
            node->next[c-'a']->cnt++;

            node = node->next[c-'a'];
        }

    }

    int sumPrefix(string& word)
    {
        TrieNode *node = &root;
        int n = 0;
        for(auto& c: word)
        {
            n += node->next[c-'a']->cnt;
            node = node->next[c-'a'];
        }

        return n;
    }

    vector<int> sumPrefixScores(vector<string>& words)
    {   
        for(auto& w: words)
        {
            insert(w);
        }

        vector<int> ans;
        for(auto& w: words)
        {
            ans.push_back(sumPrefix(w));
        }

        return ans;
    }
};

 