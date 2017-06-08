//
//  main.cpp
//  linklist
//
//  Created by 蔡少凡 on 10/1/16.
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
    
    ListNode *reverse(ListNode* head){
//        if(head == NULL)
//            return false;
//        else if(head->next == NULL)
//            return true;
        ListNode* prev = NULL,*temp;
        //head = head->next;
        while(head!=NULL){
            temp = head;
            head = head->next;
            temp->next = prev;
            prev = temp;
        }
        
        return prev;
    }
    
    //找到中间的值
    ListNode *findMiddle(ListNode* head){
        ListNode *slow,*fast;
        slow =head;fast = head;
        
        while(head!=NULL && fast->next!=NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
    
    bool isPalindrome(ListNode* head){
        if(head == NULL && head->next ==NULL)
            return true;
        
        ListNode *middle = findMiddle(head);
        ListNode *p = reverse(middle->next);
        while(p!=NULL){
            if(head->val != p->val)
                return false;
            head = head->next;
            p = p->next;
        }
        return true;
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
    node->next->next->next = new ListNode(2);
    node->next->next->next->next = new ListNode(1);
    //    ListNode *del_node = new ListNode(3);
    
    //   node->next->next->next->next= new ListNode(4);
    //    node->next->next->next->next->next = new ListNode(5);
    //    node->next->next->next->next->next->next = new ListNode(6);
    s.print(node);
    bool result = s.isPalindrome(node);
    cout << result <<endl;
    //node = s.findMiddle(node);
    
    return 0;
}
