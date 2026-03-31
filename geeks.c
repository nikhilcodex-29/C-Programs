//basic problems
// 1. check even or odd
//  #include <stdio.h>
// int main() {
//     int x;
//     printf("please enter the number");
//     scanf("%d", &x);
//     if(x % 2 == 0)
//     //print if it is even
//     printf("it is even");
// else
// //print if it is odd
//     printf("it is odd");
//     return 0;
// }

//2.sum of naturals
// #include <stdio.h>
// int main() {
//     int n, sum;
//     printf("enter the natural number");
//     scanf("%d", &n);
//     //formula: sum = n* (n + 1) /2
//     sum = n * (n + 1) / 2;
//     printf("sum of first %d natural numbers is %d\n", n, sum);
//     return 0;
// }

//3. sum of squares of naturals
// #include <stdio.h>
// int main() {
//     int n, sum;
//     printf("enter the number");
//     scanf("%d", &n);
//     //the sum of square of %d natural numbers is 
//     sum = (n * (n + 1) * (2 * n +1))/6;
//     printf("the sum of square of first %d natural numbers is %d\n", n, sum);
//     return 0;
// }

//4.swap two numbers
// #include <stdio.h>
// int main() {
//     int a, b, c;
//     printf("enter the two numbers");
//     scanf("%d%d", &a, &b);
//     printf("before swapping a= %d\n, b= %d\n", a, b);
//     //swap using third variable
//     c=a;
//     a=b;
//     b=c;
//     printf("after swapping a= %d\n, b= %d\n", a , b);
//     return 0;
// }

//5. dice problem
// #include <stdio.h> 
// int main() {
//     int num, opposite;
//     printf("enter the number on the dice face ( 1 to 6): ");
//     scanf("%d", &num);
//     if (num < 1 || num > 6) {
//         printf("invalid dice number ! please enter a number between 1 and 6\n");
//     } 
//     else{
//         opposite = 7 - num;
//         printf("the oppposite face of %d is : %d\n", num, opposite);
//     }
//     return 0;
//     }

//6. CLOSEST number
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int n, m;
//     printf("enter n & m");
//     scanf("%d%d", &n, &m);
//     // find quotient
//     int q= n / m;
//     // find two nearest multiples
//     int lower = m * q;
//     int higher = m * (q + 1);
//     // compare distances

//     if (abs(n - lower) < abs(higher - n)) {
//         printf("closest number to%d divisible by %d is %d\n", n, m, lower);
//     }
//     else {
//         printf("closest number to %d divisible by %d is %d\n", n, m, higher);
//     }
//     return 0;
// }

// 7. nth term of AP
//  #include <stdio.h>
//  #include <math.h>
//  int main() {
//      int a , b , n, d, nth;
//      printf("enter the first term (a)");
//      scanf("%d", &a);
//      printf("enter the second term (b)");
//      scanf("%d", &b);
//      printf("enter which term to find (n)");
//      scanf("%d", &n);
//      //find common difference
//      d = b - a;
//      // nth term formula
//      nth = a + (n - 1) * d;
//      printf("the %dth term of the AP is %d\n", n, nth);
//      return 0;
// }

// easy problems
//1. sum of digits
// #include <stdio.h>
// int main() {
//     int n, sum = 0, digit;
//     printf("enter a number");
//     scanf("%d", &n);
//     while (n > 0) {
//         digit = n % 10;
//         sum = sum + digit;
//         n = n / 10;
//     }
//     printf("sum of digits = %d\n", sum);
//     return 0;
// }
//relate to basic problem (7)
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int a, b;
//     printf("enter the number (a) ");
//     scanf("%d", &a);
//     printf("enter the divisor (b)");
//     scanf("%d", &b);
//     if(b == 0){
//     printf("divisor cannot be zero!\n");
//     }
//     //find quotient
//     int q = a / b;
//     //two nearest multiples
//     int lower = b * q ;
//     int higher = b * (q + 1);
//     //check which is closer
//     if(abs(a - lower) < abs(a - higher))
//     printf("closest = %d\n", lower);
// else if (abs(a - lower) > abs(a - higher))
//        printf("closest = %d\n", higher);
//     else
//         printf("closest = %d\n", (abs(lower) > abs(higher)) ? lower : higher);
//         return 0;
// }

// //2. reverse digits
// #include <stdio.h>
// int main()  {
//     int revnum = 0, n;
//     printf("enter the number");
//     scanf("%d", &n);
//     //loop for a digit 
//     while(n > 0){
//     revnum= revnum * 10 + n% 10;
//     n = n / 10;
//     }
//     printf("reversed = %d\n", revnum);
//     return 0;
// }

