//
//  main.cpp
//  test
//
//  Created by 蔡少凡 on 9/9/25.
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

//    ListNode* reverseList(ListNode *head){
//        int a[8000];
//        ListNode *p = head;
//        int count =0;
//        while(p!=NULL){
//            a[count] = p->val;
//            p=p->next;
//            count++;
//        }
//        p=head;
//        int count2 =0;
//        while(p!=NULL){
//            p->val = a[count-1-count2];
//            p = p->next;
//            count2++;
//        }
//        return head;
//    }
    
    ListNode* reverseList(ListNode *head){
        ListNode *prev = NULL;
        ListNode *temp;
        while(head!=NULL){
            temp = head->next;
            head->next =prev;
            prev = head;
            head = temp;
        }
        return prev;
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
    node->next->next->next = new ListNode(4);
    
//    ListNode *del_node = new ListNode(3);
    
//   node->next->next->next->next= new ListNode(4);
//    node->next->next->next->next->next = new ListNode(5);
//    node->next->next->next->next->next->next = new ListNode(6);
    s.print(node);
    node = s.reverseList(node);
    
    s.print(node);
    return 0;
}
