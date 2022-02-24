/***************************************************************************
 *   Copyright (C) 2022 by self                                            *
 *   Author : Er. Akash Erande                                             *
 *   Created on : 2022 : 1 : 6                                           *
 ***************************************************************************/
#include "fromfront.h"
#include<iostream>
using namespace std;

Fromfront::Fromfront()
{
    Node* head = NULL;

    end(&head,9);
    push(&head,10);
    push(&head,11);
    insert(head->next,12);
    end(&head,13);
    end(&head,15);
    insert(head->next,14);
    cout<<"This is final list ->"<<endl;
    printlist(head);

}

void Fromfront::push(Fromfront::Node **head_ref, int new_data)
{
    Node *new_node=new Node();

    new_node->data=new_data;

    new_node->next=(*head_ref);
//    cout<<*head_ref<<endl;
    (*head_ref) = new_node;
//    cout<<*/*head_ref*/<<endl;
    printlist(new_node);

}

void Fromfront::insert(Fromfront::Node *prev_node, int new_data)
{
    if(prev_node==NULL){
        cout<<"previous node is can not null "<<endl;
        return;
    }

    Node *new_node=new Node();

    new_node->data=new_data;

    new_node->next=prev_node->next;

    prev_node->next=new_node;

    printlist(new_node);

}

void Fromfront::end(Fromfront::Node **head_ref, int new_data)
{

    Node *new_node = new Node();

    Node *last = *head_ref;

    new_node->data = new_data;

    new_node->next = NULL;

    if(*head_ref==NULL)
    {
        *head_ref=new_node;
        return;
    }
    while(last->next!=NULL)
    {
        last = last->next;
    }

    last->next = new_node;

    printlist(new_node);

    return;

}

void Fromfront::printlist(Fromfront::Node *node)
{
 while(node!=NULL){

     cout<<node->data<<"->";

     node=node->next;
 }
     cout<<endl;
}
