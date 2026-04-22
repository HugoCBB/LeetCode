#include<iostream>
#include <string>
#include <cmath> 

using namespace std;

void convertBase(string num, int base){
    int aux = 0, sum = 0;

    for(int i = num.size() - 1; i > 0; i--){
        sum += (num[i] - '0') * pow(base, aux);
        aux++;
    }

    cout << sum << endl;
    
}


int main(){
    convertBase("237",8);
    return 1;
}
