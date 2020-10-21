#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void printList(Node *root){
    while(root!=NULL){
        cout<<root->data<<endl;
        root = root->next;
    }
}
void insert(int data, Node *root){
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    while(root->next!=NULL){
        // cout<<root->data<<endl;
        root = root->next;
    }
    root->next = temp;
}

void insertAtPosition(int data, Node *root, int position){
    Node *temp = new Node();
    temp->data = data;
    int count = 1;
    while(count != position){
        root = root->next;
        count++;
    }
    Node * a = root->next;
    root->next = temp;
    temp->next = a;


}

int main()
{
    Node* n1 = NULL;
    Node* n2 = NULL;
    n1 = new Node();
    n2 = new Node();
    n1->data = 10;
    n2->data = 20;
    n1->next = n2;
    n2->next = NULL;
    printList(n1);
    insert(200, n1);
    printList(n1);
    insertAtPosition(500,n1,2);
    printList(n1);
}
