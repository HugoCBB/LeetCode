#include<iostream>
#include<string>

using namespace std;

int main(){
    string s = "acbab";
    string target = "cba";
    int aux = 0;

    for(size_t i = 0; i < s.length(); i++) {
        if (s[i] == target[aux]) {
            aux++;
        } else {
            i -= aux;
            aux = 0;
        }

        if (aux == (int)target.length()) {
            int pos = i - target.length() + 1;
            cout << "Substring encontrada na posicao: " << pos << endl;
            aux = 0; 
        }
    }

    return 0;
}