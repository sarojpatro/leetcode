class CustomStack {
    vector<int> v;
    int m=0;
public:
    CustomStack(int maxSize):m(maxSize) {
                
    }
    
    void push(int x) {
        if(v.size() < m) v.push_back(x);
    }
    
    int pop() {
        if(v.size() != 0) 
        {
            int temp = v[v.size()-1];
            v.erase(v.end()-1);

            return temp;
        }

        return -1;
    }
    
    void increment(int k, int val) {
        if(k > v.size()) k = v.size();
        for(int i=0; i<k; i++)
        {
            v[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */