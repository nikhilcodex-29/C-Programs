//1D Arrays
// Accessing Array Elements
// #include <stdio.h>
// int main() {
//     int num[3] = {10, 20, 30};
//     printf("First element: %d\n", num[0]);
//     printf("Second element: %d\n", num[1]);
//     printf("Third element: %d\n", num[2]);
//     return 0;
// }

//using loops with arrays
// #include<stdio.h>
// int main() {
//     int marks[5] = {80, 85, 90, 95, 100};
//     for (int i = 0; i < 5; i++) {
//         printf("marks[%d] = %d\n", i, marks[i]);
//     }
//     return 0;
// }

//Sum of Array Elements
// #include <stdio.h>
// int main() {
//     int arr[5] = {2, 4, 6, 8, 10};
//     int sum = 0;
//     for(int i = 0; i < 5; i++) {
//         sum += arr[i];
//     }
//     printf("Sum = %d\n", sum);
//     return 0;
// }

//Array to use for order of integers
// #include <stdio.h>
// int main () {
//     int numbers[10];
//     int i;
//     printf("Enter 10 integers:\n");
//     for (i = 0; i< 10; i++) {
//         scanf("%d", &numbers[i]);
//     }
//     printf("the entered numbers are:\n");
//     for (i = 0; i < 10; i++) {
//         printf("%d", numbers[i]);
//     }
//     return 0;
// }

// Average of numbers
// #include <stdio.h>
// int main() {
//     int n, i;
//     float sum = 0, average;
//     printf("Enter how many numbers you want to input: ");
//     scanf("%d", &n);
//     int numbers [n];
//     printf("Enter %d integers: \n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &numbers[i]);
//         sum += numbers[i];
//     }
//     average = sum / n;
//     printf("average of the entered numbers = %.2f\n", average);
//     return 0;
// }

//check even or odd
// #include <stdio.h>
// int main() {
//     int n, i;
//     int even = 0, odd = 0;
//     printf("Enter how many numbers you want to input: ");
//     scanf("%d", &n);
//     int numbers[n];
//     printf("Enter %d integers \n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &numbers[i]);
//     }
//     for (i = 0; i < n; i++) {
//         if (numbers[i] % 2 == 0)
//         even++;
//     else
//         odd++;
//     }
//     printf("\ntotal even numbers = %d", even);
//     printf("\ntotal odd numbers = %d", odd);
//     return 0;
// }

// Linear Search
// #include <stdio.h>
// int main() {
//     int n, i, num, found = 0;
//     int arr[100];
//     printf("Enter how many numbers you want to input: ");
//     scanf("%d", &n);
//     printf("Enter %d integers: \n", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the number to search: ");
//     scanf("%d", &num);
//     for(i = 0; i < n; i++){
//         if(arr[i] == num) {
//             found = 1;
//             break;
//         }
//     }
// if(found == 1) {
//     printf("%d is present in the array.\n", num);
// }
//   else{
//       printf("%d is noot present in the array.\n", num);
//       return 0;
//   }
// }

//Sum of positive or negative numbers
// #include <stdio.h>
// int main () {
//     int n, i;
//     int arr[100];
//     int sumPositive = 0;
//     int sumNegative = 0;
//     printf("Enter how many numbers you want to input: ");
//     scanf("%d", &n);
//     printf("Enter %d integers: \n", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for(i = 0; i < n; i++) {
//         if(arr[i] > 0) 
//             sumPositive = sumPositive + arr [i];
//             else if (arr [i] < 0) 
//                 sumNegative = sumNegative + arr[i];  
//     }
//     printf("Sum of positive numbers = %d\n", sumPositive);
//     printf("Sum of negative numbers = %d\n", sumNegative);
//     return 0;
// }

//Largest element in array
// #include <stdio.h>
// int main() {
//     int n, i, largest;
//     printf("Enter size of array: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements: ", n);
//     for(i= 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     largest = arr[0];
//     for(i = 1; i < n; i++) {
//         if(arr[i] > largest) {
//             largest = arr[i];
//         }
//     }
//     printf("largest element = %d\n", largest);
//     return 0;
// }