//3. prime testing
// #include <stdio.h>
// #include <math.h>
// int main() {
//     int n, i, flag = 0;
//     printf("enter the number");
//     scanf("%d", &n);
//     // 0 and 1 are not prime
//     if(n <= 1){
//         printf("%d is not a prime number. \n", n);
//     }
//     //check divisiblity up to sqrt(n)
//     for(i = 2; i <= sqrt(n); i++){
//         if(n % i == 0);{
//         flag = 1;
//         break;
//         }
//     }
//     if( flag == 0){
//        printf("%d is a prime number. \n", n);
//     }
//     else{
//         printf("%d is not a prime number. \n", n);
//     }
//     int prime_number;
//     if(prime_number){
//     printf("it is true");
//     }
// else{
//     printf("it is false");
// }
//     return 0;
// }

//4. check power
// #include <stdio.h>
// #include <math.h>
// int main() {
//     int n, x;
//     int power_of_x = 0;
//     double  k;
//     printf("enter the number n");
//     scanf("%d", &n);
//     printf("enter the number x");
//     scanf("%d", &x);
//     k = log (n) / log(x);
//     if (fabs(k - round(k)) < 1e-6){
//     //check if k is integer
//     power_of_x = 1;//true
// printf("%d is a power of %d\n", n, x);
//     }
// else{
//     power_of_x = 0;//false
// printf("%d is not a power of %d\n", n, x);
// }
//     if(power_of_x){
//     printf("it is true");
//     }
//     else
        
//     printf("it is false");
// return 0;
// }

// 5. Distance between two points
// #include <stdio.h>
// #include <math.h>
// int main() {
//     float x1, x2;
//     float y1, y2;
//     printf("enter the x1, x2, y1, y2: ");
//     scanf("%f%f%f%f", &x1, &x2, &y1, &y2);
//     //calculate the distance between two points
//     float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
//     printf("the vaue of distance_between_two_points is %f\n", distance);
//     return 0; 
// }

//6.valid triangle
// #include <stdio.h>
// #include <stdbool.h>
// int main() {
//     int a, b, c;
//     printf("enter the three sides");
//     scanf("%d%d%d", &a,&b,&c);
//     //check it is a valid triangle
//     if(a + b > c && a + c > b && b + c > a)
//     {
//         printf("it is a valid triangle");
//     }
//         else{
//             printf("it is not a valid triangle");
//         }
//         return 0;
// }

//7.factorial of a number
// #include <stdio.h>
// #include <math.h>
// int main() {
//     int n, i;
//     int fact = 1;
//     printf("enter the number");
//     scanf("%d", &n);
//     //calculate the factorial of number
//     for(i= 2; i <= n; i++){
//         fact = fact * i;
//     }
//     printf("the factorial of %d is %d", n, fact);
// return 0;
// }

//8.pair cube count
// #include <stdio.h>
// #include <math.h>
// int main() {
//     int n;
//     int count = 0;
//     printf("enter the number");
//     scanf("%d", &n);
//     //count the pair cube 
//     for(int a = 1; a <= n; a++){
//         for(int b =0 ; b <= n; b++){
//             if(a * a * a + b * b * b == n) {
//                 count++;
//             }
//         }
//     }
//     printf("%d\n", count );
//     return 0;
// }

//9.GCD or HCF of Two Numbers
// #include <stdio.h>
// #include <math.h>
// int main() {
//     int a, b, c;
//     printf("enter the two numbers");
//     scanf("%d%d", &a, &b);
//     //find gcd or hcf two numbers
//     while (b != 0){
//     c = b;
//     b = a % b;
//     a = c;
//     }
//     printf("GCD (HCF) is %d\n", a);
//     return 0;
// }

//10.Lcm of two numbers
// #include <stdio.h>
// #include <math.h>
// int main() {
//     int a, b, x, y, gcd, lcm;
//     printf("enter the two numbers");
//     scanf("%d%d", &a, &b);
//     x = a;
//     y = b;
//     //find gcd
//     while (b != 0){
//         int c = b;
//         b = a % b;
//         a = c;
//     }
//     gcd = a;
//     //find lcm using formula
//     lcm = (x * y) / gcd;
//     printf("gcd = %d\n", gcd);
//     printf("lcm = %d\n", lcm);
//     return 0;
// }

//11.Perfect number
// #include <stdio.h>
// #include <math.h>
// int main() {
//     int n, i, sum= 0;
//     printf("enter a number");
//     scanf("%d", &n);
//     //find the perfect number
//     for( i = 1; i < n; i++){
//     if (n % i == 0){
//         sum += i;
//     }
//     }
//     if (sum == n){
//     printf("%d is a perfect number\n ", n);
//     }
//     else{
//         printf("%d is not a perfect number\n ", n);
//     }
//     return 0;
//}

