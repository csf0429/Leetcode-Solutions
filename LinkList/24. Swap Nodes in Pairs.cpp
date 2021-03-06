//
//  main.cpp
//  linklist
//
//  Created by 蔡少凡 on 10/5/16.
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
    ListNode* swapPairs(ListNode* head){
        ListNode *prev = head;
        int tmp;
        while(prev!=NULL && prev->next !=NULL){
            tmp = prev->val;
            prev->val = prev->next->val;
            prev->next->val = tmp;
            prev = prev->next->next;
        }
        return head;
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
    node->next = new ListNode(3);
    node->next->next = new ListNode(5);
    node->next->next->next = new ListNode(7);
    node->next->next->next->next = new ListNode(9);
    
//    ListNode *node2 = new ListNode(2);
//    node2->next = new ListNode(4);
//    node2->next->next = new ListNode(6);
//    node2->next->next->next = new ListNode(8);
//    node2->next->next->next->next = new ListNode(10);
    
    //   node->next->next->next->next= new ListNode(4);
    //    node->next->next->next->next->next = new ListNode(5);
    //    node->next->next->next->next->next->next = new ListNode(6);
    node = s.swapPair(node);
    //node = s.reverse(node);
    s.print(node);
    //cout<< result <<endl;
    
    
    return 0;
}