//2D Arrays
//matrix
// #include <stdio.h>
// int main() {
//     int a[2][3];
//     printf("Enter elements: \n");
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("matrix is: \n");
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("%d", a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Important Examples
// #include <stdio.h>
// int main(void) {
// char alpha[3][3] = {0};
// int digit [3][4] = {0};
// for(int r = 0; r < 3; r++)
// {
//     for(int c = 0; c < 3; c++){
//         printf("%d", alpha[r][c]);
//     }
//     printf("\n");
// }
// for(int r = 0; r < 3; r++) {
//     for (int c = 0; c < 4; c++) {
//         printf("%d", digit[r][c]);
//     }
//     printf("\n");
// }
// int matrix2D[2][3] = {{22, 33, 44}, {55, 66, 77}};
// for (int r = 0; r < 2; r++){
//     for (int c = 0; c < 3; c++)
//     {
//         printf("%d", matrix2D[r][c]);
//     }
//     printf("\n");
// }
// char alpha2D[3][2] = {{'a','b'}, {'x', 'y'}, {'m', 'n'}};
// for (int r = 0; r < 3; r++)
// {
//     for(int c = 0; c < 2; c++) {
//         printf("%c", alpha2D[r][c]);
//     }
//     printf("\n");
// }
// return 0;
// }
//Combined Initialization
// #include <stdio.h>
// int main(void) {

// int matrix2D_v1[2][3] = {{22, 33, 44}, {55, 66, 77}};
// for (int r = 0; r < 2; r++){
//     for(int c = 0; c < 3; c++)
//     {
//         printf("%d", matrix2D_v1[r][c]);
//     }
//     printf("\n");
// }
// int matrix2D_v2[2][3] = {2, 3, 4, 5, 6, 7};
// for(int r = 0; r < 2; r++){
//     for(int c = 0; c < 3; c++) {
//         printf("%d", matrix2D_v2[r][c]);
//     }
//     printf("\n");
// }
// char alpha2D_v1[3][2] = {{'a', 'b'}, {'x', 'y'}, {'m', 'n'}};
// for(int r = 0; r < 3; r++) {
//     for(int c = 0; c < 2; c++){
//         printf("%c", alpha2D_v1[r][c]);
// }
// printf("\n");
// }
// char alpha2D_v2[3][2] = {'c', 'd', 'v', 'w', 'g', 'h'};
// for(int r = 0; r < 3; r++)
//  {
//     for (int c = 0; c < 2; c++) {
//         printf("%c", alpha2D_v2[r][c]);
//     }
//     printf("\n");
//  }
//  return 0;
// }

//sum of all elements
// #include <stdio.h>
// int main() {
//     int a[3][3], i, j, sum = 0;
//     printf("Enter elements of 3 x 3 matrix: \n");
//     for(i = 0; i < 3; i++) {
//         for(j = 0; j < 3; j++) {
//             scanf("%d", &a [i][j]);
//         }
//     }
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 3; j++){
//             sum += a[i][j];
//         }
//     }
//     printf("Sum of all elements = %d\n", sum);
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int n, i;
//     int sum = 0;
//     float average;
//     printf("enter the numbers");
//     scanf("%d", &n);
//     int arr[n];
//     printf("enter the array elements \n");
//     for(i = 0; i < n; i++){
//     scanf("%d", &arr[i]);
//     sum += arr[i];
//     }
//     average = sum / (float)n;

//  printf("sum = %d\n", sum);
//  printf("average = %.2f\n", average);
    
//  return 0;
// }

// #include <stdio.h>
// int main() {
//     int n, i;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements: \n", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     int start = 0, end = n - 1;
//     int temp;

//     while(start < end) {
//         temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
//     printf("Reversed array: \n");
//     for(i = 0; i < n; i++){
//         printf("%d", arr[i]);
//     }
//     return 0;
// }

