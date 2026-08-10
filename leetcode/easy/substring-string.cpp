#include<iostream>
#include<string>
using namespace std;

int main() {
    string s = "acbab";
    string target = "aba";
    int aux = 0;

    for (size_t i = 0; i < s.size(); i++) {
        if (target[aux] == s[i]) {
            aux++;
        } else { 
            aux = 0;
        }

        if (aux == (int)target.size()) {
            cout << "Substring encontrada" << '\n' << target;
        }
        
    }
    
}