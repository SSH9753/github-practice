#### Library
========
### Desing focus
-------------
### List of Data Structures
-------------
* Stack
* Queue(Circle)
* DeQue(Circle)


## Stack
-------------
# ADT
* 한 쪽 끝에서만 자료를 넣고 뺄 수 있는 자료구조(Last In First Out)
* 다양한 type의 데이터를 다루기 위해 template을 사용
# Member Variables
* int _capacity : Stack의 용량을 저장하는 변수
* int _top : Stack에 저장되있는 데이터중 가장 위의 위치를 나타내는 변수
* T *stack : Stack의 데이터를 저장하기 위한 포인터 변수
# Method
* Stack(int size) : 생성자. 입력받은 size의 크기의 Stack을 생성(동적할당 받음)
* ~Stack() : 소멸자. 할당받은 메모리를 해제시킨다.
* bool isEmpty() : Stack이 비어있으면 1, 아니면 0을 반환
* bool isFull() : Stack이 꽉차있으면 1, 아니면 0을 반환
* void push(T element) : element값을 Stack의 맨 위에 입력
* void pop() : Stack의 맨 위값을 삭제
* T top() : Stack의 맨 위의값을 반환
* void print() : 현재 Stack에 저장되어 있는 데이터들을 출력
* void stackFull() : Stack의 용량만큼 데이터가 가득 찰 경우 용량을 2배 늘림

## Queue(Circle)
-------------
# ADT
* 한쪽 끝(rear)에서는 삽입이 이뤄지고 다른 한쪽끝(front)에서는 삭제가 이뤄지는 자료구조(First In First Out)
* 공간의 효율성을 위해 원형으로 작성
* 다양한 type의 데이터를 다루기 위해 template을 사용
# Member Variables
* int size : Que의 용량을 저장하는 변수
* int _front : Que의 저장되어있는 데이터중 가장 앞의 위치를 나타내는 변수
* int _rear : Que의 저장되어있는 데이터중 가장 뒤의 위치를 나타내는 변수
* T *que : Que의 데이터를 저장하기 위한 포인터 변수
# Method
* Que(int size) : 생성자. 입력받은 size의 크기의 Queue을 생성(동적할당 받음)
* ~Que() : 소멸자. 할당받은 메모리를 해제시킨다.
* bool isFull() : Queue이 꽉차있으면 1, 아니면 0을 반환
* bool isEmpty() : Queue이 비어있으면 1, 아니면 0을 반환
* void push(T element) : element값을 Queue의 맨 끝에 입력
* void pop() : Queue의 맨 앞의 값을 삭제
* T front() : Queue의 맨 앞의 값을 반환
* T back() : Queue의 맨 뒤의 값을 반환
* void print() : 현재 Queue에 저장되어 있는 데이터들을 출력


## Deque(Circle)
-------------
# ADT
* 양쪽 끝에서 삽입과 삭제가 모두 가능한 자료구조
* 공간의 효율성을 위해 원형으로 작성
* 다양한 type의 데이터를 다루기 위해 template을 사용
# Member Variables
* int size : Deque의 용량을 저장하는 변수
* int _front : Deque의 저장되어있는 데이터중 가장 앞의 위치를 나타내는 변수
* int _rear : Deque의 저장되어있는 데이터중 가장 뒤의 위치를 나타내는 변수
* T *deque : Deque의 데이터를 저장하기 위한 포인터 변수
# Method
* Deque(int size) : 생성자. 입력받은 size의 크기의 Deque을 생성(동적할당 받음)
* ~Deque() : 소멸자. 할당받은 메모리를 해제시킨다.
* bool isFull() : Deque이 꽉차있으면 1, 아니면 0을 반환
* bool isEmpty() : Deque이 비어있으면 1, 아니면 0을 반환
* void push_front(T element) : element값을 Deque의 맨 앞에 입력
* void push_back(T element) : element값을 Deque의 맨 끝에 입력
* void pop_front() : Deque의 맨 앞의 값을 삭제
* void pop_back() : Deque의 맨 끝의 값을 삭제
* T front() : Deque의 맨 앞의 값을 반환
* T back() : Deque의 맨 뒤의 값을 반환
* void print() : 현재 Deque에 저장되어 있는 데이터들을 출력