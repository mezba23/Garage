#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
#include<process.h>
#include<time.h>
//sync
#define MAX 200

int num;
struct node* tail=NULL;
char element[MAX];
char ele[MAX];

int i,j;
int main_exit;
void menu();
struct {
    char name[60];
    char vehicle[60];
    double phone;
    char numberplate[60];
}add,upd,check;

void fordelay(int j)
{   int i,k;
    for(i=0;i<j;i++)
        k=i;
}


void new_acc(){
    int choice;
    FILE *ptr;
    ptr=fopen("record.dat","a+");
    phone_no:
    system("cls");
    printf("\nEnter the phone no.:");
    scanf("%s",&check.phone);
    while(fscanf(ptr,"%s %lf %s %s\n",&add.name,&add.phone,&add.numberplate,&add.vehicle)!=EOF)
    {
        if (check.phone==add.phone)
            {
            printf("Phone no. already in use!");
            fordelay(1000000000);
                goto phone_no;
            }
    }
    add.phone=check.phone;
    printf("\nEnter the name:");
    scanf("%s",&add.name);
    printf("\nEnter the phone number: ");
    scanf("%lf",&add.phone);
    printf("\nEnter the vehicle:");
    scanf("%s",&add.vehicle);
    printf("\nEnter the number plate: ");
    scanf("%s",&add.numberplate);
    printf(ptr,"%s %lf %s %s\n",add.name,add.phone,add.numberplate,add.vehicle);
    fclose(ptr);
    printf("\nAccount created successfully!");
    add_invalid:
    printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d",&main_exit);
    system("cls");
    if (main_exit==1)
        menu();
    else if(main_exit==0)
        close();
    else
        {
            printf("\nInvalid!\a");
            goto add_invalid;
        }
}

void close(void)
{
    printf("\n\n\n\nThis C Mini Project is developed by MEZBA!!!");
}

void menu(void)
{
    int choice;
    system("cls");
    system("color 8");
    printf("\n\n\t\t\tWELCOME TO MY GARAGE");
    printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ACCOUNT \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t1.Log-in\n\t\t2.Sign-up\n\t\t3.Exit\n\n\n\n\n\t\t Enter your choice:");
    scanf("%d",&choice);

    system("cls");
    switch(choice)
    {
        case 1:login();
        break;
        case 2:new_acc();
        break;
        case 3:close();
        break;

    }
}

void menu2(void)
{
    int choice2;
    system("cls");
    system("color 8");
    printf("\n\n\n\t\t\t   \xB2\xB2\xB2\xB2\xB2\xB2\xB2 MY GARAGE SYSTEM \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t1.Car Repair\n\t\t2.Car Petrol\n\t\t3.Car Rental\n\t\t4.Car Wash\n\t\t5.Car Paint\n\t\t6.Exit\n\n\n\n\n\t\t Enter your choice:");
    scanf("%d",&choice2);

    system("cls");
    switch(choice2)
    {
        case 1:order1();
        break;
        case 2:order2();
        break;
        case 3:car_rental();
        break;
        case 4:car_wash();
        break;
        case 5:car_paint();
        break;
        case 6:close();
        break;

    }
}

void order1(){
    label:
    printf("1. ORDER FOR YOURSELF.\n");
    printf("2. ORDER FOR OTHERS.\n");
    int cho;
    printf("ENTER YOUR CHOICE:");
    scanf("%d",&cho);
    system("cls");
    switch(cho){
        case 1:car_repair1();
        break;
        case 2:car_repair2();
        break;
        default:{printf("Wrong choice!! Try again.\n");}
        goto label;
    }
}

void order2(){
    label:
    printf("1. ORDER FOR YOURSELF.\n");
    printf("2. ORDER FOR OTHERS.\n");
    int cho;
    printf("ENTER YOUR CHOICE:");
    scanf("%d",&cho);
    system("cls");
    switch(cho){
        case 1:car_petrol1();
        break;
        case 2:car_petrol2();
        break;
        default:{printf("Wrong choice!! Try again.\n");}
        goto label;
    }
}


void location1(){
    system("python location.py");
}

void location2(){
    char ch[200];
    printf("Enter your location:");
    scanf("%s",&ch);

    FILE *fptr;
    fptr=fopen("man_location.txt","a+");
    fwrite(&ch,sizeof(ch),1,fptr);
    fclose(fptr);
}

