#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

int main() {
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);

    return 0;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* dummy = new ListNode(0);
    ListNode* curr = dummy;
    int carry = 0;

    while (l1 != nullptr || l2 != nullptr || carry != 0) {
        int a = (l1 != nullptr) ? l1->val : 0;
        int b = (l2 != nullptr) ? l2->val : 0;

        int soma = a + b + carry;
        carry = soma / 10;

        curr->next = new ListNode(soma % 10);
        curr = curr->next;

        if (l1 != nullptr) l1 = l1->next;
        if (l2 != nullptr) l2 = l2->next;
    }

    return dummy->next;
}