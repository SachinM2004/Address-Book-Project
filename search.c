#include "addressbook.h"

void search_contact(struct AddressBook *addressBook,int contact_count)
{
    int choice;
    printf("1.Search by Name\n");
    printf("2.Search by Mobail Number\n");
    printf("3.Search by Email ID\n");
    scanf("%d",&choice);

    switch(choice)
    {
       
        case 1:
        {
            getchar();
            char name[20];
                printf("Enter Name:\n");
                scanf("%[^\n]",name);

                 int j=0;
                int found=0;

            if(valid_name(name))
                {

                    for(int i=0; i<contact_count; i++)
                    {
                        if(strcmp(addressBook->contacts[i].name,name)==0)
                        {
                            if(found==0)
                            {
                                printf("\t\t:::Contact info:::\n");
                    printf("|---------------------------------------------------|\n");
                    printf("| S.L |     Name    |    Phone   |     Email Id     |\n");
                            }

                    printf("|-----+-------------+------------+------------------|\n");
                    printf("|%-5d|%-13s| %-11s|%-18s|\n",j+1,addressBook->contacts[i].name,addressBook->contacts[i].phone,addressBook->contacts[i].email); 
                    j++;
                    found=1; 
                    }
                }

                    if(found)
                    printf("|---------------------------------------------------|\n");
                    else printf("Contact not Found!!!\n");
                    
                    }
            }
        
            
                
        
        break;

        case 2:
        {
            getchar();
            char phone[15];
            printf("Enter your mobail no: \n");
            scanf("%[^\n]",phone); 

            if(valid_phone(phone))
            {  int j=0;
                for(int i=0; i<contact_count; i++)
                {
                    if(strcmp(addressBook->contacts[i].phone,phone)==0)
                    {
                    printf("\t\t\t:::Contact info:::\n");
                    printf("|---------------------------------------------------|\n");
                    printf("| S.L |     Name    |    Phone   |     Email Id     |\n");
                    {
                    printf("|-----+-------------+------------+------------------|\n");
                    printf("|%-5d|%-13s| %-11s|%-18s|\n",j+1,addressBook->contacts[i].name,addressBook->contacts[i].phone,addressBook->contacts[i].email);  
                    }
                    printf("|---------------------------------------------------|\n");j++;
                    }
                }
            }
            else printf("Contact not Found!!!\n");

        }
        break;

        case 3:
        {
        getchar();
        char email[25];
        int j=0;
        printf("Enter your Email address: \n");
        scanf("%[^\n]",email);

       int flag =0;
            for(int i=0; i<contact_count; i++)
            {
            if(strcmp(addressBook->contacts[i].email,email)==0)
            {
                    printf("\t\t\t:::Contact info:::\n");
                    printf("|---------------------------------------------------|\n");
                    printf("| S.L |     Name    |    Phone   |     Email Id     |\n");
                    {
                    printf("|-----+-------------+------------+------------------|\n");
                    printf("|%-5d|%-13s| %-11s|%-18s|\n",j+1,addressBook->contacts[i].name,addressBook->contacts[i].phone,addressBook->contacts[i].email);  
                    }
                    printf("|---------------------------------------------------|\n");
                flag=1;
                j++;
            }
            }
        
        if(flag==0)
        printf("Contact not Found!!!\n");
        }
        break;
        
        default:
        printf("Invalid Input\n");
    }
}