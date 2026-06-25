#include<stdio.h>
int maxArea(int* height, int heightSize) {
    int max = 0;
    int i = 0;
    int j = heightSize - 1;
    int h;
    int area;
    while (i < j) {
        if (height[i] > height[j]) {
            h = height[j];
            area = h * (j - i);
            j--;
            if (area > max) {
                max = area;
            }
        }

        else if (height[j] >= height[i]) {
            h = height[i];
            area = h * (j - i);
            i++;
            if (area > max) {
                max = area;
            }
        }
    }
    return max;
}
void main(){
    int a[9]={1,8,6,2,5,4,8,3,7};       
    int n = sizeof(a) / sizeof(a[0]);
    int r = maxArea(a, n);
    printf("%d",r);
}