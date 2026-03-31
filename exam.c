// #include <stdio.h>
// #include <limits.h>
// int main() {
//     int n;
//     printf("Enter size of array: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter array elemnts: ");
//     for (int i = 0; i < n; i++) 
//         scanf("%d",arr[i]);
//         int largest = INT_MIN;
//         int secondLargest = INT_MIN;
//         for( int i = 0; i < n; i++) {
//         int x = arr[i];
//         if (x > largest) {
//             secondLargest = largest;
//             largest = x;
//         }
//         else if(x > secondLargest && x != largest) {
//             secondLargest = x;
//         }
    
// }
//     printf("largest element = %d\n", largest);
//     if(secondLargest == INT_MIN){
//          printf("Second largest does not exist (all elements equal) \n");
//     }
//         else { 
//             printf("Second largest element = %d\n", secondLargest);
//         }
//         return 0;
// }

//frequency of each element
// #include <stdio.h>
// int main() {
//     int n, i, j;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     int arr[n], freq[n];
//     printf("Enter %d elements: \n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         freq[i] = -1;
//     }
    
//     for (i = 0; i < n; i++) {
//         int count = 1;
//         if(freq[i] == 0)
//         continue;
//     for(j = i + 1; j < n; j++) {
//         if (arr[i] == arr[j]) {
//             count++;
//             freq[j] = 0;
//         }
//     }
//     freq[i] = count;
//     }
//     printf("\nFrequency of each element: \n");
//     for(i = 0; i < n; i++) {
//         if (freq[i] != 0) {
//             printf("%d occurs %d times\n", arr[i], freq[i]);
//         }
//     }
//     return 0; 
// }

// even and odd Elements in an Array
// #include <stdio.h>
// int main() {
//     int n, i, even = 0, odd = 0;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements: \n", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for(i = 0; i < n; i++) {
//         if(arr[i] % 2 == 0)
//         even++;
//     else 
//        odd++;
//     }
//     printf("\n Total Even numbers = %d\n", even);
//     printf("Total odd numbers = %d\n", odd);
//     return 0;
// }

//Count even odd elements
// #include <stdio.h>
// int main() {
//     int n, i, even = 0, odd = 0;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements: \n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for(i = 0; i < n; i++) {
//         if(arr[i] % 2 == 0)
//         even++;
//     else 
//         odd++;
//     }
//     printf("\n Count of Even Elements = %d\n", even);
//     printf("count of odd elements = %d\n", odd);
//     return 0;
// }

//sum and Average of Array
// #include <stdio.h>
// int main() {
//     int n, i;
//     float sum = 0, avg;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements: \n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         sum += arr[i];
//     }
//     avg = sum / n;
//     printf("\n Sum of Array = %.2f\n", sum);
//     printf("Average of Array = %.2f\n", avg);
//     return 0;
// }

//Linear search
// #include <stdio.h>
// int main() {
//     int n, i, key, found = 0;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements: \n", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter element to search: ");
//     scanf("%d", &key);
//     for (i = 0; i < n; i++) {
//         if (arr[i] == key) {
//             printf("\n Element %d found at position %d\n", key, i + 1);
//             found = 1;
//             break;
//         }
//     }
//     if(!found) {
//         printf("\n Element %d not found in the array\n", key);
//     }
//     return 0;
// }

//Maximum consecutive  ones
// #include <stdio.h>
// int main() {
//     int n, i;
//     int count = 0, maxCount = 0;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d binary elements: ");
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for(i =0; i < n; i++) {
//         if (arr[i] == 1) {
//             count++;
//             if (count > maxCount)
//             maxCount = count;
//         }else {
//             count = 0;
//         }
//     }
//     printf("\nMaximum consecutive 1's = %d\n", maxCount);
//     return 0;
// }

