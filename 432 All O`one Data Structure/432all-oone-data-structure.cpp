class AllOne {
    unordered_map<string, int> m;
public:
    AllOne() {
        
    }
    
    void inc(string key) {
        m[key]++;
    }
    
    void dec(string key) {
        m[key]--;
        if(m[key] == 0) m.erase(key);
    }
    
    string getMaxKey() {
        string max;
        int mx = INT_MIN;
        for(auto& a:m)
        {
            if(a.second > mx)
            {
                max = a.first;
                mx = a.second;
            }
        }

        return max;
    }
    
    string getMinKey() {
        string min;
        int mn = INT_MAX;
        for(auto& a:m)
        {
            if(a.second < mn)
            {
                min = a.first;
                mn = a.second;
            }
        }

        return min;
    }
};

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne* obj = new AllOne();
 * obj->inc(key);
 * obj->dec(key);
 * string param_3 = obj->getMaxKey();
 * string param_4 = obj->getMinKey();
 */