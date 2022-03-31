#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct node1
{
    char data[5];
    struct node *next;
}*head1=0,*temp1,*newnode1;

struct node2
{
    char data[5];
    struct node *next;
}*head2=0,*temp2,*newnode2;




void car_wash()
{
    int flag;
    if(head2!=NULL)
    {
     flag= search(head2);
    }

    if(flag!=1||head2==NULL)
    {

                int choice =1 ;

                while(choice)
                {

                newnode1= (struct node1*)malloc(sizeof(struct node1));
                newnode1->next=NULL;
                printf("Enter the TIMESLOT you need for wash\t");

                scanf("%s",&newnode1->data);

                if(head1==0)
                {
                    head1 = temp1 = newnode1;
                }

                else
                {
                    temp1->next=newnode1;
                    temp1=newnode1;
                }

                printf("Enter a choice 1 to continue\t\t 0 to quit\n");
                scanf("%d",&choice);

                }

    }
}

void car_paint()
{
    int flag;

    if(head1!=NULL)
    {
     flag=search(head1);
    }

    if(flag!=1||head1==0)
    {
                newnode2= (struct node2*)malloc(sizeof(struct node2));
                newnode2->next=NULL;
                printf("Enter the TIMESLOT you need paint\t");

                scanf("%s",&newnode2->data);

                if(head2==0)
                {
                    head2 = temp2 = newnode2;
                }

                else
                {
                    temp2->next=newnode2;
                    temp2=newnode2;
                }

    }

}

void dis(struct node1 *temp)
{


                while(temp!=NULL)
                {
                    printf("%s\n",temp->data);

                    temp=temp->next;
                }


}

int search(struct node1 *temp)
{


                    char search[5];
                    printf("enter the data to search\t");
                    scanf("%s",&search);


                    while(temp!=NULL)
                    {
                        if(strcmp(temp->data,search)==0)
                        {
                          printf("SLOT ALREADY BOOKED\n");
                          return 1;
                          break;
                        }
                        temp=temp->next;
                    }
                    if(temp==NULL)
                    {
                    return 0;
                    }


}


int main()
{
    carpaint();
    int s;
    printf("\n\n\n\n1 or 0");
    scanf("%d",&s);
    if(s==1){
        carwash();
    }
    else{carpaint();}



    /*struct node *head=0,*temp;
    printf("\t\t\t\t\t\t\t\tMENU\t\t\t\t\n");
    printf("\n\t\t1.CREATE  2.DISPLAY  3.SEARCH  0.QUIT\n\n\n");
    int op=1;
    while(op)
    {

    printf("\nEnter the option from the MENU displayed above   ");
    scanf("%d",&op);
        switch(op)
        {
            case 1:
            carwash();
                break;
            case 2:
            dis();
                break;
            case 3:
                search();
                break;

        }
    }*/

    return 0;
}

