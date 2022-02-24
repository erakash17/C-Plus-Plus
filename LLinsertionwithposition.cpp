/***************************************************************************
 *   Copyright (C) 2022 by self                                            *
 *   Author : Er. Akash Erande                                             *
 *   Created on : 2022 : 1 : 7                                           *
 ***************************************************************************/

#include <iostream>
using namespace std;
class Node{
    public:
  int data;
  Node *next;
};
void printlist(Node *node);

void push(Node **head_ref,int new_data){
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    *head_ref = new_node;
}
void append(Node **head,int new_data){
    Node *new_node = new Node();
    new_node->next=NULL;
    new_node->data = new_data;
    Node *temp = *head;
    if(*head==NULL){
        *head = new_node;
        return;
    }

    while(temp->next!=NULL){

        temp=temp->next;

    }
    temp->next = new_node;

}
void insertAfter(Node *prev_node,int new_data,int position)
{
    Node *new_node = new Node();

    new_node->data = new_data;
    new_node->next = NULL;
    if(position < 1) {
        cout<<"\nposition should be >= 1.";
      }
      else if (position == 1) {
          std::cout << "position is 1 " << std::endl;
    new_node->next = prev_node;

    prev_node= new_node;


      }
        for(int i = 1; i < position-1; i++) {
          if(prev_node != NULL) {
            prev_node = prev_node->next;
            printlist(prev_node);

          }
        }

        if(prev_node != NULL) {
          new_node->next = prev_node->next;
          prev_node->next = new_node;
        } else {
          cout<<"\nThe previous node is null.";
        }
}


void printlist(Node *node){
    while(node!=NULL){
    cout<<node->data<<"->";
    node = node->next;
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL;
    append(&head,12);
    push(&head,11);
    insertAfter(head->next,1,16);
    push(&head,10);
    printlist(head);
    append(&head,13);
    insertAfter(head->next,15,2);

    printlist(head);
    return 0;
}
