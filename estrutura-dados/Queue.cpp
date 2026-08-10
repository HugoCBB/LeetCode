#include<iostream>

using namespace std;
template <typename T>
class Queue {
private:

    struct QueueNode {
        T element;
        QueueNode* next;
    
        QueueNode(T e, QueueNode* n) {
            element = e;
            next = n;
        }
        
        ~QueueNode() {}
        
    };
    
    QueueNode* head;
    QueueNode* tail;
        
public:
    Queue() {
        head = nullptr;
        tail = nullptr;
    }
    ~Queue() {
        while(head != nullptr){
            QueueNode* tmp = head;
            head = head->next;
            delete tmp;
        }
        tail = nullptr;
    }
    
    bool isEmpty() {
        return (head==nullptr);
    }
    
    void enqueue(T element){
        QueueNode* newElement = new QueueNode(element, nullptr);
        if(isEmpty()){
            head = newElement;
            tail = newElement;
        } else {
            tail->next = newElement;
            tail = newElement;
        }
    }
};


int main() {
    Queue<int> q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    
    cout << q.isEmpty() << "\n";
    return 0;
}
