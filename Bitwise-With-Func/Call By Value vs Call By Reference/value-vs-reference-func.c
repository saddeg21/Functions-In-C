#include <stdio.h>

int func1(int a, int b){
    int c;
    c=a;a=b;b=c;
}

int func2(int *a,int *b) {
    int c;
    c=*a;*a=*b;*b=c;
}

int main() {
    int a=4;b=5;c=6
    func1(a,b)
    func2(&b,&c);
    printf("%d",c-b-a);
    return 0;
}
