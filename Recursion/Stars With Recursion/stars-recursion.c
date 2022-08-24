#include <stdio.h>

//How many stars will be printed ?
void stars(int n) {
    int i = 0;
    if(n>1) {
        stars(n-1);
    }
    for(i=0;i<n;i++){
        printf("*");
    }
}

int main() {
    stars(3);
    return 0;
}
