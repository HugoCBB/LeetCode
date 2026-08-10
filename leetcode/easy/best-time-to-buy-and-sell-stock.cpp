#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int lucro = 0;
        for(int i = 0; i < prices.size(); i++){
            if (prices[i] < min) {
                min = prices[i];
            }
            
            int lucroAtual = prices[i] - min;
            if (lucroAtual > lucro) {
                lucro = lucroAtual;
            }
    }
        return lucro;
    }
};