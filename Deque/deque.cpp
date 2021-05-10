#include <iostream>
#include "deque.h"
using namespace std;

template <class T>
Deque<T>::Deque(){
    size =1+1; front = 0; back  = 0; deque = new T[size]; 
}
template <class T>
Deque<T>::Deque(int MaxSize){
    size =MaxSize+1; front = 0; back  = 0; deque = new T[size]; // full 과 empty를 구분하기위한 공간이 필요해 MaxSize +1 한 값을 size에 저장한다.
}
template <class T>
Deque<T>::~Deque(){
    delete deque; 
}
template <class T>
bool Deque<T>::full(){
    if((back +1)%size == front) // deque가 꽉차있다면 back+1 한 곳이 front 와 같은곳이 된다.
       return true;
    else
       return false;
}
template <class T>
bool Deque<T>::empty(){
    if(front == back)
        return true;
    else
        return false;
}
template <class T>
void Deque<T>::push_back(T element){
    if(!full()){

        deque[back] = element;
        back = (back+1)%size; // back의 위치가 MaxSize가 되면 다음 push시 다시 0으로 돌아간다.
    }
    else{
        cout << "Deque is Full!"<<endl;
    }
}
template <class T>
void Deque<T>::push_front(T element){
    if(!full()){
        front = (front -1 +size) % size; //front의 위치가 0이 되면 다음 push시 다시 MaxSize으로 돌아간다.
        deque[front] = element;
    }
    else
        cout << "Deque is Full!"<<endl;
}
template <class T>
T Deque<T>::pop_back(){
    if(!empty()){
        T retDate;
        back = (back-1+size)%size; // back의 위치가 0이 되면 다음 pop시 MaxSize위치로 돌아간다.
        retDate = deque[back];
        deque[back] = 0;
        return retDate;
    }
    else{
        cout << "Deque is Empty!"<<endl; 
        return (T)NULL;
    }
}
template <class T>
T Deque<T>::pop_front(){
    if(!empty()){
        T retDate;
        retDate = deque[front];
        deque[front]=0;
        front = (front+1+size)%size; // front의 위치가 MaxSize가 되면 다음 pop시 0으로 돌아간다.
        return retDate;
    }
    else{
        cout << "Deque is Empty!"<<endl; 
        return (T)NULL;
    }
}
template <class T>
void Deque<T>::print(){
    int num;
    if(back < front)
        num = back+size - front;
    else
        num = back -front;
    for(int i=0;i<num;i++){
        cout <<deque[(front+i)%size] << " | ";
    }
    cout << endl;
}