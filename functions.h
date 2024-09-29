#ifndef FUNCTIONS_H
#define FUNCTIONS_H

class Node{
    private:
    int data;
    Node* next;

    public:
    Node();
    ~Node();
    void setNext(Node* val);
    Node* getNext();
    void setData(int data);
    int getData();
};

class Stack{
    private:
    Node* top;
    int count;

    public:
    Stack();
    ~Stack();
    bool isEmpty();
    void push(int data);
    void pop();
    int peek();
    int size();
    void clear();
    void printStack();
};

class Queue{
    private:
    Node* front;
    Node* end;
    int count;

    public:
    Queue();
    ~Queue();
    bool isEmpty();
    void enqueue(int data);
    void dequeue();
    int size();
    void printQueue();
    int peek();
};

#endif