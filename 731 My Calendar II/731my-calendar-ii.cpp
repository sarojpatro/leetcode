class MyCalendarTwo {
public:
        vector<pair<int, int>> m;
    MyCalendarTwo() {
    }
    
    bool book(int start, int end) {
        int count =0;
        vector<pair<int, int>> v;
        for(auto a:m)
        {
            if(max(a.first, start) < min(a.second, end)) 
            {
                int s1 = max(a.first, start);
                int e1 = min(a.second, end);

                for(int j=0; j<v.size(); j++)
                {
                    if(max(s1, v[j].first) < min(e1, v[j].second))
                    {
                        // there is a overlap, return false
                        return false;
                    }
                }
                v.push_back({s1, e1});
            }
        }
        m.push_back({start, end});
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */