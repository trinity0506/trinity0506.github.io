#include<stdio.h>
int main(){
    int a=2;
    int *p=&a;
    printf("%p,%d,%p",p,*p,&a);      
}