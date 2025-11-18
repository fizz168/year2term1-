#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next; 
    Node* prv;
    Node(int value){
        data = value;
        next = nullptr;
        prv = nullptr;
    }

};
class doubleLinkedList{
    private:
    Node* head;
    Node* tail;
    public:
    doubleLinkedList(){
        head = nullptr;
        tail = nullptr;
    }
void insertFront(int data){
    Node* newNode = new Node(data);
    if(head == nullptr){
        head = tail = newNode;
    }else{
        newNode->next = head;
        head->prv = newNode;
        head = newNode;
    }
}
void insertEnd(int data){
    Node* newNode = new Node(data);
    if(head == nullptr){
        head = tail = newNode;
    }else{
     newNode->prv = tail;
     tail->next = newNode;
     tail = newNode;
    }
}
void deleteFront(){
    if(head == nullptr){
        cout<<"ddl is empty";
        return;
    }
    Node* temp = head;
    head = head->next;
    if(head != nullptr){
        head->prv = nullptr;
    }
    temp->next = nullptr;
    delete temp;

}
void deleteBack(){
    if(head == nullptr){
        cout<<"ddl is empty";
        return;
    }
    Node* temp = tail;
    tail = tail->prv;
    if(tail != nullptr){
        tail->next = nullptr;
    }
    temp->prv = nullptr;
    delete temp;
}
void print(){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<"<=>";
        temp = temp->next;
    }
    cout<<"nullptr"<<endl;

}
};
int main(){
    doubleLinkedList dl;
    dl.insertFront(3);
    dl.insertFront(5);
    dl.insertFront(2);
    dl.insertEnd(7);
    // dl.deleteFront();
    // dl.deleteBack();
    dl.print();
}