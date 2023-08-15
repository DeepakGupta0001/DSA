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
 
    
    ListNode* partition(ListNode* head, int x) {
        
        ListNode* small = new ListNode(-1);
        ListNode* large = new ListNode(-1);
        ListNode* small_head = small;
        ListNode* large_head = large;
        
        while (head){
            if (head->val < x){
                small->next = head;
                small = small -> next;
                head = head -> next;
                small->next = NULL;
            }
            else{
                large->next = head;
                large = large -> next;
                head = head -> next;
                large -> next = NULL;
            }
        }
        small -> next = large_head -> next;

        return small_head -> next;
    }


int main(){ListNode *head=insert();
    cout<<"element are :";
display(head);
cout<<"enter k :";
int k;
cin>>k;
head=partition(head,k);
cout<<"element are :";
display(head);
    
    return 0;
}