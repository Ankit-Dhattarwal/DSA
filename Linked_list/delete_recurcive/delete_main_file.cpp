#include<iostream>
using namespace std;
#include "delete_class.cpp"

Node *takeInputBetter(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node * tail = NULL;
    while(data != -1){
        Node * newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = tail -> next;
            
        }
        cin>>data;
    }
    return  head;
}

void print(Node * head){
    while(head != NULL){
        cout<<head -> data<<" ";
        head = head -> next;
    }
}

Node *DeleteRec(Node *head , int i){
    if(i== 0){
        Node *temp = head;
        head = head -> next;
        delete temp;
        return head;
    }
    
    if(head == NULL){
        return NULL;
    }
    
//    if(i== 1){
//        Node * newNode = new Node(data);
//           newNode->next=head->next;
//           head->next=newNode;
//        return head;
//    }
    
   Node *a =  DeleteRec(head->next, i-1);
     head -> next = a;
    return head;
}


int main(){
    Node * head = takeInputBetter();
    print(head);
    int i;
    cin>>i;
    
   head= DeleteRec(head, i);
    print(head);
    
    
}

