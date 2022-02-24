/***************************************************************************
 *   Copyright (C) 2022 by self                                            *
 *   Author : Er. Akash Erande                                             *
 *   Created on : 2022 : 1 : 14                                           *
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
int get_count(Node *head){
    Node *current = head;
    int count = 0;
    while(current!=NULL){
        current = current->next;
        count++;
    }
    return count;
}
void middlele(Node *head){
    Node *curr = head;
    int count = get_count(head);
    int compare = 0;
    while(compare!=count/2){
        curr = curr->next;
        compare++;
    }
    cout<<"Middle element is -> "<<curr->data<<endl;
}
void Printlist(Node *head){
    while(head!=NULL){
        cout<<"->"<<head->data;
        head=head->next;
    }
    cout<<endl;
}

int main()
{
    Node *head = NULL;
    push(&head,11);
    push(&head,12);
    push(&head,13);
    push(&head,14);
    Printlist(head);
    middlele(head);
    return 0;
}
