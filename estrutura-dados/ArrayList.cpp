#include<iostream>
#include<stdexcept>

using namespace std;

template <typename T>
class ArrayList {
private:
    T* elements;
    int size;
    int capacity;
    
    void increase() {
        // Performance O(n)
        T* newElements = new T[this->capacity *= 2];
        for (int i = 0; i < this->size; i++){
            newElements[i] = elements[i];
        }
        delete[] elements;
        this->elements = newElements;
    }

public:
    ArrayList(int capacity){
        elements = new T[capacity];
        this->capacity = capacity;
        size = 0;

    };
    ~ArrayList(){
        delete[] elements;
    };

    bool isEmpty() {
        return (size == 0);
    }

    void add(T element){
        // Performance sempre O(1) toda vez que tive espaco dentro do array
        if (size == capacity) {
            increase();
        }
        elements[size] = element;
        size++;
    }
    
    void add(int index, T element) {
        // Performance sempre O(1) toda vez que tive espaco dentro do array
        if (index > size || index < 0) throw out_of_range("Index " + to_string(index) + " is out of bounds.");
        if(size == capacity) increase();
        elements[index] = element;
    }
    
    T get(int index){
        // Performance O(1)
        if (index > size || index < 0) throw out_of_range("Index " + to_string(index) + " is out of bounds.");
        return elements[index];
    }
    
    void remove(int index) {
        // Performance O(1) quando e o ultimo elemento
        // Performance O(n)
        if (index > size || index < 0) throw out_of_range("Index " + to_string(index) + " is out of bounds.");
        
        if (index == size - 1) {
            elements[index] = T();
            size--;
        } else {
            for (int i = index; i < size - 1; i++) {
                elements[i] = elements[i+1];
            }
            elements[size - 1] = T();
            size--;
        }
    }
    
    T indexOf(int index) {
        // Performance O(1)
        if (index > size || index < 0) throw out_of_range("Index " + to_string(index) + " is out of bounds.");
        return elements[index];
    }

    void print(){
        // Performance O(n)
        for (int i = 0; i < size; i++) cout << elements[i] << " " << endl;
    }

};




int main(){
    ArrayList<int> arr(1);
    arr.add(1);
    arr.add(2);
    arr.add(3);
    arr.add(4);
    arr.print();
    cout << "==============" << endl;
    arr.remove(2);
    arr.print();
    cout << "==============" << endl;
    cout << arr.indexOf(1) << endl;


    
    return 0;
}