#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void insert_at_head(Node *&head,int v){
    Node* newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout<<endl<<"Inserted at head"<<endl<<endl;
}
void insert_at_tail(Node* &head,int v){
    Node* newNode = new Node(v);
    if(head==NULL){
        head = newNode;
        cout<<"Inserted at tail"<<endl<<endl;
        return;
    }
    Node *tmp = head;
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    //tmp at last node now
    tmp->next=newNode;
    cout<<"Inserted at tail"<<endl<<endl;
}
void insert_at_position(Node * head,int p,int v){
    Node* newNode = new Node(v);
    Node* tmp = head;
    for(int i=1;i<=p-1;i++){
        tmp = tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<endl<<endl<<"Value inserted at "<<p<<endl<<endl;
}
void print_linked_list(Node* head){
    cout<<endl;
    Node *tmp = head;
    cout<<"Linked list: ";
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<endl;
}
int main(){
    Node* head= NULL;
    while(true){
    cout<<"Option 1: Insert at Tail"<<endl;
    cout<<"Option 2: Insert at Position"<<endl;
    cout<<"Option 3: Print Linked List"<<endl;
    cout<<"Option 4: Terminate"<<endl;
    int op;cin>>op;
    if(op==1){
        cout<<"Please enter value: "<<endl;
        int v;
        cin>>v;
        insert_at_tail(head,v);
    }
    else if(op==2){
        int p,v;
        cout<<"Enter position: "<<endl;
        cin>>p;
        cout<<"Enter value: "<<endl;
        cin>>v;
        if(p==0){
            insert_at_head(head,v);
        }
        else{
            insert_at_position(head,p,v);
        }
    }
    else if(op==3){
        print_linked_list(head);
    }
    else if(op==4){
        break;
    }
    else{
        cout<<"Invalid Option"<<endl;
    }
    }
    return 0;
}