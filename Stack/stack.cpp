#include <iostream>
#include "stack.h"
using namespace std;

template <class T>
Stack<T>::Stack() : size(10), tos(-1), stack(new T[size]){}

template <class T>
Stack<T>::Stack(int MaxSize): size(MaxSize),tos(-1),stack(new T[MaxSize]){}

template <class T>
Stack<T>::~Stack(){
    delete stack;
    stack = NULL;
}
template <class T>
bool Stack<T>::empty(){
    if(tos == -1)
        return true;
    else
        return false;
}
template <class T>
bool Stack<T>::full(){
    if(tos == size-1)
        return true;
    else
        return false;
}
template <class T>
void Stack<T>::print(){
    if(empty()){
        cout << "Stack is Empty!" <<endl;
        return ;
    }
    for(int i=0;i<=tos;i++){
        cout <<stack[i] << " | ";
    }
    cout << endl;
}
template <class T>
void Stack<T>::push(T element){
    if(tos==size-1){
        cout << "Stack is Full!" <<endl;
        return ;
    }
    tos++;
    stack[tos]=element;
}
template <class T>
T Stack<T>::pop(){
    if(tos==-1){
        cout << "Stack is Empty!" <<endl;
        return (T)NULL;
    }
    T retDate;
    retDate = stack[tos--];
    return retDate;
}