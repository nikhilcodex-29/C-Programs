//Logic Building and Coding Questions
//String length
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char name[20];
//     int count = 0;
//     printf("enter the name");
//     gets(name);
//     count = strlen(name);
//     printf("Length of string is %d", count);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str1 [100], str2[100];
//     printf("Enter first string: ");
//     gets(str1);
//     printf("enter second string: ");
//     gets(str2);
//     strcat (str1, str2);
//     printf("concatenated string = %s\n", str1);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     gets(str);
//     strrev (str);
//     printf("Reversed string = %s\n", str);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[100];
//     int i, j, flag =0;
//     printf("enter a string");
//     gets(str);
//     i = 0;
//     j = strlen(str) - 1;
//     while (i < j) {
//         if (str[i] != str[j]) {
//             flag = 1;
//             break;
//         }
//         i++;
//         j--;
//     }
//     if(flag == 0)
//       printf("String is a palindrome .\n");
//     else 
//        printf("String is not a Palindrome .\n");
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str [100];
//     printf("Enter a string: ");
//     gets(str);
//     strlwr(str);
//     printf("String in lowercase: %s\n", str);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[200];
//     int i, count = 0;
//     printf("Enter a string: ");
//     gets(str);
//     for (i = 0; str[i] != '\0'; i++) {
//         if((str[i]== ' ' && str[i + 1] != ' ' && str[i+1] != '\0'))
//         count++;
//     }
//     printf("total number of words = %d\n", count + 1);
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>

// #define MAX 50

// struct Player {
//     int id;
//     char name[50];
//     char country[50];
//     int age;
//     char role[30];
//     float rating;
// };

// struct Player players[MAX];
// int count = 0;

// void addPlayer() {
//     if (count >= MAX) {
//         printf("Maximum player limit reached!\n");
//         return;
//     }

//     struct Player p;
//     printf("\n--- Add Player ---\n");
//     printf("Enter ID: ");
//     scanf("%d", &p.id);
//     printf("Enter Name: ");
//     scanf(" %[^\n]", p.name);
//     printf("Enter Country: ");
//     scanf(" %[^\n]", p.country);
//     printf("Enter Age: ");
//     scanf("%d", &p.age);
//     printf("Enter Role: ");
//     scanf(" %[^\n]", p.role);
//     printf("Enter Rating: ");
//     scanf("%f", &p.rating);

//     players[count++] = p;
//     printf("Player added successfully!\n");
// }

// void displayPlayers() {
//     if (count == 0) {
//         printf("\nNo players to display!\n");
//         return;
//     }

//     printf("\n--- Player List ---\n");
//     for (int i = 0; i < count; i++) {
//         printf("\nPlayer %d\n", i + 1);
//         printf("ID       : %d\n", players[i].id);
//         printf("Name     : %s\n", players[i].name);
//         printf("Country  : %s\n", players[i].country);
//         printf("Age      : %d\n", players[i].age);
//         printf("Role     : %s\n", players[i].role);
//         printf("Rating   : %.2f\n", players[i].rating);
//     }
// }

// int searchPlayer(int id) {
//     for (int i = 0; i < count; i++) {
//         if (players[i].id == id)
//             return i;
//     }
//     return -1;
// }

// void searchPlayerByID() {
//     int id;
//     printf("\nEnter Player ID to search: ");
//     scanf("%d", &id);

//     int index = searchPlayer(id);
//     if (index == -1) {
//         printf("Player not found!\n");
//     } else {
//         printf("\n--- Player Found ---\n");
//         printf("ID       : %d\n", players[index].id);
//         printf("Name     : %s\n", players[index].name);
//         printf("Country  : %s\n", players[index].country);
//         printf("Age      : %d\n", players[index].age);
//         printf("Role     : %s\n", players[index].role);
//         printf("Rating   : %.2f\n", players[index].rating);
//     }
