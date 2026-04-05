#ifndef ARRAY_QUEUE_HPP
#define ARRAY_QUEUE_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class ArrayQueue {
private:
    T* array;
    int capacity;
    int frontIndex;
    int rearIndex;
    int count;

    void resize() {
        int newCapacity = capacity * 2;
        T* newArray = new T[newCapacity];
        for (int i = 0; i < count; i++) {
            newArray[i] = array[(frontIndex + i) % capacity];
        }
        delete[] array;
        array = newArray;
        frontIndex = 0;
        rearIndex = count;
        capacity = newCapacity;
    }

public:
    ArrayQueue(int initialCapacity = 10) {
        capacity = initialCapacity;
        array = new T[capacity];
        
        frontIndex = 0;
        rearIndex = 0;
        count = 0;
    }

    ~ArrayQueue() {
        delete[] array;
    }

    void enqueue(T elem) {
        if (count == capacity) {
            resize();
        }
        array[rearIndex] = elem;
        rearIndex = (rearIndex + 1) % capacity;
        count++; 
    }

    T dequeue() {
        if (count == 0) {
            throw std::out_of_range("Queue is empty");
        }
        T elem = array[frontIndex];
        frontIndex = (frontIndex + 1) % capacity;
        count--;
        return elem;
    }

    void empty() {
        frontIndex = 0;
        rearIndex = 0;
        count = 0;
    }

    void print() const {
        for (int i = 0; i < count; i++) {
            std::cout << array[(frontIndex + i) % capacity] << "\n";
        }
    }
    
    int size() const {
        return count;
    }
};

#endif
