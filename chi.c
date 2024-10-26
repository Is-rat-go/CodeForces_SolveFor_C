
//from multiplication to find last two digits
#include <stdio.h>
int main() {
    long long a, b, c, d;

    
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

  
    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;

    long long s = (a * b) % 100;
    s = (s * c) % 100;           
    s = (s * d) % 100;           
    if (s < 10) {
        printf("0");
    }
    printf("%lld\n", s); 

    return 0;
}
