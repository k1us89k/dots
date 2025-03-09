#include <stdlib.h>
#include <stdio.h>

struct node
    {
        int data;
        struct node *next;
    };
void insert();
void begining();
void display();
void length();

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
        case 1:insert();
                break;
        case 2:begining();
                break;
        case 3:display();
                break;
        case 4:length();
                break;          
        default:printf("\n wrong option entered...")
            break;
        } 
    } while (ch!=5);
}
insert()
{
    struct node  *temp,*ptr;
    temp =(struct node *)malloc(sizeof(struct node));
    printf("\n enter data...");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if (root==NULL)
    {
        root=NULL;
    }
    else
    {
        ptr=next;
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}
display()
    {
        struct node *ptr;
        ptr=root;
        while (ptr->next!=data)
        {
            printf("%d--->",ptr->data);
        }
        
    }