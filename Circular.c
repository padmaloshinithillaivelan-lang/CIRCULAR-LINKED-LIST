#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *temp, *newNode;
    int i, n = 3, x;

  
    for(i=1; i<=n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter data %d: ", i);
        scanf("%d", &x);
        newNode->data = x;
        
        if(head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }
    temp->next = head; // Make it circular

    // Display
    printf("\nCircular Linked List: ");
    temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while(temp != head);
    printf("HEAD\n");

    return 0;
}
