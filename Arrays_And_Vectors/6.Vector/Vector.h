// Vector Header file
template<typename T>
class Vector{
    // Data Members -> data of the DS
    T *arr;
    int currentSize;
    int maxSize;

    // Methods (Push back, pop back), Constructor, Destructor
    public:
        // Constructor
        Vector(int max_Size = 1){
            currentSize = 0;
            maxSize = max_Size;
            arr = new T[maxSize];
        }
        //Method 1
        void push_back(const T data){
            if(currentSize == maxSize){
                //create new array and delete old one and double the capacity
                T *oldArr = arr;
                maxSize = 2*maxSize;
                arr = new T[maxSize];
                for(int i=0; i<currentSize; i++){
                    arr[i] = oldArr[i];
                }
                delete [] oldArr;
            }
            arr[currentSize] = data;
            currentSize++;
        }
        //Method 2
        void pop_back(){
            if(currentSize >= 0){
                currentSize--;
            }
        }
        //Method 3
        bool isEmpty(){
            return currentSize==0;
        }
        // Method 4
        T front() const{
            return arr[0];
        }
        // Method 5
        T back() const{
            return arr[currentSize-1];
        }
        // Method 6
        T at(int i) const{
            return arr[i];
        }
        // Method 7
        int size() const{
            return currentSize;
        }
        // Method 8
        int capacity() const{
            return maxSize;
        }
        // Method 9
        T operator[](const int i) const{
            return arr[i];
        }
};