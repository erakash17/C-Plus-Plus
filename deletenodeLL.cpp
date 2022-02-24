/***************************************************************************
 *   Copyright (C) 2022 by self                                            *
 *   Author : Er. Akash Erande                                             *
 *   Created on : 2022 : 1 : 17                                           *
 ***************************************************************************/
#include <iostream>

using namespace std;
class Node{
public:
    int data;
    Node *next;
};
void push(Node **head_ref,int new_data){
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}
void deletenode(Node **head_ref,int key){
    Node *temp = *head_ref;
    Node *prev = NULL;

    if (temp!=NULL && temp->data==key){
        *head_ref = temp->next;
        delete temp;
        return;
    }
    else{

           while(temp!=NULL && temp->data!=key){
               prev = temp;
               temp = temp->next;
           }

        }
        if (temp==NULL){
            return;
        }
        prev->next = temp->next;
        delete temp;
}

void PrintList(Node *head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<endl;
}

int main()
{
    Node *head = NULL;
    push(&head,10);
    push(&head,11);
    push(&head,12);
    push(&head,13);
    PrintList(head);
    deletenode(&head,10);
    PrintList(head);
    return 0;
}
