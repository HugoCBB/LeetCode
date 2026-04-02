#include<iostream>


#define endl << "\n"

using namespace std;

void solve() {
    int k = 0, a1, b1, a2, b2, roundBob;

    cin >> k;
    cin >> a1 >> b1;
    cin >> a2 >> b2;    
    int totB = b1 + b2;
    
    int totA = a1 + a2;    
    // Melhor cenario
    int winBob = totB + k;
    // Pior cenario
    int loserAlice = totA + 0;
        
    if (winBob > loserAlice) {
        cout << "YES";
    } else if(winBob == loserAlice) {
        roundBob = 0;
        if(b1 > a1) roundBob++;
        if(b2 > a2) roundBob++;
        // Cenario de desempate
        /*
            
        Se bob pontuar k pontos e alice pontuar 0 bob ira ganhar
        pelo fato de sempre ser k>=1
       */             
        if(k > 0) roundBob++;
        if (roundBob >= 2) {
            cout << "YES" endl;
        } 
    } else {
        cout << "NO" endl;
    }
        
    
}

int main(){
    int caseTest; 
    cin >> caseTest;
    while (caseTest--) {
        solve();
    }
    return 0;
}