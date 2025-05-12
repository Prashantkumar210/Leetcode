class MyCircularQueue {
    private:
    vector<int>q;
    int head=0,tail=-1;
    int maxsize=-1;
public:
    MyCircularQueue(int k) {
        maxsize=k;
        q.resize(k);
    }
    
    bool enQueue(int value) {
        if(isFull())return false;
        tail=(tail+1)%maxsize;
        q[tail]=value;
       
     return true; 
    }
    
    bool deQueue() {
        if(isEmpty())return false;
        if(head==tail)head=0,tail=-1;
      else  head=(head+1)%maxsize;
        return true;
    }
    
    int Front() {
        if(isEmpty())return -1;
        return q[head];
    }
    
    int Rear() {
          if(isEmpty())return -1;
        return q[tail];
    }
    
    bool isEmpty() {
        if(head==0 && tail==-1)return true;
        return false;
    }
    
    bool isFull() {
      if(!isEmpty() && head==(tail+1)%maxsize)return true;
        return false;
    }
};
