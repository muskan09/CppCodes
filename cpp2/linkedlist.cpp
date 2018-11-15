#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
}*root;
void ins(int d){
	node* t=new node();
	t->data=d;
	t->next=root;
	root=t;
	}
void insn(int b,int n){
	node* t1=new node();
	t1->data=b;
	t1->next=NULL;
	if(n==1){
		t1->next=root;
		root=t1;
	}else{
		node* t2=root;
		for(int i=0;i<n-2;i++){
			t2=t2->next;
		}
		t1->next=t2->next;
		t2->next=t1;
	}
}
void del(int n){
	node* t1=root;
	if(n==1){
		root=t1->next;
		free(t1);
		return;
	}
	for(int i=0;i<n-2;i++){
		t1=t1->next;
		}
		node* t2=t1->next;
		t1->next=t2->next;
		free(t2);
	
	}
void print(){
	node* t=root;
	cout<<"Linked List"<<endl;
	while(t!=NULL){
		cout<<t->data<<endl;
		t=t->next;
		}
	}
int main(){
	root=NULL;
	ins(1);
	ins(2);
	del(2);
	print();
	insn(3,2);
	insn(2,2);
	print();
	return 0;
}
