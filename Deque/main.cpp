#include <iostream>
#include "deque.h"
#include "deque.cpp"
using namespace std;

int main(void){
    Deque<int> deque(10);

    cout << "TEST PUSH_BACK"<<endl;
    for(int i=0;i<5;i++){
        deque.push_back(i+1);
        deque.print();
    }
    
    
    cout << "TEST PUSH_FRONT"<<endl;
    for(int i=5;i<10;i++){
        deque.push_front(i+1);
        deque.print();
    }
    cout << "TEST POP_BACK"<<endl;
    for(int i=0;i<5;i++){
        deque.pop_back();
        deque.print();
    }
    cout << "TEST POP_FRONT"<<endl;
    for(int i=0;i<5;i++){
        deque.pop_front();
        deque.print();
    }
    return 0;
}