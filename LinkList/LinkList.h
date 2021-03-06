//
//  linkList.h
//
//  Created by Kiarash on 12/2/17.
//  Edited by Sepehr on 12/17/17.
//  Copyright © 2017 Kiarash. All rights reserved.
//

#ifndef linkList_h
#define linkList_h

using namespace std;
typedef bitset<8> byte;

template <typename T>
struct node
{
    T data;
    node *next;
    
    ~node(){
        data = NULL;
    }
};

template <class T>
class list
{
private:
    node<T> *head, *tail;
public:
    list();
    ~list();

    void append(T value);
    void display();
    void insertStart(T value);
    void addNewValueAtIndex(int pos, T value);
    void setValueForIndex(int index, T value);
    void deleteFirst();
    void deleteLast();
    void deleteValueAtIndex(int pos);
    T valueForIndex(int index);
    int length();
};





template <class T>
list<T>::list(){
    head=NULL;
    tail=NULL;
}

template <class T>
list<T>::~list(){
    node<T> *current;
    node<T> *previous;
    current=head;
    while(current!=NULL)
    {
        previous=current;
        current=current->next;
        delete previous;
    }
    current = NULL;
    previous = NULL;
    head = NULL;
    tail = NULL;
}

template <class T>
void list<T>::append(T value){
    node<T> *temp=new node<T>;
    temp->data=value;
    temp->next=NULL;
    
    if(head==NULL){
        head=temp;
        tail=temp;
        temp=NULL;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
}

template <class T>
void list<T>::display(){
    node<T> *temp=new node<T>;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"\t";
        //        Serial.print(temp->data);
        //        Serial.print(" ");
        temp=temp->next;
    }
    //    Serial.print("\n");
    temp = NULL;
}

template <class T>
void list<T>::insertStart(T value){
    node<T> *temp=new node<T>;
    temp->data=value;
    temp->next=head;
    head=temp;
}


template <class T>
void list<T>::addNewValueAtIndex(int pos, T value){
    
    /// in case of insert start
    if (pos == 0){
        insertStart(value);
        return;
    }
    
    node<T> *pre=NULL;
    node<T> *cur;
    node<T> *temp=new node<T>;
    cur=head;
    for(int i=0;i<pos;i++)
    {
        pre=cur;
        cur=cur->next;
    }
    temp->data=value;
    pre->next=temp;
    temp->next=cur;
}

template <class T>
void list<T>::setValueForIndex(int index, T value){
    
    node<T> *pre;
    node<T> *cur;
    cur=head;
    
    for(int i=0;i<index;i++){
        pre=cur;
        cur=cur->next;
    }
    
    
    cur->data = value;
}

template <class T>
void list<T>::deleteFirst(){
    node<T> *temp;
    temp=head;
    head=head->next;
    delete temp;
}

template <class T>
void list<T>::deleteLast(){
    node<T> *current;
    node<T> *previous=NULL;
    current=head;
    while(current->next!=NULL)
    {
        previous=current;
        current=current->next;
    }
    tail=previous;
    previous->next=NULL;
    delete current;
}

template <class T>
void list<T>::deleteValueAtIndex(int pos){
    node<T> *current;
    node<T> *previous=NULL;
    current=head;
    for(int i=0;i<pos;i++)
    {
        previous=current;
        current=current->next;
    }
    previous->next=current->next;
    delete current;
}

template <class T>
T list<T>::valueForIndex(int index){
    node<T> *temp=new node<T>;
    temp=head;
    
    for(int i=0;i<index;i++){
        temp=temp->next;
    }
    
    return temp->data;
}

template <class T>
int list<T>::length(){
    node<T> *current;
    current=head;
    int count = 0;
    while(current!=NULL)
    {
        count++;
        current=current->next;
    }
    current = NULL;
    return count;
}


#endif /* linkList_h */
