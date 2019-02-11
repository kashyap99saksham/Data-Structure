// SAKSHAM KASHYAP
// INSERT AT FIRST IN SINGLY LINK LIST
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* link;
};
struct node* start = NULL;

void insertion()
{
    struct node* ptr,*temp,*new;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter The Values\n");
    scanf("%d",&temp->data);
    temp->link = NULL;
    if(start==NULL)
    {
        start = temp;
        printf("Value Is Inserted %d\n",temp->data);
    }
    else 
    {
        temp->link = start;
        start = temp;
        printf("Value Is Inserted %d\n",start->data);
    }
}

void display()
{
   struct node* ptr2;
    if (start == NULL)
        printf("EMPTY!!!"); 
    ptr2 = start;
    while(ptr2->link!=NULL)
    {
        printf("%d\t",ptr2->data);
        ptr2 = ptr2->link;
    }
    printf("%d\t",ptr2->data);

}

int main()
{
    int i,n;
    printf("How MAny Node You Want to Insert?");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        insertion();
    }
    display();
}