#include<stdio.h>
#include<unistd.h>
#include "addressbook.h"

int main()
{
   

    struct AddressBook book;
    book.contactCount = 0;
   
    
    for(int i=1; i<=100; i++)
    {
        printf("Loading [");
        for(int j=1; j<=100; j++)
       {
            if(j<=i)
            printf("-");
            else
            printf(" ");
       }
       printf("] %d%%",i);
       usleep(10000);                   
       fflush(stdout);
       printf("\r");

    }
    printf("\nLoading Compleated\n");
    load_contact(&book);
    int opt;

    
    do
    {
        printf("\nAdressbook Menu\n");
        printf("1.Add Contact \n");
        printf("2.Search Contact\n");
        printf("3.Edit Contact \n");
        printf("4.Delete Contact \n");
        printf("5.List all Contact\n");
        printf("6.Save\n");
        printf("7.exit\n");
        printf("Enter choice to continue\n");
        scanf("%d",&opt);

        switch(opt)
        {
            case 1:
                    add_contact(&book);
                    
            break;

            case 2:
                    search_contact(&book,book.contactCount);
            break;

            case 3:
                    edit_contact(&book,book.contactCount);
             break;

            case 4:
                    delete_contacts(&book,book.contactCount);
            break;


            case 5:
                sort(&book,book.contactCount);
                list_contacts(&book,book.contactCount);
            break;

            case 6:
                save_contact(&book);
                break;
            

            case 7:
                printf("Exitinting AdressBook\n");
                return 0;
            break;
            

            default:
            printf("invalid input\n");
            return 0;
        }
    }while(opt!=7);
        
   
 }