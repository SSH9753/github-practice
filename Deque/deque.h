#ifndef DQ_h
#define DQ_h

template <typename T>
class Deque{
private:
    int size;
    int back;
    int front;
    T *deque;
public:
    Deque();
    Deque(int MaxSize);
    ~Deque();
    bool empty();
    bool full();
    void print();
    void push_front(T element);
    T pop_front();
    void push_back(T element);
    T pop_back();
};


#endif