#include "mystack.h"

template<typename T>
Stack<T>::Stack(int size)
{
    space = new T[size];
    top = 0;
}
template<typename T>
Stack<T>::~Stack(){
    delete []space;
}
template<typename T>
bool Stack<T>::isEmpty(){
    return top == 0;
}
template<typename T>
bool Stack<T>::isFull(){
    return top == 1024;
}
template<typename T>
void Stack<T>::push(T data){
    space[top++] = data;
}

template<typename T>
T Stack<T>::pop(){
    return space[--top];
}
