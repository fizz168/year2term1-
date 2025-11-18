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
    void insertFront(int value){
        Node* newNode = new Node(value);
        if(!head){
            head = newNode;
            tail = newNode;
        }else{
            newNode->next = head; //newNode point to head 
            head->prv = newNode;//old head point to new Node 
            head = newNode;// head become newNode
        }
        
    }
    void printFoward(){
        Node* temp = head;
        cout<<"forward";
        while(temp != nullptr){
            cout<<temp->data<<"-><-";
            temp = temp->next;
        }
    }
    void printBackward(){
        Node* temp = tail;
        cout<<"backward"<<endl;
        while(temp!=nullptr){
            cout<<temp->data<<"-><-";
            temp = temp->prv;
        }

    }
    void insertEnd(int value){
        Node* newNode = new Node(value);
        if(!tail){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode; //old tail point to newNode 
            newNode->prv = newNode;// new point back to old tail
            tail = newNode;//tail become new Node 
            
        }

    }
    void deleteFront(){
        if(!head){
            return;
        } 
        if(head == tail){ //only one Node 
            delete head;
            head = nullptr;
            tail = nullptr;
        }  else{
            Node* temp = head;
            head = head ->next;
            head->prv = nullptr;
            delete temp;
        }

    }
    void deleteEnd(){
        if(!head){
            return;
        }
        if(head == tail){
            delete tail;
            head = nullptr;
            tail = nullptr;
        }else{
            Node*temp = tail;
            tail = tail -> prv;
            tail->next = nullptr;
            delete temp;
        }
    }

};
int main(){
    doubleLinkedList list;
    list.insertFront(2);
    list.insertFront(4);
    list.insertEnd(7);
    list.printFoward();

    return 0;
}