#ifndef STACK_H
#define STACK_H

template <class T>
class Stack{
    int size;
    int tos;
    T *stack;
public:
    Stack();
    Stack(int size);
    ~Stack();
    bool empty();
    bool full();
    void print();
    void push(T element);
    T pop();
};


#endif