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
class cirLinkelist{
    Node* head;
    Node* tail;
public:
cirLinkelist(){
    head = nullptr;
    tail = nullptr;
}
void insertFront(int data){
    Node* newNode = new Node(data);
    if(head == nullptr){
        head = tail = newNode;
        tail->next = head;
    }else{
        newNode->next = head;
        head = newNode;
        tail->next = head;
    }
}
void insertEnd(int data){
    Node* newNode = new Node(data);
    if(head == nullptr){
        head = tail = newNode;
        tail->next = head;
    }else{
        newNode->next = head; 
        tail->next = newNode;
        tail = newNode; 
      
    }
    

}
void print(){   
   if(head == nullptr){
    return;
   }
   Node* temp = head;
   do {
    cout<<temp->data<<"->";
    temp = temp->next;
   }while(temp != head);
cout<<head->data;
}
void deleteHead(){
    if(head == nullptr){ // check if it empty 
        return;
    }
    else if(head == tail){//incase single Node
        head = tail = nullptr;
    }else{
    Node* temp = head;
    head = head->next;
    temp->next = nullptr;
    tail->next = head;
    delete temp;

}
}
void deleteEnd(){
    if(head == nullptr){
        return;
    }
    else if (head == tail)
    {
        /* code */head = tail = nullptr;
    }else{
        Node* temp = tail;
        Node* prv = head;
        while(prv -> next != tail){
            prv = prv->next;
        }
        tail = prv;
        tail->next = head;
        temp->next = nullptr;
        delete temp;
    }
    
}
};
int main(){
    cirLinkelist cll;
    cll.insertFront(5);
    cll.insertFront(6);
    cll.insertEnd(4);
    cll.deleteHead();
    cll.print();
}