// Add two fraction
// #include <stdio.h>
// #include <math.h>
// //find gcd
// int gcd (int num1, int num2){
//     int num3;
//     while(num2 != 0) {
//         num3 = num2;
//         num2 = num1 % num2;
//         num1 = num3;
//     }
//     return num1;
// }
// int main() {
//     int a, den1, b, den2;
//     int result_num, result_den;
//     printf("enter first fraction (numerator and denominator): ");
//     scanf("%d%d", &a, &den1);
//     printf("enter second fraction (numerator and denominator)");
//     scanf("%d%d", &b, &den2);
//     result_num = (a * den2) + (b * den1);
//     result_den = den1 * den2;
//     int g = gcd(result_num, result_den);
//     result_num /= g;
//     result_den /= g;
//     printf("sum of fractions = %d/%d\n", result_num, result_den);
//     return 0;
// }

//Array problems
// Second largest element in an array

// #include <stdio.h>
// int main() {
//     int n, i;
//     printf("Enter number of elements");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter  %d elements: \n", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     int largest = arr[0];
//     int second_largest =-2147483648;
//     for(i = 1; i < n; i++) {
//         if(arr[i] > largest) {
//             second_largest = largest;
//             largest = arr[i];
//         }
//         else if(arr[i] > second_largest && arr[i] != largest) {
//             second_largest = arr[i];

//         }
//     }
//     if(second_largest == -2147483648)
//     {
//         printf("No second largest element");
//     }
//     else {
//         printf("Second largest element = %d\n", second_largest);
//     }
//     return 0;
// }

//Array reverse
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

//Array reverse in groups
// #include <stdio.h>
// int main() {
//     int n, k;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter array elements: \n");
//     for(int i = 0; i < n; i++)
//         scanf("%d", &arr[i]);
//     printf("enter group size (k): ");
//     scanf("%d", &k);
//     for(int i = 0; i < n; i += k) {
//         int left = i;
//         int right = (i + k - 1 < n) ? (i + k - 1) : (n - 1);
//         while (left < right) {
//             int temp = arr[left];
//             arr[left] = arr[right];
//             arr[right] = temp;
//             left++;
//             right--;
//         }
//     }
//     printf("\n Array after reversing in groups: \n");
//     for (int i = 0; i < n; i++)
//       printf("%d", arr[i]);
//     return 0;
// }

//Rotate an Array
// #include <stdio.h>
// int main() {
//     int n, d;
//     printf("Enter size of array: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter array elements: ");
//     for(int i = 0; i < n; i++)
//         scanf("%d", &arr[i]);
//     printf("Enter d (number of rotations): ");
//     scanf("%d", &d);
//     d = d % n;
//     int temp[d];
//     for(int i = 0; i < d; i++)
// {    
//      temp[i] = arr[i];
// }
//      for(int i = d; i < n; i++) {
//       arr[n - d + i] = temp[i];
//      printf("Rotated array: ");
//      }
//      for(int i = 0; i < n; i++) {
//       printf("%d", arr[i]);
//      }
//      return 0;
// }

// Maximum product of a triplet
// #include <stdio.h>
// #include <limits.h>
// int main() {
//     int n;
//     printf("Enter size if array: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter array elements: ");
//     for(int i = 0; i < n; i++)
//       scanf("%d", &arr[i]);
//     int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
//     int min1 = INT_MAX, min2 = INT_MAX;
//     for(int i = 0; i < n; i++) {
//         int x = arr[i];
//         if (x > max1) {
//             max3 = max2;
//             max2 = max1;
//             max1 = x;
//         }
//         else if (x > max2 ) {
//             max3 = max2;
//             max2 = x;
//         }
//         else if(x > max3) {
//             max3 = x;
//         }
//         if(x < min1) {
//             min2 = min1;
//             min1 = x;
//         }
//         else if(x < min2) {
//             min2 = x;
//         }
//     }
//     long long prod1 = 1LL * max1 * max2 * max3;
//      long long prod2 = 1LL * min1 * min2 * max1;
//      long long result = (prod1 > prod2) ? prod1 : prod2;
//      printf("Maximum product of a triplet = %lld\n", result);
//      return 0;
// }

//MAX Consecutive Ones
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter size of array: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter binary array elements (0 / 1): ");
//     for(int i = 0; i < n; i++)
//      scanf("%d", &arr[i]);
//     int maxCount = 0, currentCount = 0;
//     for(int i = 0; i < n; i++) {
//         if (arr[i] == 1) {
//             currentCount++;
//             if(currentCount > maxCount)
//             maxCount = currentCount ;
//         } else {
//             currentCount = 0;
//         }
//     }
//     printf("Maximum consecutive 1's = %d\n", maxCount);
//     return 0;
// }

// 