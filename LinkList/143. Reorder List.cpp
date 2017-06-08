//
//  main.cpp
//  linklist
//
//  Created by 蔡少凡 on 10/9/16.
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
        ListNode *prev = NULL,*temp;
        while(head!=NULL){
            temp = head;
            head = head->next;
            temp->next = prev;
            prev = temp;
        }
        return prev;
    }
    
    ListNode *findMiddle(ListNode *head){
        ListNode *slow,*fast;
        slow = head;fast = head->next;
        while(fast!=NULL &&fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
    void reorderList(ListNode *head){
        if(head == NULL){
            return;
        }
        ListNode *middle,*p;
        p = head;
        middle = findMiddle(head);
        ListNode *prev = new ListNode(0);
        ListNode *tail = reverse(middle->next);
        middle->next = NULL;
        while(tail!=NULL&&p!=NULL){
            prev->next = p;
            p = p->next;
            prev->next->next =tail;
            tail = tail->next;
            prev = prev->next->next;
        }
        if(p!=NULL){
            prev->next = p;
        }
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
  //  ListNode *node =NULL;
//    ListNode *node1 = NULL;
//    node->next = new ListNode(3);
//    node->next->next = new ListNode(5);
    ListNode *node1 = new ListNode(1);
    node1->next = new ListNode(2);
    node1->next->next = new ListNode(3);
//    node1->next->next->next = new ListNode(4);
    
//    ListNode *node2 = new ListNode(2);
//    node2->next = new ListNode(4);
//    node2->next->next = new ListNode(6);
//    node2->next->next->next = new ListNode(8);
//    node2->next->next->next->next = new ListNode(10);
    
    //   node->next->next->next->next= new ListNode(4);
    //    node->next->next->next->next->next = new ListNode(5);
    //    node->next->next->next->next->next->next = new ListNode(6);
    
    //node = s.reverse(node);
    s.reorderList(node1);
    s.print(node1);
    //cout<< result <<endl;
    
    
    return 0;
}
