#include <stdio.h>

//How many times get function will be called ? 
int get(int n) {
    if(n<1) return;
    get(n-1);
    get(n-3);
    printf("%d\n",n);
}


int main() {
    get(6);
    return 0;
}
