template<typename T>
class Stack{
    vector<T> arr;
public:
    void push(T data){
        arr.push_back(data);
    }

    bool isEmpty(){
        return arr.size()==0;
    }

    T top(){
        int lastIndex = arr.size()-1;
        return arr[lastIndex];
    }

    void pop(){
        arr.pop_back();
    }
};