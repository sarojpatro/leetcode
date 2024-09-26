class MyCalendar {
    vector<pair<int, int>> books;
public:    
    bool book(int start, int end) {
        for(auto& p: books)
        {
            if(max(p.first, start) < min(p.second, end)) return false;
        }
        books.push_back(pair{start, end});
        return true;
    }
};