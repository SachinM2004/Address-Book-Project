#include "addressbook.h"

void delete_contacts(struct AddressBook *addressBook,int contact_count )
{
    char opt;
   
    int choice;
    printf("1.Delete by Name\n");
    printf("2.Delete by Mobail Number\n");
    printf("3.Delete by Email ID\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        {
            
            char name[20];

                printf("Enter Name:\n");
                getchar();
                scanf("%[^\n]",name);
    
                int duplicate[100];
                int count=0;

            
    

                for(int  i=0; i<contact_count; i++)
                {
                if(strcmp(addressBook->contacts[i].name,name)==0)
                {
                        duplicate[count]=i;
                        count++;
                }
                }

            if(count==0)
            {
                printf("Name not matches\n");
                return;
            }


            int delete;
            if(count==1)
            {
                delete = duplicate[0];
            }
            else
            {
            printf("Multiple contacts found:\n");
            for(int i = 0; i < count; i++)
            {
            int idx = duplicate[i];
            printf("%d. %s - %s - %s\n", i+1,
                   addressBook->contacts[idx].name,
                   addressBook->contacts[idx].phone,
                   addressBook->contacts[idx].email);
            }
            int choice;
            printf("Enter the choice to delete:");
            scanf("%d",&choice);
            
            
            if(choice < 1 || choice > count)
            {
            printf("Invalid choice\n");
            return;
            }
        
            delete = duplicate[choice-1];
        }
            for(int i=delete; i<addressBook->contactCount-1; i++)
            {
             addressBook->contacts[i] = addressBook->contacts[i+1];
            }
    
            addressBook->contactCount--;
            printf("contact deleted successfully\n");
        }
  

            break;

            case 2:
            {
            getchar();
            char phone[20];
                printf("Enter phone number:\n");
                scanf("%[^\n]",phone);
                int size=0;
                int found = 0;
            
                    for(int i=0; i<contact_count; i++)
                    {
                        if(strcmp(addressBook->contacts[i].phone,phone)!=0)
                            {
                                addressBook->contacts[size] = addressBook->contacts[i];
                                size++;
                            }
                        else found=1;

                    }
                    if(found)
                    {
                        addressBook->contactCount=size;
                        printf("contact deleted successfully\n");
                    }
                    else
                    {
                        printf("Mobail number not found\n");
                    }
            }
            break;

            case 3:
            {
            getchar();
            char email[20];
                printf("Enter Email ID:\n");
                scanf("%[^\n]",email);
                int size=0;
                int found = 0;
            
                    for(int i=0; i<contact_count; i++)
                    {
                        if(strcmp(addressBook->contacts[i].email,email)!=0)
                            {
                                addressBook->contacts[size] = addressBook->contacts[i];
                                size++;
                            }
                        else found=1;

                    }
                    if(found)
                    {
                        addressBook->contactCount=size;
                        printf("contact deleted successfully\n");
                    }
                    else
                    {
                        printf("Email ID not found\n");
                    }
            
            }
            break;

            default:
            printf("Invalid input\n");
        }
        
          
    }