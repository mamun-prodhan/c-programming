#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int a;
    long long int b;
    float c;
    char d;
    
    scanf("%d %lld %f %c", &a, &b, &c, &d);
    
    printf("%d\n", a);
    printf("%lld\n", b);
    printf("%0.4f\n", c);
    printf("%c\n", d);
    
    return 0;
}