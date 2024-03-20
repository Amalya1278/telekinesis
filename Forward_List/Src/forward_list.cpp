#include "forward_list.h"
#ifndef FORWARD_LIST_CPP
#define FORWARD_LIST_CPP
#include<iostream>

template <typename T>
Forward_list<T>::Forward_list(){
	head=nullptr;
}
template <typename T>
Forward_list<T>::~Forward_list(){
	clear();
}
template <typename T>
Forward_list<T>::Forward_list(Forward_list<T>&& rhv)
:head{rhv.head}
{
	rhv.head=nullptr;
}
template <typename T>
Forward_list<T>::Forward_list(const Forward_list<T>& rhv)
:head{nullptr}
{
	Node<value_type>* ptr=rhv.head;
	while(ptr!=nullptr){
		push_back(ptr->data);
		ptr=ptr->next;
	}
}
template <typename T>
Forward_list<T>& Forward_list<T>::operator=(Forward_list<T>&& rhv){
	if(this!=&rhv){
		this->clear();
		head=rhv.head;
		rhv.head=nullptr;
	}
	return *this;
}
template <typename T>
void Forward_list<T>::clear(){
	while(head!=nullptr){
		Node<value_type>* ptr=head;
		head=head->next;
		delete ptr;
	}
}
template <typename T>
void Forward_list<T>::traverse(){
	Node<value_type>* ptr=head;
	while(ptr!=nullptr){
		std::cout<<ptr->data;
		ptr=ptr->next;
		std::cout<<" ";
	}
}
template<typename T>
void Forward_list<T>::empty(){
	if(head==nullptr){
		std::cout<<"lsit is empty";
	}
	else {std::cout<<"list is not empty";
	}
}
template <typename T>
void Forward_list<T>::pop_back(){
	if(head==nullptr){
		return;
	}
	else if(head->next==nullptr){
		delete head;
		head=nullptr;
	}
	else{
		Node<value_type>* ptr=head;
		while(ptr->next->next!=nullptr){
			ptr=ptr->next;
		}
		delete ptr->next;
		ptr->next=nullptr;
	}
	return;
}
template<typename T>
void Forward_list<T>::push_back(const_referance rhv){
//	Node<T>* ptr=head;
	Node<value_type>* temp=new Node<value_type>;
	temp->data=rhv;
	temp->next=nullptr;
	if(head==nullptr){
		head=temp;
	}
	else{
		Node<value_type>* ptr=head;
    	while(ptr->next!=nullptr){
	    	ptr=ptr->next;
    	}
    	ptr->next=temp;
	}
}

template <typename T>
void Forward_list<T>::push_front(const_referance rhv){
	Node<value_type>* ptr=new Node<value_type>;
	ptr->data=rhv;
	ptr->next=head ;
	head=ptr;
}
template <typename T>
void Forward_list<T>::pop_front(){
	if(head==nullptr){
		return;
	}else{
	Node<value_type>* ptr=head;
	head=head->next;
	delete ptr;

}
return ;
}
template <typename T>
void Forward_list<T>::insert(size_type p,const_referance rhv){
	Node<value_type>* ptr=new Node<value_type>;
	ptr->data=rhv;
	ptr->next=nullptr;
	Node<value_type>* tmp=head;
	p--;
	while(p!=1){
		tmp=tmp->next;
		p--;
	}
	ptr->next=tmp->next;
	tmp->next=ptr;
}
template <typename T>
void Forward_list<T>::remove(const_referance p){
	 if (head == nullptr) {
            return;
        }  
		//p is in head
     if (head->data == p) {
            Node<value_type>* temp = head;
            head = head->next;
            delete temp;
            return;
	 }
        Node<value_type>* prev = nullptr;
        Node<value_type>* current = head;
     while (current != nullptr && current->data != p) { //loop for traverse
            prev = current; //to keep the previous node
            current = current->next;//to the next node
        }

        if (current == nullptr) {  //if the p is not found after loop
                 return;
        }

        prev->next = current->next;
        delete current;
    }








#endif





