#include <iostream>
#include "que.h"

using namespace std;

template <class T>
Que<T>::Que(){
    size = 1+1;rear=0;front=0;que = new T[size];
}
template <class T>
Que<T>::Que(int MaxSize){
    size = MaxSize+1;rear=0;front=0;que = new T[MaxSize];
}
template <class T>
Que<T>::~Que(){
    delete [] que;
}
template <class T>
T Que<T>::pop(){
    if(!empty()){
        T retDate;
        retDate = que[front];
        que[front] = 0;
        front = (front +1) %size;
        return retDate;
    }
    else {
        cout << "Que is empty" <<endl;
        return (T)NULL;
        }
}
template <class T>
bool Que<T>::empty(){
    if(rear == front)
        return true;
    else
        return false;
}
template <class T>
bool Que<T>::full(){
    if((rear+1)%size == front)
        return true;
    else 
        return false;
}

template <class T>
void Que<T>::push(T element){
    if(!full()){
    que[rear]=element;
    rear = (rear +1) % size;
    }
    else
        cout << "Que is Full!"<<endl;
}
template <class T>
void Que<T>::print(){
    int num;
    if(rear<front)
        num = size+rear-front;
    else
        num = rear -front;
    for(int i=0;i<num;i++){
        cout << que[(front+i)%size] << " | ";
    }
    cout << endl;
}