void car_repair1(void){
    printf("Searching for Repair Services");
    for(int i=0;i<=20;i++)
    {
        fordelay(100000000);
        printf(".");
    }
    system("cls");

    int lower = 10, upper = 20, count = 1;
	srand(time(0));
	//for (int i = 0; i < count; i++){
	int num = (rand() % (upper - lower + 1)) + lower;
	//}


    location1();


    printf("\nRepair Service Found!\nSharing your location now...\n\n\tYour service will be there in %d minutes!!!",num);
    printf("");
    login_try:
    printf("\n\nEnter 1 to go back to and 0 to exit:");
            scanf("%d",&main_exit);
            if (main_exit==1)
                    {

                        system("cls");
                        menu2();
                    }

            else if (main_exit==0)
                    {
                    system("cls");
                    close();}
            else
                    {printf("\nInvalid!");
                    fordelay(1000000000);
                    system("cls");
                    goto login_try;}

}

void car_repair2(void){

    location2();

    system("cls");

    printf("\nSearching for Repair Services");
    for(int i=0;i<=20;i++)
    {
        fordelay(100000000);
        printf(".");
    }
    system("cls");

    int lower = 10, upper = 20, count = 1;
	srand(time(0));
	//for (int i = 0; i < count; i++){
	int num = (rand() % (upper - lower + 1)) + lower;
	//}

    printf("\nRepair Service Found!\nSharing your location now...\n\n\tYour service will be there in %d minutes!!!",num);
    printf("");
    login_try:
    printf("\n\nEnter 1 to go back to and 0 to exit:");
            scanf("%d",&main_exit);
            if (main_exit==1)
                    {

                        system("cls");
                        menu2();
                    }

            else if (main_exit==0)
                    {
                    system("cls");
                    close();}
            else
                    {printf("\nInvalid!");
                    fordelay(1000000000);
                    system("cls");
                    goto login_try;}


}

void display1(){
    printf("######################### \n");
    printf("#    PETROL AVAILABLE   # \n");
    printf("######################### \n");
    printf("#          1L           # \n");
    printf("#          2L           # \n");
    printf("#          5L           # \n");
    printf("#          8L           # \n");
    printf("######################### \n");
}

void car_petrol1(void){

    printf("Searching for petrol nearby");
    for(int i=0;i<=20;i++)
    {
        fordelay(100000000);
        printf(".");
    }
    system("cls");

    int lower = 10, upper = 20, count = 1;
	srand(time(0));
	//for (int i = 0; i < count; i++){
	int num = (rand() % (upper - lower + 1)) + lower;
	//}

    location1();
    printf("\n");
    display1();
    char ch[10];
    printf("\nEnter Quantity:");
    scanf("%s",&ch);

    printf("\nSharing your location now...\n\n\tYour fuel will be there in %d minutes!!!",num);
    printf("");
    login_try:
    printf("\n\nEnter 1 to go back to and 0 to exit:");
            scanf("%d",&main_exit);
            if (main_exit==1)
                    {

                        system("cls");
                        menu2();
                    }

            else if (main_exit==0)
                    {
                    system("cls");
                    close();}
            else
                    {printf("\nInvalid!");
                    fordelay(1000000000);
                    system("cls");
                    goto login_try;}

}

void car_petrol2(void){

    location2();
    system("cls");
    printf("Searching for petrol nearby");
    for(int i=0;i<=20;i++)
    {
        fordelay(100000000);
        printf(".");
    }
    system("cls");

    display1();
    char ch[10];
    printf("\nEnter Quantity:");
    scanf("%s",&ch);

    int lower = 10, upper = 20, count = 1;
	srand(time(0));
	//for (int i = 0; i < count; i++){
	int num = (rand() % (upper - lower + 1)) + lower;
	//}

    printf("\nSharing your location now...\n\n\tYour fuel will be there in %d minutes!!!",num);
    printf("");
    login_try:
    printf("\n\nEnter 1 to go back to and 0 to exit:");
            scanf("%d",&main_exit);
            if (main_exit==1)
                    {

                        system("cls");
                        menu2();
                    }

            else if (main_exit==0)
                    {
                    system("cls");
                    close();}
            else
                    {printf("\nInvalid!");
                    fordelay(1000000000);
                    system("cls");
                    goto login_try;}

}

