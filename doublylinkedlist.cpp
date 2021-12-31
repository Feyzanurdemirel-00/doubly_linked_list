#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class node{
	public:
	int data;
	class node *next;
	class node *prev;
		
};
class node *head,*tail;


void ekle(int x){
	
	class node *temp=(node*)malloc(1*sizeof(node));
	temp->data=x;
	temp->next=NULL;
	temp->prev=NULL;
	
	if(!head){
		head=temp;
		tail=temp;
		
		return;
	}
	tail->next=temp;

	temp->prev=tail;
		tail=temp;
	return;
}

void goster(){
	
	class node *temp=head;
	
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->next;
		
	}
}


void sil(int x){
	
	class node *temp=head;
	class node *temp2=NULL,*temp3=NULL;
	temp2=temp->prev;
	temp3=temp->next;
	
	if(head->data==x){
		head=head->next;
		free(temp);
	}
	temp2->next=temp3;
	temp3->prev=temp2;
	
	
}


int main(){
	
	
	ekle (1);
	ekle(4);
	goster();

	return 0;

}
