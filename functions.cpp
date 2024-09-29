#include "functions.h"
#include <iostream>

using namespace std;
//Node//
Node::Node(){
    next = nullptr;
    data = 0;

}

Node::~Node(){
    next = nullptr;
    data = 0;
}

void Node::setNext(Node* val){
    next = val;

}

Node* Node::getNext(){
    return next;
}

void Node::setData(int data){
    this-> data = data;
}

int Node::getData(){
    return data;
}

//----------------------------------------------------------Stack----------------------------------------------------------------------//

Stack::Stack(){
    top = nullptr;
    count = 0;
}

Stack::~Stack(){
if(isEmpty() == false){
    Node* tempPointer = top;
    Node* tempPointerNext = nullptr;

    while (tempPointer)
    {   
        tempPointerNext = tempPointer->getNext();
        delete tempPointer;
        tempPointer = tempPointerNext;
    }

    top = nullptr;
    count = 0;
}
    
}

bool Stack::isEmpty(){
    if(count == 0){
        return true;
    }
    else return false;
}

void Stack::push(int data){
    Node* tempPointer = new Node;
    tempPointer->setData(data);

    if (isEmpty() == true){
        cout << "Stack-> push: list is empty! Pushing first element!" << endl;
        top = tempPointer;
        top->setNext(nullptr);
        count ++;
        return;
    }

    tempPointer->setNext(top);
    top = tempPointer;
    count ++;

}

void Stack::pop(){
    if(isEmpty() == true){
        cout << "Stack-> pop: List is empty! Returning!" << endl;
        return;
    }

    top = top->getNext();
    count --;
}

int Stack::peek(){
    if(isEmpty() == true){
        cout << "Stack-> peek: List is empty! Returning -1!" << endl;
        return -1;
    }
    return top->getData();
}

int Stack::size(){
    return count;
}

void Stack::clear(){
    if(isEmpty() == true){
        cout << "Stack-> clear: List is empty! Nothing to clear!" << endl;
        return;
    }

    if(isEmpty() == false){
    Node* tempPointer = top;
    Node* tempPointerNext = nullptr;
 
    while (tempPointer)
    {   
        tempPointerNext = tempPointer->getNext();
        delete tempPointer;
        tempPointer = tempPointerNext;
    }

    top = nullptr;
    count = 0;
    }

}

void Stack::printStack(){
    if(isEmpty() == true){
        return;
    }
    
    Node* tempPointer = top;
    while(tempPointer != nullptr){
        cout << tempPointer->getData() << " ";
    }
    cout << endl;
}

//----------------------------------------------------Queue---------------------------------------------------//

Queue::Queue(){
    front = nullptr;
    end = nullptr;
    count = 0;
}   

Queue::~Queue(){
if(isEmpty() == false){
    Node* tempPointer = front;
    Node* tempPointerNext = nullptr;

    while (tempPointer)
    {   
        tempPointerNext = tempPointer->getNext();
        delete tempPointer;
        tempPointer = tempPointerNext;
    }

    front = nullptr;
    end = nullptr;
    count = 0;
}
    
}

bool Queue::isEmpty(){
    if(count == 0){
        return true;
    }
    else return false;
}

void Queue::enqueue(int data){
    Node* newNode = new Node;
    newNode->setData(data);

    if(isEmpty() == true){
        cout << "Queue-> enqueue: Queue is empty! Inserting first element!" << endl;
        front = newNode;
        end = newNode;
        newNode->setNext(nullptr);

        count ++;
        return;
    }

    end->setNext(newNode);
    end = newNode;
    newNode->setNext(nullptr);
    count ++;
}

void Queue::dequeue(){
    if(isEmpty() == true){
        cout << "Queue-> dequeue: Queue is empty! Can't dequeue!" << endl;
        return;
    }

    front = front->getNext();
    count --;
    
}

int Queue::size(){
    return count;
}

void Queue::printQueue(){
    if (isEmpty() == true){
        return;
    }

    Node* tempPointer = front;

    while(tempPointer){
        cout << tempPointer->getData() << " ";
        tempPointer = tempPointer->getNext();
    }
}

int Queue::peek(){
    if(isEmpty() == true){
        cout << "Queue-> peek: Queue is empty! Returning -1!" << endl;
        return -1;
    }

    return front->getData();
}

