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
    ListNode* removeElements(ListNode* head, int val) {
        // Handle the case when the head node itself has the target value
        while (head != nullptr && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp; // Free the memory of the removed node
        }
        
        // Traverse the list and remove nodes with the target value
        ListNode* current = head;
        while (current != nullptr && current->next != nullptr) {
            if (current->next->val == val) {
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp; // Free the memory of the removed node
            } else {
                current = current->next;
            }
        }
        
        return head;
    }
};

int main() {
    // Create a sample linked list
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(6);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next = new ListNode(6);
    
    // Print the original linked list
    std::cout << "Original List: ";
    ListNode* current = head;
    while (current != nullptr) {
        std::cout << current->val << " ";
        current = current->next;
    }
    std::cout << std::endl;
    
    // Create an instance of the Solution class
    Solution solution;
    
    // Remove elements with value 6
    int valToRemove = 6;
    head = solution.removeElements(head, valToRemove);
    
    // Print the modified linked list
    std::cout << "Modified List: ";
    current = head;
    while (current != nullptr) {
        std::cout << current->val << " ";
        current = current->next;
    }
    std::cout << std::endl;
    
    // Free the memory allocated for the linked list
    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
    
    return 0;
}