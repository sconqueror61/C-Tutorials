#include <stdio.h>

double avg(double num1, double num2) {
    return (num1 + num2) / 2.0;
}

double negpow(double base, int exponent) {
    double result = 1.0;
    
    if (exponent < 0) {
        base = 1.0 / base; 
        exponent = -exponent; 
    }
    
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    
    return result;
}

int digitRange(int num) {
    int maxDigit = 0;
    int minDigit = 9;

    while (num > 0) {
        int digit = num % 10;

        if (digit > maxDigit) {
            maxDigit = digit;
        }

        if (digit < minDigit) {
            minDigit = digit;
        }

        num /= 10;
    }

    return maxDigit - minDigit + 1;
}



int main() {
    printf("%lf\n", avg(-2.0, 1.0));    
    printf("%lf\n", negpow(-2.0, 3));  
    printf("%lf\n", negpow(4.0, -2));  
    printf("%d\n", digitRange(68437)); 
    printf("%d\n", digitRange(3));      
    
    return 0;
}
