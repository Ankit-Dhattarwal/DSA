#include<iostream>
using namespace std;
#include "class_merge.cpp"

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

Node *merge(Node *head , Node *h2){
    Node *Fh = NULL;
    Node *Ft = NULL;
    
    if(head -> data < h2 -> data){
        Fh = head;
        Ft = head;
        head = head -> next;
    }
    
    while (Fh != NULL && Ft != NULL){
        if(head-> data < h2->data){
            Ft -> next = head;
            head = head -> next;
        }
        else{
            Ft -> next = h2;
            h2 = h2 -> next;
        }
    }
    
//    if(head != NULL){
//        Ft -> next = head;
//    }
//    else{
//        Ft -> next = h2;
//    }
    return Fh;
}


int main(){
    Node *head = takeInputBetter();
 //   print(head);
    Node *h2 = takeInputBetter();
 //   print(h2);
    
 head =  merge(head, h2);
  print(head);
}
