#include<iostream>
#include<vector>
#include<math.h>
#include<string>

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

node *insertathead(node *&head,int v){
    node *a1=new node(v);
    head=a1;
return head;
}

node *insert(){
    node *head=NULL;
    
    cout<<"enter the number of element :";
    int e;
    cin>>e;
  node *temp;
    while(e--){int v;
        cout<<"enter the element :";
        cin>>v;
        if(head==NULL){
          head=insertathead(head,v);
          temp=head;
          continue;
}
        node *a=new node(v);
      temp->next=a;
        temp=temp->next;
    }
    return head;
}

void display(node *&head){node *temp=head;
while(temp!=NULL){
cout<<temp->val<<endl;
temp=temp->next;
}}

node *reverse(node *&head){
    node *pre=NULL;
    node *curr=head;
    node *ne;
    while(curr!=NULL){
ne=curr->next;
curr->next=pre;
pre=curr;
curr=ne;

    }
    return pre;
}

int main(){
    node *head=insert();
    cout<<"element are :";
display(head);
head=reverse(head);
cout<<"reverse element are :";
display(head);
    return 0;
}