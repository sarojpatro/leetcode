struct Trie
{
    Trie* next[10] = {nullptr};
};


class Solution {
public:
    Trie root1;
    Trie root2;
    void insert(int& num, Trie *node)
    {
        string s = to_string(num);
        for(auto& c:s)
        {
            if(!node->next[c-'0'])
                node->next[c-'0'] = new Trie();
            node = node->next[c-'0'];
        }
    }

    int check(int &num, Trie* node)
    {
        int n = 0;
        string s = to_string(num);
        for(auto& c: s)
        {
            if(node->next[c-'0']) 
            {
                n++;
                node = node->next[c-'0'];
            }
            else
            {
                break;
            }
        }

        return n;
    }


    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        for(auto& n: arr1)
        {
            insert(n, &root1);
        }

        int n = 0;
        for(auto& a: arr2)
        {
            n = max(n, check(a, &root1));
        }

        return n;
    }
};