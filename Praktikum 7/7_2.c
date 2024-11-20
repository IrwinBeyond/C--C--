#include <stdio.h>

main() { 
    char  operator;
    float  number1, number2, result; 

    printf("Masukkan 2 buah bilangan & sebuah operator\n"); 
    printf("dengan format : number1 operator number2\n\n"); 
    scanf("%f %c %f", &number1, &operator, &number2); 

    switch (operator){
        case '*' :
            result = number1 * number2;
            break;
        case '/' :
            result = number1 / number2;
            break;
        case '+' :
            result = number1 + number2;
            break;
        case '-' :
            result = number1 - number2;
            break;
        default :
            printf("Invalid operator!");
    }

    printf("\n%g %c %g is %g", number1, operator, number2, result);
}