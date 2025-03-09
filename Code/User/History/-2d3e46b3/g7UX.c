#include <stdio.h>
#include <stdlib.h>

struct node
    {
        int data;
        struct node *next;
    };
void insert();
void begining();
void display();
void length();
struct node *root = NULL;

int main()
    {
        int ch;
    do
    {
        printf("\n MENU");
        printf("\n [1]insert list...");
        printf("\n [2]insert begining...");
        printf("\n [3]display list...");
        printf("\n [4]length of the list...");
        printf("\n [5]exit");
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
        default:printf("\n wrong option entered...");
        } 
    } while (ch!=5);
}
void insert()
{
    struct node  *temp,*ptr;
    temp =(struct node *)malloc(sizeof(struct node));
    printf("\n enter data...");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if (root == NULL)
    {
        root=temp;
    }
    else
    {
        ptr=root;
        while (ptr->next != NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}
void display()
    {
        struct node *ptr;
        ptr=root;
        while (ptr!= NULL)
        {
            printf("%d--->",ptr->data);
            ptr=ptr->next;
        }
            printf("\nNULL");
    }
    void begining()
    {
        printf("\n begin");
    }
        void length()
    {
        printf("\n begin");
    }