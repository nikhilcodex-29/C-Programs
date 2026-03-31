// #include <stdio.h>
// int main() {
//     int n= 15;
//     if(n>10) {
//         printf("%d is greater than 10", n);
//     }
//     else {
//         printf("%d is less than 10", n);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
// int n= -4;
// //If the number is negative 
// if (n<0)
// {
// printf("Negative\n");
// printf("hello");
// }
// //If the number is not negative
// else
// printf("Not Negative");
// return 0;
// }

// #include <stdio.h>
// int main() {
//     int n= 6;
//     //Check if the number lies in the range [10,20]
//     if(n >=10 && n <= 20)
//     {
//         printf("%d lies in range", n);
//     }
//     else {
//         printf("%d does not lie in range", n);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int a= 1, b= 2, c= 11;
//     // finding the largest by comparing using
//     // relational operators with if-else 
//     if (a>=b)
//     {
//         if (a >= c)
//         printf("%d", a);
//     else
//     printf("%d", c);
//     }
//     else {
//         if (b>=c)
//         printf("%d, b");
//     else
//     printf("%d", c);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n=5;
//     // If the number is positive
//     if(n>0)
//     printf("positive");
// // If the number is not positive
// else
//     printf("not positive");
//     return 0;
// }

// #include <stdio.h>
// int main () 
// {
//     int n=7;
//     //If the number is positive 
//     if(n>0)
//     printf("positive");
// //if the number is negative
// else
//     if(n<0)
//     printf("negative");
// //if the number is neither negative nor positive
// else
// printf("neither negative nor positive");
// return 0;
// }

// #include <stdio.h>
// int main() {
//     int a,b,c;
//     printf("enter your first side");
//     scanf("%d", &a);
//     printf("enter your second side");
//     scanf("%d", &b);
//     printf("enter your third side");
//     scanf("%d", &c);
//     if(a==b && a==c){
//         printf("the triangle is equilateral");
//     }
//     else if(a==b || b==c || a==c){
//         printf("the triangle is isosceles");
//     }
//     else{
//         printf("the triangle is scalene");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int age;
//     printf("enter your age: ");
//     scanf("%d", &age);
//     if(age <= 13){
//     printf("you be a child");
// }
// else if (age >= 13) {
//     printf("you be a teenager");
// }
// else if(age >= 20) {
//     printf("you be a adult");
// }
// else {
// printf("you be a senior citizen");
// }
// return 0;
// }

// #include <stdio.h>
// int main() {
//     int num;
//     printf("enter the integer number");
//     scanf("%d", &num);
//     //check the number is positive or negative
//     if(num > 0)
//     {
//         if (num%2 =0)
//         {
//         printf("the number is positive and even");
//     }#
//     else{
//         printf("the number is negative and odd");
//     }
// }
// else if (num == 0)
// {
//     printf("number is zero");
// }
// return 0;
// }
// #include <stdio.h>
// int main() {
//     int a =10, b = 20;
//     if(a > b)
//     printf("greater number is a");
// else
//     printf("greater number is b");
// return 0;
// }

// #include <stdio.h>
// int main() {
//     int a = 10;
//     (a > 10)?printf("positive"):printf("negative");
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int num1, num2, result, c;
//     printf("please enter  both the number");
//     scanf("%d%d", &num1, &num2);
//     printf("menu\n");
//     printf("1.addition\n");
//     printf("2.subraction\n");
//     printf("3.division\n");
//     printf("4.multiplication\n");
//     printf("please enter the option from 1 to 4\n");
//     scanf("%d", &c);
//     switch(c)
//     {
//         case 1:
//         result = num1 +num2;
//         printf("result=%d", result);
//         break;
//         case 2:
//         result = num1 - num2;
//         printf("result=%d", result);
//         break;
//         case 3:
//         if(num2 != 0)
//         {
//         result = num1/num2;
//         printf("result =%d", result);
//         }
//         else
//         {
//           printf("Invalid-divison");
//         }
//         break;
//         case 4:
//         result = num1 * num2;
//         printf("result = %d", result);
//         break;
//         default:
//         printf("Invalid choice");
//         break;
//     }
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     for (int i = 1; i<=20; i = i+2)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int sum = 0;
//     for(int i = 1; i <= 50; i++)
//     {
//         sum += i;
//     }
//     printf("sum = %d", sum);
//     return 0;
// }

//multiplication table
// #include <stdio.h>
// #include<math.h>
// int main() {
//     int a,i,mult;
//     printf("enter the value of a:");
//     scanf("%d",&a);
//     for(int i = 1; i <= 10; i++)
//     { mult = a * i;
//         printf("%d * %d = %d\n",a,i,mult);
//     }
// }

// // even number
// #include <stdio.h>
// int main() {
//     for(int i = 1; i<=9; i++)
//     {
//         if (i % 2 == 0)
//         {
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }

// # include<stdio.h>
// int main()
// {
//     int a = 0;
//     int b= 1;
//     int c;
//     for(int i = 1; i<=10; i++)
//     {
//         printf("%d", a);
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//   int i, j;
//   printf("enter both numbers");
//   scanf("%d%d", &i, &j);
//   //check the condition
//   for(i = 0; i<3; i++)
//   {
//     for (j = 0; j <= 3; j++){
//   }
// }
//   printf("%d", i + j);
// return 0;
// }
// #include <stdio.h>
// int main () {
//     int marks[5] = {10, 20, 30};
//     printf("first element: %d\n", marks[0]);
//     printf("second element : %d\n", marks[1]);
//     printf("third element : %d\n", marks[2]);
//     return 0;
// }

// #include  <stdio.h.>
// int main() {
//     int n, i;
//     int even = 0, odd = 0;
//     printf("enter how many numbers you want to input: ");
//     scanf("%d", &n);
//     int numbers[n];
//     printf("enter %d integers: \n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &numbers[i]);
//     }
//     //count even and odd numbers
//     for(i = 0; i < n; i++) {
//         if (numbers[i] % 2 == 0)
//         even++;
//     else
//         odd++;
//     }
//     printf("\nTotal even numbers = %d", even);
//     printf("\nTotal odd numbers = %d", odd);
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     int arr[5] = {2, 4, 6, 8, 10};
//     int sum = 0;
//     for(int i = 0; i < 5; i++)  {
//         sum += arr[i];
//     }
//     printf("sum = %d\n", sum);
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     int a[2][3];
//     printf("enter elements");
//     for (int i = 0; i< 2;i++){
//         for(int j = 0; j <3; j++) {
//             printf("%d", a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int a= 10;
//     int *p;
//     p = &a;
//     printf("Address of a %p\n", &a);
//     printf("Address stored in p %p\n", p);
//     printf("value of a %d\n", a);
//     printf("value pointed by p %d\n", *p);
//     return 0;
// }

  