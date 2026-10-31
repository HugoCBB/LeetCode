#include<iostream>
#include<vector>

template <typename T>
class BubleSort {
    public:
    std::vector<T> bublesort(std::vector<T> arr) {
        if (arr.size() - 1 <= 0 ) return arr;

        int aux = 1;
        for(int i = 0; i < arr.size() - 1; i++) {
            if (arr[aux] < arr[i]) {
                T temp = arr[i];
                arr[i] = arr[aux];
                arr[aux] = temp;
            }
            aux++;
            
        }
        return arr;
    }
};
int main() {
    std::vector<int> n = {3,1,2,1,9,10,0,2,19,0,8};
    BubleSort<int> b;
    std::vector<int> arr = b.bublesort(n);
    for(int i: arr) {
        std::cout << i;
    }
    return 0;
}