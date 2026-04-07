#include <iostream>
#include <vector>

#define endl << "\n";

using namespace std;
int main()
{
    int ct, n = 0, k = 0, sum = 0;
    cin >> ct;
    cin >> n >> k;
    while(ct--) {
        vector<int> arr(n);
        for (int i = 0; i < arr.size(); i++) {
            cin >> arr[i];
            sum += arr[i];
            
        }
        if(sum % 2 == 1) {
            cout << "YES" endl;
        } else {
            cout << "NO" endl;
        }
        
    }
    return 0;
}
