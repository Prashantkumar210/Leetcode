class MyCircularDeque {
public:
    int size;
    deque<int>dq;
    MyCircularDeque(int k) {
        dq=deque<int>();
        size=k;
    }
    
    bool insertFront(int value) {
        if(dq.size()<size){
            dq.push_front(value);
            return true;
        }
        return false;
    }
    
    bool insertLast(int value) {
        if(dq.size()<size){
            dq.push_back(value);
            return true;
        }
        return false;
    }
    
    bool deleteFront() {
        if(dq.empty()) return false;

        dq.pop_front();

        return true;
    }
    
    bool deleteLast() {
        if(dq.empty()) return false;

        dq.pop_back();

        return true;
    }
    
    int getFront() {
        if(dq.empty()) return -1;

        return dq.front();
    }
    
    int getRear() {
        if(dq.empty()) return -1;

        return dq.back();
    }
    
    bool isEmpty() {
        return dq.empty();
    }
    
    bool isFull() {
        return dq.size()==size;
    }
};
