#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr) {
            return nullptr;
        }
        if(head->next == nullptr) {
            return head;
        }

        ListNode* dummy = new ListNode(0);
        dummy -> next = head;

        ListNode* prev = dummy;
        ListNode* first = head;
        ListNode* second = head->next;

        while(first != nullptr && second != nullptr) {
            //Swapping Nodes
            prev -> next = second;
            first->next = second->next;
            second->next = first;

            prev = first;

            first = first->next;
            if(first!=nullptr) {
                second = first->next;
            }
        }
        head = dummy->next;
        delete dummy;

        return head;
    }
};