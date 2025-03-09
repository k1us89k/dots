#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void insert();
void beginning();
void display();
void length();
struct node *root = NULL;

int main() {
    int ch;
    do {
        printf("\n MENU");
        printf("\n [1] Insert into the list");
        printf("\n [2] Insert at the beginning");
        printf("\n [3] Display list");
        printf("\n [4] Length of the list");
        printf("\n [5] Exit");
        printf("\n Enter your choice [1-5]: ");
        scanf("%d", &ch);

        switch (ch) {
        case 1:
            insert();
            break;
        case 2:
            beginning();
            break;
        case 3:
            display();
            break;
        case 4:
            length();
            break;
        case 5:
            printf("\n Exiting the program...");
            break;
        default:
            printf("\n Wrong option entered...");
        }
    } while (ch != 5);

    return 0;
}

void insert() {
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));

    if (temp == NULL) {
        printf("\n Memory allocation failed");
        return;
    }

    printf("\n Enter data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if (root == NULL) {
        root = temp;
    } else {
        ptr = root;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void display() {
    struct node *ptr;
    if (root == NULL) {
        printf("\n The list is empty.");
        return;
    }

    ptr = root;
    while (ptr != NULL) {
        printf("%d --> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

void beginning() {
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    if (temp == NULL) {
        printf("\n Memory allocation failed");
        return;
    }

    printf("\n Enter data: ");
    scanf("%d", &temp->data);
    temp->next = root;
    root = temp;
}

void length() {
    struct node *ptr = root;
    int count = 0;

    while (ptr != NULL) {
        count++;
        ptr = ptr->next;
    }

    printf("\n Length of the list: %d\n", count);
}
