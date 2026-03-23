#include <stdio.h>

int main(){
    int a, b, c;

    scanf("%d\n%d", &a, &b);
    c = b % 100;
    c = b % 100 / 10;
    c = b % 10; 

    printf("%d\n", (a * (b % 10)));
    printf("%d\n", (a * (b % 100 / 10)));
    printf("%d\n", (a * (b / 100)));
    printf("%d\n", (a * b));
    
    return 0;
}
