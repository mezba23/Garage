#include<stdio.h>
void main()
{
    int choice = 0;
    do
    {
        headMessage("MAIN MENU");
        printf("\n\n\n\t\t\t1.Add MAgz");
        printf("\n\t\t\t2.Search vl or MAg");
        printf("\n\t\t\t3.View ");
        printf("\n\t\t\t4.Delete Vol");
        printf("\n\t\t\t5.Update Password");
        printf("\n\t\t\t0.Exit");
        printf("\n\n\n\t\t\tEnter choice => ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            addBookInDataBase();
            break;
        case 2:
            searchBooks();
            break;
        case 3:
            viewBooks();
            break;
        case 4:
            deleteBooks();
            break;
        case 5:
            updateCredential();
            break;
        case 0:
            printf("\n\n\Thank you!!!\n\n\n\n\n");
            exit(1);
            break;
        default:
            printf("\n\n\nINVALID INPUT!!! Try again...");
        }
    }
    while(choice!=0);
}