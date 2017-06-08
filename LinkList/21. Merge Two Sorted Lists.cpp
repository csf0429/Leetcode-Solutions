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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(0);
        ListNode *prev = head;
        while(l1!=NULL&&l2!=NULL){
            if(l1->val<=l2->val){
                prev->next = l1;
                l1 = l1->next;
            }else{
                prev->next = l2;
                l2 = l2->next;
            }
            prev = prev->next;
        }
        if(l1==NULL)
            prev->next = l2;
        else
            prev->next = l1;
        return head->next;
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
    ListNode *node1 = new ListNode(1);
    node1->next = new ListNode(3);
    node1->next->next = new ListNode(5);
    node1->next->next->next = new ListNode(7);
    node1->next->next->next->next = new ListNode(9);
    
    ListNode *node2 = new ListNode(2);
    node2->next = new ListNode(4);
    node2->next->next = new ListNode(6);
    node2->next->next->next = new ListNode(8);
    node2->next->next->next->next = new ListNode(10);
    
    //   node->next->next->next->next= new ListNode(4);
    //    node->next->next->next->next->next = new ListNode(5);
    //    node->next->next->next->next->next->next = new ListNode(6);
    ListNode *node;
    node = s.mergeTwoLists(node1, node2);
    //node = s.reverse(node);
    s.print(node);
    //cout<< result <<endl;
    
    
    return 0;
}
