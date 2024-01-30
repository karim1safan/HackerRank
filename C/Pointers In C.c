// Problem Link: https://www.hackerrank.com/challenges/pointer-in-c/problem?isFullScreen=true
#include <stdio.h>
#include <math.h>
void update(int *a,int *b) {
    // Complete this function    
    *a = *a + *b;
    *b = abs(2 * *b - *a);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