struct car
{
    char customername[50];
    char customerId[13];
    char carrented[100];
    int n,rent,days;
    int dr,mr,yr,dret,mret,yret;
};
char carbrand[10][20]={"HYUNDAI","SUZUKI","HONDA","TOYOTA","FORD","TATA","MERCEDES","AUDI","ISUZU"};
char carmodel[10][20]={"Veloster","Celerio","Civic","Avalon","Explorer","Safari","E-Class","Q3","D-MAX"};
int carseat[10]={4,4,4,8,4,4,4,8,8,0};
int carrentperday[10]={250,250,250,250,250,250,250,250,250,0};
int carrentpermontly[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int z=0,u=0;
struct car c,ca[10],cr[10],cn={0};
void car_rent()
{
    int i,f;
    int t,days1=0,days2=0,days3=0;
    char ch;
    int j,x;
    printf("WELCOME DEAR CUSTOMER!!! \n");
    display();
    printf("ENTER THE BRAND OF CAR YOU WANT TO RENT: ");
    scanf("%s",c.carrented);
    printf("ENTER DATE ON WHICH YOU WILL TAKE THE CAR(dd mm yyyy): ");
    scanf("%d%d%d",&c.dr,&c.mr,&c.yr);
    printf("ENTER THE DATE ON WHICH YOU WILL RETURN THE CAR(dd mm yyyy): ");
    scanf("%d%d%d",&c.dret,&c.mret,&c.yret);
    printf("LETS CHECK WHETHER THE CAR IS AVAILABLE OR NOT\n");
    //FILE *ptr;
    //ptr=fopen("Car_rent.txt","r");
    //fread(ca,sizeof(ca),1,ptr);

   for (i = 0; c.carrented[i]!='\0'; i++) {                       //lowercase to uppercase
      if(c.carrented[i] >= 'a' && c.carrented[i] <= 'z') {
         c.carrented[i] = c.carrented[i] - 32;
      }
   }

       for(i=0;i<10;i++)
       {
        if(strcmp(ca[i].carrented,c.carrented)==0)
        {
            for(t=0;t<=ca[i].mr;t++)
                days1+=carrentpermontly[t];
            for(t=0;t<=ca[i].mret;t++)
                days2+=carrentpermontly[t];
            for(t=0;t<=c.mr;t++)
                days3+=carrentpermontly[t];
            days1+=ca[i].dr;
            days2+=ca[i].dret;
            days3+=c.dr;
            if((days3-days1)*(days2-days3)>=0)
                f=1;
            else
            f=0;
               if(f==1)
               {
                 printf("Car not available.Are you interested in trying another car?\nIf yes enter Y else enter N\n");
                 getchar();
                 scanf("%c",&ch);
                 //fclose(ptr);
                 if(ch=='y'||ch=='Y')
                    car_rent();
                 else
                 {
                     printf("THANKS FOR COMING!!PLEASE VISIT AGAIN \n\n\n");
                     //fclose(ptr);
                     break;
                 }
               }
        }
        else if(strcmp(ca[i].carrented,c.carrented)!=0 ||f==0)
        {
            printf("CAR AVAILABLE!! \n");
            FILE *fp;
            fp=fopen("Car_rent","a");
            strcpy(ca[u].carrented,c.carrented);
            ca[u].dr=c.dr;
            ca[u].mr=c.mr;
            ca[u].yr=c.yr;
            ca[u].dret=c.dret;
            ca[u].mret=c.mret;
            ca[u].yret=c.yret;
            //u++;
            fwrite(&c,sizeof(ca),1,fp);
            fclose(fp);
            printf("ENTER YOUR NAME: ");
            scanf("%s",c.customername);
            printf("ENTER YOUR ID NUMBER: ");
            scanf("%s",c.customerId);
            c.n=date(c.yr,c.yret,c.mr,c.mret,c.dr,c.dret);
            for(j=0;j<10;j++)
            {
                x=strcmp(c.carrented,carbrand[j]);
                if(x==0)
                    break;
            }
            c.rent=c.n*carrentperday[j];
            printf("WARNING: If any damage is done to the car then you are entirely responsible. The car has to be returned in its initial condition.\n");
            printf("Details:\n");
            printf("NAME:\t%s\nID:\t%s\nCAR RENTED:\t%s\nNUMBER OF DAYS:\t%d\nRENT:\t%d\n",c.customername,c.customerId,c.carrented,c.n,c.rent);
            //fclose(ptr);
            strcpy(cr[z].customername,c.customername);
            strcpy(cr[z].customerId,c.customerId);
            strcpy(cr[z].carrented,c.carrented);
            cr[z].n=c.n;
            cr[z].rent=c.rent;
            //z++;
            FILE *fptr;
            fptr=fopen("Car_rent.txt","a+");
            fwrite(&cr,sizeof(cr),1,fptr);
            fclose(fptr);
            break;
        }
    }
}
int date(int y1,int y2,int m1,int m2,int d1,int d2)
{
    int i,days1=0,days2=0,days3=0 ;
        for(i=0;i<=m1;i++)
            days1+=carrentpermontly[i];
        for(i=0;i<=m2;i++)
            days2+=carrentpermontly[i];
        days1+=d1;
        days2+=d2;
        return(days2-days1);
}
void car_return()
{
    //FILE *fptr,*nptr;
    char id[13];
    int dd,mm,yy,d,m,y,flag=0,i,j;
    printf("Welcome back dear customer \n");
    printf("Please enter your id\n");
    scanf("%s",id);
    //fptr=fopen("Car_rent","r");
    //fread(cr,sizeof(struct car),1,fptr);
    for(i=0;i<10;i++)
    {
        if(strcmp(cr[i].customerId,id)==0)
        {
            flag=1;
            printf("HELLO %s\n",cr[i].customername);
            printf("For confirmation please enter the date on which you took the car:");
            scanf("%d%d%d",&dd,&mm,&yy);
            printf("Date on which you are returning the date in(dd mm yyyy)format:");
            scanf("%d%d%d",&d,&m,&y);
            cr[i].days=date(yy,y,mm,m,dd,d);
            if(cr[i].days>cr[i].n)
            {
                    cr[i].rent+=50*(cr[i].days-cr[i].n);
            }
            printf("FINAL AMOUNT:%d \n",cr[i].rent);
            printf("\n\n");
            break;
        }
    }
    if(flag==0)
           {
             printf("Customer not found\n");
            //fclose(fptr);
           }
        else
        {
            //nptr=fopen("Car_rent","w+");
            //fread(cr,sizeof(cr),1,nptr);
            for(j=0;j<10;j++)
            {
                if(j==i)
                    memset(&cr[j].carrented[0],0,sizeof(cr[j].carrented[0]));
            }
            //fclose(fptr);
            //remove("Car_rent");
            //rename("Car_temp","Car_rent");
           // fclose(nptr);
        }
}
void display()
{
    printf("################################################ \n");
    printf("#    CAR BRAND   #  MODEL  # RENT PER DAY(Php) # \n");
    printf("################################################ \n");
    printf("#     HYUNDAI    # Veloster #      250         # \n");
    printf("#     SUZUKI     #  Celerio #      250         # \n");
    printf("#      HONDA     #  Civic   #      250         # \n");
    printf("#     TOYOTA     #  Avalon  #      250         # \n");
    printf("#      FORD      # Explorer #      250         # \n");
    printf("#      TATA      #  Safari  #      250         # \n");
    printf("#    MERCEDES    #  E-Class #      250         # \n");
    printf("#      AUDI      #  Q3      #      250         # \n");
    printf("#     ISUZU      #  D-MAX   #      250         # \n");
    printf("################################################ \n");
}
int car_rental()
{
    int q,g,h;
    for(g=1;g<=365;g++)
    {
        for(h=1;h<=10;h++)
        {
                label1:
                printf("\aHI!! ARE YOU HERE TO TAKE THE CAR SERVICE OR RETURN BACK THE CAR? \n 1.WANT TO RENT A CAR.\n 2.WANT TO RETURN THE CAR.\n 3.GO BACK TO MY GARAGE MENU.\n");
                scanf("%d",&q);
                switch(q)
                {
                    case 1:{car_rent();u++;z++;
                    break;}
                    case 2:car_return();
                    break;
                    case 3:menu2();
                    break;
                    default:{printf("Wrong choice!! Try again.\n");
                    goto label1;}
                }

        }
    }
}

void display2(){
    printf("############################# \n");
    printf("#        TIME SLOT          # \n");
    printf("############################# \n");
    printf("#     10:00AM - 12:00PM     # \n");
    printf("#     01:00PM - 03:00PM     # \n");
    printf("#     04:00PM - 06:00PM     # \n");
    printf("#     07:00PM - 09:00PM     # \n");
    printf("############################# \n");
}

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
    display2();
    int flag;
    if(head2!=NULL)
    {
     flag= search_(head2);
    }

    if(flag!=1||head2==NULL)
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
        printf("\nYour has been booked at %s",newnode1->data);
    }
    login_try1:
    printf("\n\nEnter 1 to go back to and 0 to exit:");
            scanf("%d",&main_exit);
            if (main_exit==1)
                    {

                        system("cls");
                        menu2();
                    }

            else if (main_exit==0)
                    {
                    system("cls");
                    close();}
            else
                    {printf("\nInvalid!");
                    fordelay(1000000000);
                    system("cls");
                    goto login_try1;}


}

