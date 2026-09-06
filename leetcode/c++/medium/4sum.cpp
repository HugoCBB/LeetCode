#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target) {
        std::vector<std::vector<int>> resultado;
        std::sort(nums.begin(), nums.end()); 

        int n = nums.size();

        for (int i = 0; i < n; i++) {
            // Pula duplicado
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            for (int j = i + 1; j < n; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue; 

                // Valor que falta pra chegar no target
                long long resto = (long long)target - nums[i] - nums[j];

                std::unordered_map<long long, int> vistos;

                for (int k = j + 1; k < n; k++) {
                    long long complemento = resto - nums[k];

                    // Se foi visto dentro do mappp ele adicione os pares vistos
                    if (vistos.count(complemento)) {
                        std::vector<int> quadrupla = {nums[i], nums[j], (int)complemento, nums[k]};
                        std::sort(quadrupla.begin(), quadrupla.end());

                        if (resultado.empty() || resultado.back() != quadrupla) {
                            resultado.push_back(quadrupla);
                        }
                    }

                    vistos[nums[k]] = k;
                }
            }
        }

        return resultado;
    }
};