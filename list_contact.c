#include "addressbook.h"
void sort(struct AddressBook *addressBook,int contact_count)
{
    int choice;
    printf("1.Sort by Name\n");
    printf("2.Sort by Phone\n");
    printf("3.Sort by Email ID\n");
    printf("Select for print\n");
    scanf("%d",&choice);


    switch(choice)
    {
    case 1:
    {
        for(int i=0; i<contact_count-1; i++)
        {
             for(int j=0; j<contact_count-i-1; j++)
             {
             if(strcmp(addressBook->contacts[j].name,addressBook->contacts[j+1].name) > 0)
            {
               struct Contact temp = addressBook->contacts[j];
               addressBook->contacts[j] = addressBook->contacts[j+1];
               addressBook->contacts[j+1] = temp;
            }
        }
        }
    }
        break;

        case 2:
        {
         for(int i=0; i<contact_count-1; i++)
        {
             for(int j=0; j<contact_count-i-1; j++)
             {
             if(strcmp(addressBook->contacts[j].phone,addressBook->contacts[j+1].phone) > 0)
            {
               struct Contact temp = addressBook->contacts[j];
               addressBook->contacts[j] = addressBook->contacts[j+1];
               addressBook->contacts[j+1] = temp;
            }
        }
        }
        }
        break;


        case 3:
        {
         for(int i=0; i<contact_count-1; i++)
        {
             for(int j=0; j<contact_count-i-1; j++)
             {
             if(strcmp(addressBook->contacts[j].email,addressBook->contacts[j+1].email) > 0)
            {
               struct Contact temp =  addressBook->contacts[j];
               addressBook->contacts[j]   =  addressBook->contacts[j+1];
               addressBook->contacts[j+1] =  temp;
            }
        }
        }
        }break;

        default:
        printf("Invalid ip\n");
    }





}
void list_contacts(struct AddressBook *addressBook, int contact_count)
{
    printf("\n\t\t\t:::Contact info:::\n");
    printf("|---------------------------------------------------------------|\n");
    printf("| S.L | Name         | Phone        | Email                     |\n");

    for (int i = 0; i < contact_count; i++)
    {
        printf("|-----+--------------+--------------+---------------------------|\n");
        printf("| %-3d | %-12s | %-12s | %-25s |\n",
               i + 1,
               addressBook->contacts[i].name,
               addressBook->contacts[i].phone,
               addressBook->contacts[i].email);
            
    }

    printf("|---------------------------------------------------------------|\n");
}