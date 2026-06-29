#include <stdio.h>

int romanToInt(char* s) {
    int ans = 0;
    for (int a = 0; s[a] != '\0'; a++) {
        if (s[a] == 'I') {
            ans += 1;
        }
        else if (s[a] == 'V') {
            if (a > 0 && s[a - 1] == 'I')
                ans += 3;
            else
                ans += 5;
        }
        else if (s[a] == 'X') {
            if (a > 0 && s[a - 1] == 'I')
                ans += 8;
            else
                ans += 10;
        }
        else if (s[a] == 'L') {
            if (a > 0 && s[a - 1] == 'X')
                ans += 30;
            else
                ans += 50;
        }
        else if (s[a] == 'C') {
            if (a > 0 && s[a - 1] == 'X')
                ans += 80;
            else
                ans += 100;
        }
        else if (s[a] == 'D') {
            if (a > 0 && s[a - 1] == 'C')
                ans += 300;
            else
                ans += 500;
        }
        else if (s[a] == 'M') {
            if (a > 0 && s[a - 1] == 'C')
                ans += 800;
            else
                ans += 1000;
        }
    }
    return ans;
}

int main() {
    char s[] = "MCMXCIV";
    int result = romanToInt(s);
    return 0;
}