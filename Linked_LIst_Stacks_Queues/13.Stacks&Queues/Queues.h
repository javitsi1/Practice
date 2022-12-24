template <typename T>

class Queue{
    int *arr;
    int cs;
    int ms;
    int front;
    int rear;

public: 
    Queue(int default_size=5){
        ms = default_size;
        arr = new T[ms];
        cs = 0;
        front = 0;
        rear = ms - 1;
    }

    bool full(){
        return cs==ms;
    }

    void push(T d){
        if(!full()){
            rear = (rear+1)%ms;
            arr[rear] = d;
            cs++;
        }
    }

    bool empty(){
        return cs==0;
    }

    void pop(){
        if(!empty()){
            front = (front+1)%ms;
            cs--;
        }
    }
    T getFront(){
        return arr[front];
    }
};