#include<iostream>
#include<stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        
        for(char c : s){
            if (c == '(' || c == '[' || c == '{' ) {
                stack.push(c);
            } else if (c == ')' || c == ']' || c == '}') {
                if(stack.empty()) return false;
                
                char top = stack.top();
                if ((c == ')' && top == '(') || (c == ']' && top == '[') || (c == '}' && top == '{')) {
                    stack.pop(); 
                } else {
                    return false;
                }
            }
            
        }
        return stack.empty();
    }
};

int main() {
    Solution s;
    
    cout << s.isValid("()") << endl;
}