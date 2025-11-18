#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = nullptr;
    }
};
class Stack{
    Node* top;
    int size;
public:
Stack(){
    top = nullptr;
    size = 0;
}
void push(int data){
    Node* newNode = new Node(data);
    newNode->next = top;
    top = newNode;
    size++;
}
void print(){
    Node* temp = top;
    while(temp != nullptr){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
}
};
int main(){
    Stack s;
    s.push(5);
    s.push(4);
    s.print();
}