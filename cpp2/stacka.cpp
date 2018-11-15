#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
}*root;
void ins(int d){
	node* t=new node();
	t->data=d;
	t->next=root;
	root=t;
}
void del(){
	node* t1=root;
	root=t1->next;
	delete(t1);
}
void print(){
	node* t2=root;
	while(t2!=NULL){
		cout<<t2->data<<endl;
		t2=t2->next;
	}
}
int main(){
	root=NULL;
	ins(1);
	ins(2);
	ins(3);
	ins(4);
	ins(5);
	print();
	del();
	del();
	print();
	return 0;
}
