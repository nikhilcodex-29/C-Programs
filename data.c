// #include <stdio.h>
// #include <stdlib.h>
// struct node{
//     int data;
//     struct node "next";
// }
// int main()
// {
//     struct node *head =NULL, *second=NULL, *third = NULL;
//     head = (struct node*)malloc(sizeof(struct node));
//     second = (struct node*)malloc(sizeof(struct node));
//     third = (struct node*)malloc(sizeof(struct node));
//     head->data=20;
//     head->next=second;
//     second->data=30;
//     second->next=third;
//     third->data=40;
//     third->next=NULL;
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// struct node {
//     int data;
//     struct node *next;
// };
// struct node* create() 
// {
//     struct node *head=NULL, *temp = NULL; *newnode = NULL;
//     int choice = 1;
//     while (choice == 1) {
//         //Create a new node
//         newnode = (struct node *)malloc(sizeof(struct node));
//         //Take data from user
//         printf("Enter data: ");
//         scanf("%d", &newnode->data);
//         newnode->next = NULL;
//         //If list is empty
//         if(head == NULL) {
//             head = temp = newnode;
//              }
//         // If list already has nodes
//         else {
//             temp->next = newnode;
//             temp = newnode;
// }
// // Ask user whether to continue
// printf("Press 1 to add another node, 0 to stop: ");
// scanf("%d", &choice);

//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h> 
// struct node {
//     int data;
//     struct node *next;
// };
// struct node* create() {
//     struct node *head = NULL, *temp = NULL, *newnode = NULL;
//     int choice = 1;
//     while (choice == 1) {
//         // Create a new node
//         newnode = (struct node *)malloc(sizeof(struct node));
//         // Take data from user
//         printf("Enter data: ");
//         scanf("%d", &newnode->data);
//         newnode->next = NULL;
//         // If list is empty
//         if (head == NULL) {
//             head = temp = newnode;
//         }
//         // If list already has nodes
//         else {
//             temp->next = newnode;
//             temp = newnode;
//         }
//         // Ask user whether to continue
//         printf("Press 1 to add another node, 0 to stop: ");
//         scanf("%d", &choice);
//     }
//     return head;
// }

// #include <stdio.h>
// struct node *reverse_list(struct node *head) 
// int main()
// {
//     struct node *p = NULL;
//     struct node *c = head;
//     struct node *n = NULL;
//     while (c != NULL)
//     {
//         n = c -> next; //store next node
//         c -> next = p; // reverse link
//         p = c;         // move p forward
//         c = n;         // move c forward
//     }
//     head = p;          // update head
//     return head;
//     {
//         struct node *head = NULL;
//         head = create();
//         dispaly(head);
//         head = reverse_list(head);
//         display(head);
//         return 0;
//     }
// }
// #include <stdio.h>
// struct node *delete_at_position(struct node *head, int pos)
// {
//     struct node *temp, *prev;
//     // check empty list
//     if(head == NULL)
//     {
//         printf("List is empty\n");
//         return head;
//     }
//     // delete first node
//     if (pos == 1)
//     temp = head;
//     head = head -> next;
//     free(temp);
//     return head;
//     //delete node at give  position
//     temp = head;
//     for (i = 1; i < pos; i++)
//     {
//         prev = temp;
//         temp = temp -> next;
//         free(temp);
//         return head;
//     }
//     int main()
//     {
//         struct node * head = NULL;
//         head = create();
//         display(head);
//         head = delete_at_position(head, 3);
//         display (head);
//         return 0;
//     }
// }


