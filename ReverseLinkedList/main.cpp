#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* reverseList(ListNode* head) {
    if (head == NULL || head->next == NULL) return head;
    ListNode* next = head->next;
    ListNode* prev = head;
    ListNode* curr = head;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head->next = NULL;
    head = prev;
    return head;
}

int main(){
    ListNode head = ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));

    for(ListNode *result = reverseList(&head); result != NULL; result = result->next){
        std::cout << result->val << " ";
    }
}