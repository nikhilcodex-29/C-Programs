// #include <stdio.h>
// int main() {
//     printf("hello, world!\n");
//     return 0;
// }

// type casting
// #include <stdio.h>
// int main() {
//     int a = 10;
//     float b = a;
//     printf("%f\n", b);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     float x = 9.8;
//     int y = (int)x;
//     printf("%d\n", y);
//     return 0;
//}

// ASCII CODE
// #include <stdio.h>
// int main() {
//     char ch ='A';
//     int code = ch;
//     printf("Character: %c\n", ch);
//     printf("ASCII code: %d\n", code);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int code = 65;
//     char ch = code;
//     printf("code %d\n", code);
//     printf("Character %c\n", ch);
//     return 0;
// }

//special operator : size of
// #include <stdio.h>
// int main() {
//     int a = 10;
//     // size with data type 
//     printf("size of int (data type): %zu bytes\n", sizeof(int));
//     printf("size of int (variable a): %zu bytes\n", sizeof(a));
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int x = 10;
//     int y  = 20;
//     int a = 0;
//     int b = 0;
//     printf("x = %d, a = %d\n", x, a);
//     //first the is assigned toa, then x gets incremented
//     a = x++;
//     printf("postfix: x = %d, a = %d\n", x, a);
//     printf("y = %d, b = %d\n", y, b);
//     //first y gets incremented, then y gets assigned to b 
//     b = ++y;
//     printf("prefix y = %d, b = %d\n", y, b);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int a, b;
//     int sum, difference, product, quotient, remainder;
//     printf("enter two numbers");
//     scanf("%d %d", &a,&b);
//     //store results in variables
//     sum = a + b;
//     difference = a - b;
//     product = a * b;
//     quotient = a / b;
//     remainder = a % b;;
//     //print results using variables
//     printf("Addition of a and b = %d\n", sum);
//     printf("Subraction of a and b = %d\n", difference);
//     printf("Multiplication of a and b = %d\n", product);
//     printf("idvision of a and b = %d\n", quotient);
//     printf("modulus of a and b = %d\n", remainder);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int a, b;
//     printf("enter the two numbers");
//     scanf("%d%d", &a, &b);
//     printf("Addition of a and b = %d\n", a + b);
//     printf("Subraction of a and b = %d\n", a - b);
//     printf("Multiplication of a and b = %d\n", a * b);
//     printf("Division of a and b = %d\n", a / b);
//     printf("modulus of a and b = %d\n, a %% b");
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int a, b, c;
//     a = 10, b = 2;
//     c = pow(a, b);
//     printf("the answer is %d\n", c);
//     return 0;
//
