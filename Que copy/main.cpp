#include <iostream>
#include "que.h"
#include "que.cpp"

int main(){
    Que<int> que(5);

    for(int i=0;i<5;i++){
        que.push(i+1);
    }
    que.print();
    que.pop();
    que.print();
    que.pop();
    que.print();
    que.push(5);
    que.print();
    que.push(3);
    que.print();
    que.push(3);
    que.print();
    for(int i=0;i<4;i++){
        que.pop();
    }
    que.print();
    que.pop();
    que.print();
    que.pop();
    que.pop();
    que.print();
    que.push(3);
    que.print();
    que.push(4);
    que.print();
    que.pop();
    que.print();
    return 0;
}