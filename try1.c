#include<stdio.h>
#include<stdlib.h>

int main()
{
    int* a = (int*) malloc(sizeof(int));
    int *b = a;
    a++;
    printf("%d %d",a,b);
    return 0;
}