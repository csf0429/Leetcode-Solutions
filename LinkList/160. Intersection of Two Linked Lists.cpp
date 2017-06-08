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
    ListNode *getIntersectionNode(ListNode *headA,ListNode *headB){
        if(headA == NULL || headB ==NULL)
            return NULL;
        ListNode *pa,*pb;
        pa = headA;pb = headB;
        while(pa!=NULL||pb!=NULL){
            if(pa==NULL)
                pa = headB;
            if(pb==NULL)
                pb = headA;
            if(pa==pb)
                return pa;
            pa=pa->next;
            pb=pb->next;
        }
        return NULL;
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
    ListNode *node1 = NULL;
//    node->next = new ListNode(3);
//    node->next->next = new ListNode(5);
//    ListNode *node1 = new ListNode(2);
//    node1->next = new ListNode(4);
//    node1->next->next = new ListNode(6)
//    ListNode* intersection = new ListNode(6);
//    node1->next->next->next = intersection;
//    node->next->next->next = intersection;
//    node->next->next->next->next = new ListNode(10);
    
//    ListNode *node2 = new ListNode(2);
//    node2->next = new ListNode(4);
//    node2->next->next = new ListNode(6);
//    node2->next->next->next = new ListNode(8);
//    node2->next->next->next->next = new ListNode(10);
    
    //   node->next->next->next->next= new ListNode(4);
    //    node->next->next->next->next->next = new ListNode(5);
    //    node->next->next->next->next->next->next = new ListNode(6);
    ListNode *inter = s.getIntersectionNode(node1, node);
    //node = s.reverse(node);
    s.print(node);
    cout<<inter->val<<endl;
    //cout<< result <<endl;
    
    
    return 0;
}
