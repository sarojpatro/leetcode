
class Solution {
public:
    bool reportSpam(vector<string>& m, vector<string>& b) {
        // Use an unordered_map to count occurrences of each word in the message
        unordered_map<string, int> wordCount;
        for (const auto& word : m) {
            wordCount[word]++;
        }

        // Use an unordered_set for faster lookups of banned words
        unordered_set<string> bannedWords(b.begin(), b.end());

        // Check if any banned word appears at least twice in the message
        int n=0;
        for (const auto& word : bannedWords) {
            if (wordCount[word] >= 2) {
                return true;
            }
            else if(wordCount[word] == 1)
            {
                n+=1;
                if(n==2) return true;
            }
        }

        return false;
    }
};
