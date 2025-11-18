#include<iostream>
using namespace std;
//------the tiny box or can call brick------
//create Node 
class Node{
    public:
    int data; //store value 
    Node* next;// point to next Node 
    
    Node(int value){data = value, next = nullptr;}//constructor for node 

};
//--- manager of the brick or node-----
//create linkedList 
class linkedList{
    Node* head; //point to the first brick or nullptr if empty 
    public:
    //constructor start with empty list 
    linkedList(){head = nullptr;}
void insertFront(int value){
    Node* newNode = new Node(value);//create new Node 
    newNode->next = head; // point newNode to old head (could be nullptr )
    head = newNode;
}
void insertEnd(int value){
   Node* newNode = new Node(value); //create new Node 
   if(!head){ // empty list so new Node become head 
    head = newNode;
    return;
   }
   Node* cur = head;
   while(cur->next)
   cur = cur -> next;
   cur -> next = newNode;

}
void insertAt(int pos, int value){
    if(pos <= 1){//treat <= 1 is insert front
        insertFront(value);
        return;
    }
    Node* cur = head;
    int index = 1;  
    while (cur && index < pos-1){
        cur= cur->next;
        index++;   
    }
    if(!cur){//position is to big 
        cout<<"pos out of range";
        return;
    }
    Node* newNode = new Node(value);
    newNode->next = cur->next;
    cur->next = newNode;
    
}
void print(){
    Node* temp = head;
    if(!head){
        cout<<"list is empty"<<endl;
        return;
    }
    //TRAVERSE PRINT EACH NODE AND DATA
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
void deleteFront(){
    if(!head){// nothing to delete 
        return;
    }
   Node* temp = head; //make a pointer to walk through list
   head = head->next;//move head forward 
   delete temp; //free old head 
}
void deleteEnd(){
    if(!head){return;} //empty 
    if(!head->next){
        delete head;
        head = nullptr;
        return;// only one node 
    }
    Node* cur = head;
    while(cur->next && cur->next->next){
        cur = cur->next;   
    }
     delete cur->next;
        cur->next = nullptr;
}
void deleteAT(int pos){
    if(!head){
        return;
    }
    if(pos<= 1){
        deleteFront();
        return;
    }
    Node*cur = head;
    int index = 1;
    while(cur->next && index < pos - 1){
        cur = cur->next;
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

};

int main(){
    linkedList list;
    list.insertFront(5);
    list.insertFront(6);
    list.insertFront(7);
    list.insertEnd(8);
    list.insertAt(3,1);
    list.deleteFront();
    list.deleteEnd();
    list.deleteAT(5);
    list.print();
    
    return 0;
}