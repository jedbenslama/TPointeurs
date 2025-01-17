#include <stdio.h>

int main(){
    int a=4;
    int* p=&a;
    printf("%p",p);
    *p=6;
    printf("%i",a);
    return 0;
}