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
    bool hasCycle(ListNode *head){
        ListNode *slow,*fast;
        slow = fast = head;
        
        while(fast!=NULL&&fast->next!=NULL ){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                return true;
            }
        }
        return false;
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
//    ListNode *node2 = new ListNode(2);
//    node->next = node2;
//    node->next->next = new ListNode(2);
//    node->next->next->next = new ListNode(3);
//    node->next->next->next->next = new ListNode(3);
    //    ListNode *del_node = new ListNode(3);
    
    //   node->next->next->next->next= new ListNode(4);
    //    node->next->next->next->next->next = new ListNode(5);
    //    node->next->next->next->next->next->next = new ListNode(6);
    bool result = s.hasCycle(node);
    cout<< result <<endl;
    
    
    return 0;
}
