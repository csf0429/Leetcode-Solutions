//
//  main.cpp
//  test
//
//  Created by 蔡少凡 on 9/25/16.
//  Copyright © 2016 cai. All rights reserved.
//

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL){}
};

class Soulution{
public:
//    ListNode *removeElements(ListNode *head,int val){
//        ListNode *p ;
//        ListNode *q =head;
//        while(head!=NULL){
//            if(head->val==val){
//                p = head;
//                head = head->next;
//                delete p;
//            }else{
//                while(q->next != NULL){
//                    if(q->next->val == val){
//                        p=q->next;
//                        q->next = p->next;
//                        delete p;
//                    }else
//                        q=q->next;
//                }
//            }
//        }
//        return head;
//    }
    
    ListNode *removeElements(ListNode *head, int val) {
        ListNode *dummy = new ListNode(0);
        if(head == NULL){
            return head;
        }
        dummy->next = head->next;
        head->next = dummy;
        dummy->val = head->val;
        ListNode *listhead = head;
        while (head->next != NULL) {
            if (head->next->val == val) {
                head->next = head->next->next;
            } else {
                head = head->next;
            }
        }
        return listhead->next;
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
//    node->next = new ListNode(1);
//    node->next->next = new ListNode(6);
//    node->next->next->next = new ListNode(3);
//    node->next->next->next->next= new ListNode(4);
//    node->next->next->next->next->next = new ListNode(5);
//    node->next->next->next->next->next->next = new ListNode(6);
    s.print(node);
    
    ListNode *list = s.removeElements(node, 2);
    s.print(list);
    return 0;
}
