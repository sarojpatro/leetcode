class MyCircularDeque {
public:
    int size;
    vector<int> v;
    MyCircularDeque(int k):size(k) {
    }
    
    bool insertFront(int value) {
        if(v.size() == size) return false;
        if(v.size() == 0) v.push_back(value);
        else v.insert(v.begin(), value); // not sure if we need here two calls !
        return true;
    }
    
    bool insertLast(int value) {
        if(v.size() == size) return false;
        v.push_back(value);
        return true;
    }
    
    bool deleteFront() {
        if(v.size() == 0) return false;
        v = vector<int>(v.begin()+1, v.end());
        return true;
    }
    
    bool deleteLast() {
        if(v.size() == 0) return false;
        v = vector<int>(v.begin(), v.end()-1);
        return true;
    }
    
    int getFront() {
        if(v.size() == 0) return -1;
        return v[0];
    }
    
    int getRear() {
        if(v.size() == 0) return -1;
        return v[v.size()-1];
    }
    
    bool isEmpty() {
        return v.size() == 0;
    }
    
    bool isFull() {
        return v.size() == size;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */