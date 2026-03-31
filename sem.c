//Arrays 
//1.displaying array
// #include <stdio.h>
// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     printf("Array elements are: \n");
//     for(int i = 0; i < 5; i++) {
//     printf("%d", arr[i]);
// }
//     return 0;
// }

//2. sum and average
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

//3.largest and smallest
// #include <stdio.h>
// int main() {
//     int n, i;
//     printf("enter number of elements");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter the array elements");
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     int smallest = arr[0];
//     int largest = arr[0];

//     for(i = 1; i < n; i++) {
//         if(arr[i] < smallest)
//         smallest = arr[i];
//     if(arr[i] > largest)
//     largest = arr[i];
//     }
//     printf("Smallest number = %d\n", smallest);
//     printf("Largest number = %d\n", largest);
// }

// 4. count even and odd numbers
// #include <stdio.h>
// int main() {
//     int arr[5];
//     int i, even = 0, odd = 0;
//     printf("enter 5 numbers: \n");
//     for(i = 0; i < 5; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for(i =0; i < 5; i++) {
//         if(arr[i] % 2 == 0)
//         even++;
//     else
//         odd++;
//     }
//     printf("Even numbers: %d\n", even);
//     printf("Odd numbers: %d\n", odd);
//     return 0;
// }

//5 reverse elements
// #include <stdio.h>
// int main() {
//     int arr[5];
//     int i, temp;
//     printf("enter 5 numbers: \n");
//     for(i = 0; i < 5; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for(i = 0; i < 5/2; i++) {
//         temp = arr[i];
//         arr[i] = arr[5 - 1 - i];
//         arr[5 - 1 - i] = temp;
//     }
//     printf("Reveresed Array");
//     for(i = 0; i < 5; i++) {
//         printf("%d", arr[i]);
//     }
//     return 0;
// }

//6. Linear search
// #include <stdio.h>
// int main() {
//     int arr[10], n, i, search, found = 0;
//     printf("Enter number of elements");
//     scanf("%d", &n);
//     printf("Enter array elements");
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the number to search");
//     scanf("%d", &search);

//     for(i = 0; i < n; i++) {
//         if(arr[i] == search) {
//             found = 1;
//             break;
//         }
//     }
//     if (found)
//     printf("Number found at position %d\n", i + 1);
// else 
//     printf("Number not found :\n");
// return 0;
// }

// 7. frequency of each element
// #include <stdio.h>
// int main() {
//     int arr[50], freq[50];
//     int n, i, j, count;
//     printf("Enter the number of elements: \n");
//     scanf("%d", &n);
//     printf("enter the array elements");
//     for(i = 0; i < n; i++) {
//     scanf("%d", &arr[i]);
//     freq[i] = -1;
//     }
//     for(i = 0; i < n; i++) {
//         count = 1;
//         if(freq[i] != 0) {
//             for(j = i + 1; j < n; j++) {
//                 if(arr[i] == arr[j]) {
//                     count++;
//                     freq[j] = 0;
//                 }
//             }
//             freq[i] = count;
//         }
//     }
//     printf("Frequency of each element: \n");
//     for(i = 0; i < n; i++) {
//         if(freq != 0) {
//             printf("%d occurs %d times\n", arr[i], freq[i]);
//         }
//     }
//     return 0;
// }

//8. sum of diagnol elements
// #include <stdio.h>
// int main() {
//     int a[10][10], n, i, j;
//     int sum = 0;
//     printf("Enter the size of matrix (n): ");
//     scanf("%d", &n);
//     printf("Enter the matrix elements:\n");
//     for(i = 0; i < n; i++) {
//         for(j = 0; j < n; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     for(i = 0; i < n; i++) {
//         sum += a[i][i];
//     }
//     printf("Sum of diagnol elements = %d\n", sum);
//     return 0;
// }

// total and average
// #include <stdio.h>
// int main() {
//     int n, i;
//     float marks[100], total = 0, average;
//     printf("Enter number of students");
//     scanf("%d", &n);
//     printf("enter marks of %d students: \n", n);
//     for(i = 0; i < n; i++) {
//         scanf("%f", &marks[i]);
//         total += marks[i];
//     }
//     average = total / n;
//     printf("\n Total marks = %.2f\n", total);
//     printf("Average = %.2f\n", average);
//     return 0;
// }

//10. count positive negative and zero
// #include <stdio.h>
// int main() {
//     int a[100], n, i;
//     int pos = 0, neg = 0, zero = 0;
//     printf("Enter number of elements");
//     scanf("%d", &n);
//     printf("Enter the array elements\n");
//     for(i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//         if(a[i] > 0)
//         pos++;
//     else if (a[i] < 0)
//         neg++;
//     else
//        zero++;
//     }
//     printf("Positive numbers = %d\n", pos);
//     printf("Negative numbers = %d\n", neg);
//     printf("Zero elements = %d\n", zero);
//     return 0;
// }

//11. sum of even and odd indexed elements
#