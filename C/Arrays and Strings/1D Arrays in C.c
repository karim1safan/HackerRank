// Problem Link: https://www.hackerrank.com/challenges/1d-arrays-in-c/problem?isFullScreen=true
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, arr[10001];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d ", &arr[i]);
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    printf("%d", sum);
    return 0;
}
