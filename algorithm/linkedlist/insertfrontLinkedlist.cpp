#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  Node(int value){data = value, next = nullptr;}
};
class linkedList{ 
  Node* head;
  public:
  linkedList(){
    head = nullptr;
  }
  void insertFront(int value){
  Node* newNode = new Node(value);
  newNode->next = head;
  head = newNode;
}
void insertEnd(int value){
  Node* newNode = new Node(value);
  if(!head){
    return;
  }
  Node* cur = head;
  while (cur->next)
  {
    cur = cur->next;
    cur->next = newNode;
    
  }  
}
void insertAt(int pos, int value){
  if(pos <= 1){
    insertFront(value);
    return;
  }
  Node* cur= head; 
  int index = 1;
  while(cur && index < pos - 1){
    cur = cur->next;
    index++;
  }
  if(!cur){
    cout<<"pos out of range";
    return;
  }
  Node* newNode = new Node(value);
  newNode->next = cur->next;
  
}
void deleteFront(){
  if(!head){
    return;
  }
  Node* temp = head;
  head = head->next;
  delete temp;
  
}
void deleteEnd(){
  if(!head){
    return;
  }
  if(!head -> next){
    delete head;
    head = nullptr;
    return;
  }
  Node* cur = head;
  while(cur->next && cur->next->next){
    cur->next = head;
  }
  delete cur->next;
  cur->next = nullptr;
}
void deleteAt(int pos){
  if(!head){
    return;
  }
  if(pos <= 1){
    deleteFront();
    return;
  }
  Node* cur = head;
  int index = 1;
  while(cur->next && index < pos - 1){
    cur->next = cur;
    index++;
  }
  if(!cur->next){
    cout<<"pos out of range"<<endl;
    return;
  }
  Node* todelete = cur->next;
  cur->next = todelete->next;
  delete todelete;    
}
void print(){
  Node* temp = head;
  while (temp != nullptr)
  {
    cout<<temp->data<<"->";
    temp = temp -> next;
  }
  
}
 
};

int main(){
  linkedList list;

  return 0;
}