void car_paint()
{
    display2();
    int flag;

    if(head1!=NULL)
    {
     flag=search_(head1);
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
                printf("\nYour slot has been booked at %s",newnode2->data);

    }
    login_try1:
    printf("\n\nEnter 1 to go back to and 0 to exit:");
            scanf("%d",&main_exit);
            if (main_exit==1)
                    {

                        system("cls");
                        menu2();
                    }

            else if (main_exit==0)
                    {
                    system("cls");
                    close();}
            else
                    {printf("\nInvalid!");
                    fordelay(1000000000);
                    system("cls");
                    goto login_try1;}


}


int search_(struct node1 *temp)
{

    char search[5];
    printf("enter the time-slot:\t");
    scanf("%s",&search);

    int n;
    while(temp!=NULL)
    {
        if(strcmp(temp->data,search)==0)
        {
            printf("SLOT ALREADY BOOKED\n");
            printf("\nPress 1 to continue or 0 to book again...");
            scanf("%d",&n);
            if(n==1){printf("\nyour slot has been booked for %s\n",search);}
            else if(n==0){menu2();}
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

void login()
{
    int choice,test=0;
    FILE *old,*newrec;
    old=fopen("record.dat","r");
    newrec=fopen("new.dat","w");

    printf("\nEnter phone no.:");
    scanf("%d",&upd.phone);
    while(fscanf(old,"%s %lf %s %s\n",&add.name,&add.phone,&add.numberplate,&add.vehicle)!=EOF)
    {
        if (add.phone==upd.phone)
        {
            test=1;
        }
    }
    fclose(old);
    fclose(newrec);
    remove("record.dat");
    rename("new.dat","record.dat");

    if (test=1)
    {
        menu2();
    }

    else if(test!=1)
        {   system("cls");
            printf("\nAccount not found!!\a\a\a");
            login_invalid:
              printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
              scanf("%d",&main_exit);
              system("cls");
                if (main_exit==1)
                    menu();
                else if (main_exit==2)
                    close();
                else if(main_exit==0)
                    login();
                else
                    {
                        printf("\nInvalid!\a");
                        goto login_invalid;
                    }
        }

    else
        {
            printf("\n\n\nEnter 1 to go to the main menu and 0 to exit:");
            scanf("%d",&main_exit);
            system("cls");
            if (main_exit==1)
                menu();
            else
                close();
        }
}

int main()
{
    char pass[20],password[20]="admin";
    int i=0;
    printf("\n\n\t\tEnter the password to login:");
    scanf("%s",pass);
    /*do
    {
    //if (pass[i]!=13&&pass[i]!=8)
        {
            printf("*");
            pass[i]=getch();
            i++;
        }
    }while (pass[i]!=13);
    pass[10]='\0';*/
    if (strcmp(pass,password)==0)
        {
        printf("\n\nPassword Match!\nLOADING");
        for(i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(".");
        }
                system("cls");
            menu();
        }
    else
        {   printf("\n\nWrong password!!\a\a\a");
            login_try:
            printf("\nEnter 1 to try again and 0 to exit:");
            scanf("%d",&main_exit);
            if (main_exit==1)
                    {

                        system("cls");
                        main();
                    }

            else if (main_exit==0)
                    {
                    system("cls");
                    close();}
            else
                    {printf("\nInvalid!");
                    fordelay(1000000000);
                    system("cls");
                    goto login_try;}

        }
        return 0;
}
