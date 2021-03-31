#ifndef Q_h
#define Q_h

template <typename T>
class Que{
private:
    int size;
    int rear;
    int front;
    T *que;
public:
    Que();
    Que(int MaxSize);
    ~Que();
    bool empty();
    bool full();
    void print();
    void push(T element);
    T pop();
};


#endif