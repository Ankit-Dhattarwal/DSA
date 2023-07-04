#include<iostream>
using namespace std;
#include "class_rec.cpp"

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

Node *InsertRec(Node *head , int i , int data){
    if(i== 0){
        Node * newNode = new Node(data);
        newNode -> next = head;
        head = newNode;
        return head;
    }
    
    if(head == NULL){
        return head;
    }
    
//    if(i== 1){
//        Node * newNode = new Node(data);
//           newNode->next=head->next;
//           head->next=newNode;
//        return head;
//    }
    
   Node *a =  InsertRec(head->next, i-1, data);
     head -> next = a;
    return head;
}


int main(){
    Node * head = takeInputBetter();
    print(head);
    int i, data;
    cin>>i>>data;
    
   head= InsertRec(head, i, data);
    print(head);
    
    
}
