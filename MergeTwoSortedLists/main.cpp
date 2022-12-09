#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode *result = new ListNode();
    ListNode *next = result;
    while(list1 != nullptr && list2 != nullptr) {
        if(list1->val < list2->val) {
            next->next = list1;
            list1 = list1->next;
        } else {
            next->next = list2;
            list2 = list2->next;
        }
        next = next->next;
    }

    if(list1 != nullptr){
        next->next = list1;
    }

    if(list2 != nullptr){
        next->next = list2;
    }
    return result->next;
}

int main(){
    ListNode *first = new ListNode(1, new ListNode(2, new ListNode(4)));
    ListNode *second = new ListNode(1, new ListNode(3, new ListNode(4)));

    ListNode *result = mergeTwoLists(first, second);
    while(result != nullptr){
        std::cout << result->val << std::endl;
        result = result->next;
    }
}

