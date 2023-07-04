#include<iostream>
using namespace std;
#include "class_append.cpp"


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

int length(Node *head){
    if(head == NULL){
        return 0;
    }
    else{
        return 1 + length(head -> next);
    }
}

void print(Node * head){
    while(head != NULL){
        cout<<head -> data<<" ";
        head = head -> next;
    }
}

Node *AppendNode(Node *head, int x, int length){
    int count = length - x;
    Node *temp = head;
    int i = 1;
    
    while(i< count){
        temp = temp -> next;
        i++;
    }
    
    Node *h2 = temp -> next;
    temp -> next = NULL;
    Node *tail = h2;
    
    while(tail -> next != NULL){
        tail = tail -> next;

    }
    tail -> next = head;
    return h2;
}

int main(){
    Node * head = takeInputBetter();
    print(head);
    
    int x;
    cin>>x;
    int len = length(head);
   // cout<<len<<endl;
    
    head = AppendNode(head, x, len);
    print(head);
}
