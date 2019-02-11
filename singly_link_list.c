// SAKSHAM KASHYAP
// INSERT AT END IN SINGLY LINK LIST
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
    int val;
    struct node* temp,*ptr;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Insert The Value In Linklist\n");
    scanf("%d",&val);
    temp->data = val;
    temp->link = NULL;
    if(start == NULL)
    {
        start = temp;
        printf("Value inserted Successfully %d\n",temp->data);
    }
    else 
    {
        ptr = start;
        while(ptr->link!=NULL)
        {
            ptr = ptr->link;
        }
    ptr->link = temp;
    printf("Value inserted Successfully %d\n",temp->data);  
    }
      
}

void display()
{
    if (start == NULL)
        printf("EMPTY!!!"); 
    
    struct node* ptr2;
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