#include<iostream>
#include<vector>
#include<math.h>
#include<string>

using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

ListNode *insertathead(ListNode *&head,int v){
    ListNode *a1=new ListNode(v);
    head=a1;
return head;
}
  ListNode *insert(){
    ListNode *head=nullptr;
    
    cout<<"enter the number of element :";
    int e;
    cin>>e;
  ListNode *temp;
    while(e--){int v;
        cout<<"enter the element :";
        cin>>v;
        if(head==nullptr){
          head=insertathead(head,v);
          temp=head;
          continue;
}
        ListNode *a=new ListNode(v);
      temp->next=a;
        temp=temp->next;
    }
    return head;
}

void display(ListNode *&head){ListNode *temp=head;
while(temp!=nullptr){
cout<<temp->val<<endl;
temp=temp->next;
}}

void call(ListNode *&h,ListNode *&t){
   if(h==t){
    return;
   }
    call(h->next,t);
    h->next->next=h;
h->next=nullptr;

  
}
    ListNode *reverseKGroup(ListNode* &head, int k) {
        if(head==nullptr){return nullptr;}
        ListNode *t;
      int l=1;
      ListNode *temp=head;
      while(l!=k && temp!=nullptr){

          l++;temp=temp->next;
      }
      if(l==k && temp!=nullptr){
      t=reverseKGroup(temp->next,k);
      }
      else{
          return head;
      }
call(head,temp);

head->next=t;


        return temp;
    }

int main(){
    ListNode *head=insert();
    cout<<"element are :";
display(head);
cout<<"enter k :";
int k;
cin>>k;
head=reverseKGroup(head,k);
cout<<"reverse element are :";
display(head);
    
    return 0;
}