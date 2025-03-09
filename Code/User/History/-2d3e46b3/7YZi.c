#include <stdio.h>
#include <stdlib.h>

struct node
    {
        int data;
        struct node *next;
    };
void insert(struct node **root);
void begining(struct node **root);
void display(struct node *root);
void length(struct node *root);

int main()
    {
        int ch;
        struct node *root=NULL;
    do
    {
        printf("\n MENU");
        printf("\n insert list...");
        printf("\n insert begining...");
        printf("\n display list...");
        printf("\n length of the list...");
        printf("\n exit");
        printf("\n enter your choice [1-4]");
        scanf ("%d",&ch);
        switch (ch)
        {
        case 1:insert(&root);
                break;
        case 2:begining(&root);
                break;
        case 3:display(root);
                break;
        case 4:length(root);
                break;          
        default:printf("\n wrong option entered...");
            break;
        } 
    } while (ch!=5);
}
void insert(struct node **root)
{
    struct node  *temp,*ptr;
    temp =(struct node *)malloc(sizeof(struct node));
    printf("\n enter data...");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if (*root==NULL)
    {
        *root=temp;
    }
    else
    {
        ptr=*root;
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}
void display(struct node *root)
    {
        struct node *ptr;
        ptr=root;
        while (ptr!=NULL)
        {
            printf("%d--->",ptr->data);
            ptr=ptr->next;
        }
        
    }
