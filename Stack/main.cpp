#include <iostream>
#include "stack.h"
#include "stack.cpp"

int main(){
    Stack<int> stack(5);

    for(int i=0;i<5;i++){
        stack.push(i);
    }
    stack.print();
    stack.push(1);
    stack.print();
    for(int i=0;i<2;i++){
        cout << stack.pop()<<endl;
    }
    stack.print();
    
    return 0;
}