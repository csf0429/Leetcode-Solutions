//
//  main.cpp
//  linklist
//
//  Created by 蔡少凡 on 10/4/16.
//  Copyright © 2016 cai. All rights reserved.
//


#include <iostream>
using namespace std;
#include <string>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL){}
};

class Soulution{
public:
    ListNode *reverse(ListNode *head){
        ListNode *prev,*temp;
        prev = NULL;
        while(head!=NULL){
            temp = head;
            head = head->next;
            temp->next = prev;
            prev = temp;
        }
        return prev;
    }
    ListNode *removeNthFromEnd(ListNode*head,int n){
        if(head ==NULL)
            return head;
        head = reverse(head);
        if(n==1)
            return reverse(head->next);
        ListNode *p = head;
        while(--n>1){
            p = p->next;
        }
        ListNode *node=p->next;
        p->next = p->next->next;
        delete(node);
        return reverse(head);
    }
    
    void print(ListNode *head){
        while(head!=NULL){
            cout<< head->val<<" ";
            head = head->next;
        }
        cout << endl;
    }
    
};

int main() {
    Soulution s;
    ListNode *node = new ListNode(1);
    ListNode *node2 = new ListNode(2);
    node->next = node2;
    node->next->next = new ListNode(3);
//    node->next->next->next = new ListNode(3);
//    node->next->next->next->next = new ListNode(3);
    
    //   node->next->next->next->next= new ListNode(4);
    //    node->next->next->next->next->next = new ListNode(5);
    //    node->next->next->next->next->next->next = new ListNode(6);
    s.print(node);
    node = s.removeNthFromEnd(node, 1);
    //node = s.reverse(node);
    s.print(node);
    //cout<< result <<endl;
    
    
    return 0;
}
