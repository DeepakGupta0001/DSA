#include <iostream>
#include <vector>
#include <math.h>
#include <string>

using namespace std;

class node
{
public:
    int val;
    node *next;
    node() : val(0), next(NULL) {}
    node(int x) : val(x), next(NULL) {}
    node(int x, node *next) : val(x), next(next) {}
};


void display(node *&head){node *temp=head;
while(temp!=NULL){
cout<<temp->val<<endl;
temp=temp->next;
}}

void search(int n,node *&head){
    node *temp=head;int i=0;
    while(temp!=NULL){i++;
        if(temp->val==n){
            cout<<"found at : "<<i<<endl;
        }
        temp=temp->next;
    }
}

void make(node *&head){
    int n;
cin>>n;
cout<<"enter element : ";int l;
cin>>l;
node *e=new node(l);
head=e;
node *temp=head;
int k=n-1;
while(k--){
cin>>l;
node *f=new node(l);

temp->next=f;
temp=temp->next;


}}

void tdelete(int n,node *&head){
      node *temp=head;
      if(head->val==n){
    node *todelete=head;
    head=head->next;
    delete todelete;    
        return;
      }
    while(temp->next->val!=n){
        
        temp=temp->next;
    }
    node *todelete=temp->next;
    temp->next=temp->next->next;
delete todelete;
}

 void insert(int i,int n,node *&head){
    if(i==1){node *e=new node(n);
    e->next=head;
    head=e;
return;

    }
node *temp=head;int j=1;
while(temp!=NULL){
    
    j++;
    if(j==i){break;}
    temp=temp->next;
}
node *e=new node(n);
node *l=temp->next;
    e->next=l;
    temp->next=e;
 }

int main()
{
 //   node *head;
//    node *l=new node(2);
 //   head=l;
//node *l1=new node(3);
// head->next=l1;
//    cout<<head->val<<head->next->val;
node *head=NULL;
cout<<"enter number of time of run :";
int q;
cin>>q;

while(q--){
    
    cout<<"enter type of query :";
    int l;
    cin>>l;
    if(l==1){
cout<<"enter number of element : ";

make(head);


    }
else if(l==2){
display(head);}

else if(l==3){int val;
    int i;
    cout<<"enter the index : ";
    cin>>i;
    cout<<"enter value  :";

    cin>>val;
    insert(i,val,head);}
else if(l==4){int val;
    cout<<"enter value : ";
    cin>>val;
 search(val,head);
}
else{int val;
    cout<<"enter value";
    cin>>val;
  tdelete(val,head);
  }




}
    return 0;
}