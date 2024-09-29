#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include<iostream>
using namespace std;

class Node{
    int data;
    Node* next;
public:
    Node(int dataValue): data(dataValue), next(nullptr) {}
    ~Node(){}
    void setNext(Node* nextNode){
        next = nextNode;
    }
    Node* getNext(){
        return next;
    }
    void setData(int dataValue){
        data = dataValue;
    }
    int getData(){
        return data;
    }
};

class Stack{
    Node* top;
    int count;
public:
    Stack(): top(nullptr), count(0) {}
    ~Stack() {
        Node* temp = top;
        while (temp != nullptr) {
            Node* nextNode = temp->getNext();
            delete temp;
            temp = nextNode;
            }
    }
    bool isEmpty(){
        return top == nullptr;
    }
    void push(int data){
        Node* newNode = new Node(data);
        newNode -> setNext(top);
        top = newNode;
        count++;
    }
    void pop(){
        if (isEmpty()) {
            cerr << "Stack is empty!" << endl;
            return;
        }
        else{
            Node* temp = top;
            top = temp->getNext();
            delete temp;
            count--;
        }
    }
    int peek(){
        if (isEmpty()) {
            cerr << "Stack is empty!" << endl;
            return -1;
        } else{
            return top->getData();
        }
    }
    int size(){
        return count;
    }
    void clear(){
        while(!isEmpty()){
            pop();
        }
    }
    void printStack(){
        Node* temp = top;
        while(temp != nullptr){
            cout << temp->getData() << " ";
            temp = temp->getNext();
        }
        cout << endl;
    }
};

class Queue{
    Node* front;
    Node* rear;
    int count;
public:
    Queue() : front(nullptr), rear(nullptr), count(0) {}
    ~Queue(){
        while(front != nullptr){
            Node* temp = front;
            front = front->getNext();
            delete temp;
        }
    }
    bool isEmpty(){
        return front == nullptr;
    } 
    void enqueue(int data){
        Node* newNode = new Node(data);
        if (isEmpty()) {
            front = rear = newNode;
        } else{
            rear->setNext(newNode);
            rear = newNode;
        }
        count++;
    }
    void dequeue(){
        if(isEmpty()){
            cerr << "Queue is empty" << endl;
            return;
        }
        Node* temp = front;
        front = front->getNext();
        delete temp;
        count--;
        if (isEmpty()) {
            rear = nullptr;
        }
    }
    int size(){
        return count;
    }
    void printQueue(){
        if(isEmpty()){
            cout << "Queue is empty" << endl;   
            return;
        }
        Node* curr = front;
        while(curr != nullptr){
            cout << curr->getData() << " ";
            curr = curr->getNext();
        }
        cout << endl;
    }
};

#endif