#include<iostream>

using namespace std;

template <typename T>
class LinkedList {

private:
    struct ListNode {
        T elements;
        ListNode* next;

        ListNode(T e) {
            elements = e;
            next = nullptr;
        }
        ListNode(T e, ListNode* n) {
            elements = e;
            next = n;
        }
        ~ListNode(){};
    };
    
    ListNode* head;
    ListNode* tail;
    int size; 
    
public:

    LinkedList(){
        size = 0;
        tail = nullptr;
        head = nullptr;
    }
    ~LinkedList(){
        while (head != nullptr) {
            ListNode* tmp = head;
            head = head->next;
            delete tmp;
        }
        
    }

    bool isEmpty() return (size == 0);

    void add(T element) {
        ListNode* newElement = new ListNode(element);
        if (head == nullptr) {
            head = newElement;
        } else {
            tail->next = newElement;
        }
        tail = newElement;
        size++;
    }


    void print() {
        ListNode* current = head;
        while (current != nullptr)
        {
            cout << current->elements << endl;
            current = current->next;
        }
        
    }
 };


int main() {
    LinkedList<int> li;
    li.add(1);
    li.add(2);
    li.add(3);
    li.print();
    return 0;
}

