#include<iostream>
using namespace std;
#include "class_reversed.cpp"

Node *takeInputBetter(){
    int data;
    cin>>data;
    
    Node *head = NULL;
    Node *tail = NULL;
    
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = tail ->next;
        }
        cin>>data;
    }
    return head;
}
void print(Node * head){
    while(head != NULL){
        cout<<head -> data<<" ";
        head = head -> next;
    }
}


void reversedNode(Node * head){
    if(head == NULL){
        return;
    }
 reversedNode(head ->next);
    cout<<head->data<<" ";
    
}

int main(){
    Node *head = takeInputBetter();
    
  reversedNode(head);
//    print(head);
}
