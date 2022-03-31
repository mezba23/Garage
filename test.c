
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 200

int num;
struct node* tail=NULL;
char element[MAX];
char ele[MAX];

struct node{
    char data[MAX];
    struct node* next;
};

struct node* emptynode(char data[MAX]){
    struct node* temp=malloc(sizeof(struct node));
    strcpy(temp->data,data);
    temp->next=temp;
    return temp;
}

struct node* addatend(struct node* tail,char data[MAX])
{
    struct node* newP=malloc(sizeof(struct node));
    strcpy(newP->data,data);
    newP->next=NULL;
    tail->next=newP;
    tail=tail->next;
    return tail;
};

int search(struct node* tail, char element[MAX]){
    struct node* temp;
    int count=0;
    if(tail==NULL){
        return -2;
    }
    temp=tail->next;
    do{
        if(strcmp(temp->data,element)==0){
            return count;
        }
        temp=temp->next;
        count++;
    }while(temp!=tail->next);
    return-1;
}

int SEARCH()
{
    struct node *temp;
    printf("Enter the tie slot");
    scanf("%s",&element);
    temp=tail->next;
    while(temp!=tail)
    {
        if(strcmp(temp->data,element)==0)
        {
            printf("Time slot already booked");
            break;
        }
        else
        {
            temp=temp->next;
        }
    }
    if(temp==NULL)
    {
        printf("time slot not booked");
    }
}

void print(struct node* tail){
    struct node* p= tail->next;
    do{
        printf("%s ",p->data);
        p=p->next;
    }while(p!=tail->next);
}

void car_wash (struct node* tail){
    tail=emptynode("first_node");
    printf("\nenter time-slot:");
    scanf("%s",&ele);
    tail=addatend(tail,ele);
    FILE *fptr;
    fptr=fopen("Car_wash.txt","a+");
    fwrite(&ele,MAX,1,fptr);
    fclose(fptr);
}


int main()
{       
        car_wash(tail);
        print(tail);
        int num =0;
        char word[2000];
        char string[50];
        char Car_wash[100] = {0};
        SEARCH();
        //printf("enter");
        //scanf("%s",&ele);
       // search(tail,ele);

        /*while(Car_wash[0]!= '0')
        {
                FILE *in_file = fopen("Car_wash.txt", "r");
                if (in_file == NULL)
                {
                        printf("Error file missing\n");
                        exit(-1);
                }

                printf("please enter a word(enter 0 to end)\n");
                scanf("%s", Car_wash);
                while ( fscanf(in_file,"%s", string) == 1)
                {
                        //Add a for loop till strstr(string, Car_wash) does-not returns null. 
                        if(strstr(string, Car_wash)!=0) {//if match found
                                num++;
                        }
                }
                printf("we found the word %s in the file %d times\n",Car_wash,num );
                num = 0;
                fclose(in_file);
        }*/
        return 0;
} 