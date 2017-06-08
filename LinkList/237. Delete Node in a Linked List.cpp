//
//  main.cpp
//  test
//
//  Created by 蔡少凡 on 9/9/16.
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
    
    void deleteNode(ListNode* node) {
        if(node == NULL) return;
        node->val = node->next->val;
        node->next = node->next->next;
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
    
    s.deleteNode(node2);
    s.print(node);
    return 0;
}
