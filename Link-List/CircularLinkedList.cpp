#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next =NULL; 
    }

    ~Node(){
        int val = this -> data;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory free for node with data "<<val<<endl;
    }
};

void insertNode(Node* &tail,int element,int d){

    // empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    } 
    else{
        // non-empty list
        // assuming that the element is present inthe list
        Node* curr = tail;

        while(  curr -> data != element ){
            curr = curr -> next;
        }

        // element is found // curr is repesenting element wala node 
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }

}

void deleteNode(Node* &tail,int value){
    // empty list
    if(tail == NULL){
        cout<<"List is empty please check again"<<endl;
        return ;
    }
    else{
        // non-empty list

        // Assuming that "value" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value){
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        // 1 Node Linked List
        if(curr == prev){
            tail = NULL;
        }
        // >=2 Node Linked List
        else if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}

void print(Node* tail){
    Node* temp = tail;

    // empty list
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return ;
    }

    do{
        cout<<tail -> data <<" ";
        tail = tail ->next;
    }while(tail != temp);
    
    cout<<endl;
}

int main(){

    Node*  tail = NULL;

    // empty list mei insert kar rahe h 

    insertNode(tail , 5 ,3);
    print (tail);

    insertNode(tail , 3 ,5);
    print (tail);
    /* 
    insertNode(tail , 5 ,7);
    print (tail);

    insertNode(tail , 7 ,9);
    print (tail);

    insertNode(tail , 5 ,46);
    print (tail);

    insertNode(tail , 7 ,19);
    print (tail);

    insertNode(tail, 9 , 10);
    print(tail);

    insertNode(tail , 3 , 14);
    print(tail);*/

    deleteNode(tail , 3);
    print(tail);
    return 0;
}