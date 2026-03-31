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
        T* newElements = new T[this->capacity *= 2];
        for (int i = 0; i < this->size; i++){
            newElements[i] = elements[i];
        }
        delete[] elements;
        this->elements = newElements;
    }

public:
    ArrayList(int capacity){
        this->elements = new T[capacity];
        this->capacity = capacity;
        this->size = 0;

    };
    ~ArrayList(){
        delete[] elements;
    };

    bool isEmpty() {
        return (this->size == 0);
    }

    void add(T element){
        if (this->size == this->capacity) {
            increase();
        }
        this->elements[this->size] = element;
        this->size++;
    }

    void add(int index, T element) {
        if (index > this->size || index < 0) throw out_of_range("Index " + to_string(index) + " is out of bounds.");
        if(this->size == this->capacity) increase();
        this->elements[index] = element;
    }

    void print(){
        for (int i = 0; i < size; i++)
        {
            cout << this->elements[i] << " " << endl;
        }
    }


};




int main(){
    ArrayList<int>* arr = new ArrayList<int>(1);
    cout << arr->isEmpty() << endl;
    arr->add(10);
    arr->add(10);
    arr->add(10);
    arr->add(10);
    arr->print();
    cout << "==========" << endl; 
    arr->add(2,2);
    arr->print();
    
    return 0;
}