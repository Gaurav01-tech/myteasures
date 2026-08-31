#include <stdio.h>
#include <string>
using namespace std;

#define MAX 10000

class Solution {
public:

    char arr[MAX];
    int top = -1;

    char pop() {

        if (top == -1) {
            printf("underflow");
            return '\0';
        }

        return arr[top--];
    }

    void push(char val) {

        if (top == MAX - 1) {
            printf("overflow");
            return;
        }

        arr[++top] = val;
    }

    bool isValid(string s) {

        for (int i = 0; i < s.size(); i++) {

            // Opening bracket
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                push(s[i]);
            }

            // Closing bracket
            else {

                if (top == -1) {
                    return false;
                }

                char topElement = arr[top];

                if ((s[i] == ')' && topElement == '(') ||
                    (s[i] == ']' && topElement == '[') ||
                    (s[i] == '}' && topElement == '{')) {

                    pop();
                }
                else {
                    return false;
                }
            }
        }

        // Stack must be empty at the end
        return top == -1;
    }
};