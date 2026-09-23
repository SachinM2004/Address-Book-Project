#include "addressbook.h"

void edit_contact(struct AddressBook *addressBook,int contact_count)
{
    int choice;
    printf("1.Search by  Name\n");
    printf("2.Seach by Mobail Number\n");
    printf("3.Search Email ID\n");
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


            int edit;
            if(count==1)
            {
                edit = duplicate[0];
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

            printf("Enter the choice to edit:");
            scanf("%d",&choice);
            
        
            if(choice < 1 || choice > count)
            {
            printf("Invalid choice\n");
            return;
            }
        
            edit = duplicate[choice-1];
            }
            int found = 0;
            char phone[20], email[50];
            for(int i=edit; i<addressBook->contactCount-1; i++)
            {
                if(strcmp(addressBook->contacts[i].name,name)==0)
                {
                    found = 1;
                    int opt;
                    printf("\n1.Edit Name\t2.Edit Phone\t3.Edit Email ID\n");
                    printf("Select what you want to edit\n");
                    scanf("%d",&opt);

                    switch(opt)
                    {
                        case 1:
                        {
                            printf("Enter new name to change\n");
                            getchar();
                            scanf("%[^\n]",name);

                            if(valid_name(name))
                            {
                                strcpy(addressBook->contacts[i].name,name);
                                printf("Name edited succsessfully\n");
                            }
                        }
                        break;

                        case 2:
                        {
                            printf("Enter new mobail number to change\n");
                            getchar();
                            scanf("%[^\n]",phone);

                            if(valid_phone(phone))
                            {
                                if(duplicate_phone(addressBook,phone))
                                {
                                strcpy(addressBook->contacts[i].phone,phone);
                                 printf("Number edited succsessfully\n");
                                }

                            }
                    
                        }
                        break;

                        case 3:
                        {
                            printf("Enter new Email to change\n");
                            getchar();
                            scanf("%[^\n]",email);

                            if(valid_id(email))
                            {
                                if(duplicate_id(addressBook,email))
                                {
                                strcpy(addressBook->contacts[i].email,email);
                                printf("Email edited succsessfully\n"); 
                                } 
                           }
                        }
                        break;

                        default:
                        printf("Invalid Input\n");
                    }
                }
            }

               if(found==0)
                    {
                        printf("Name not found\n");
                    }
            
             
        }
        break;
        

        case 2:
            {
            
            char phone[20];
                printf("Enter phone number:\n");
                getchar();
                scanf("%[^\n]",phone);

                int found = 0;
                
                for(int i=0; i<contact_count; i++)
                {
                    if(strcmp(addressBook->contacts[i].phone,phone)==0)
                    {
            
                            char name[20];
                            char email[20];
    
                            int opt;
                            printf("\n1.Edit Name\t2.Edit Phone\t3.Edit Email ID\n");
                            printf("Select what you want to edit\n");
                            scanf("%d",&opt);

                        switch(opt)
                        {
                        case 1:
                        {
                            printf("Enter new name to change\n");
                            getchar();
                            scanf("%[^\n]",name);

                            if(valid_name(name))
                            {
                                strcpy(addressBook->contacts[i].name,name);
                                printf("Name edited succsessfully\n");
                            }
                        }
                        break;

                        case 2:
                        {
                            printf("Enter new mobail number to change\n");
                            getchar();
                            scanf("%[^\n]",phone);

                            if(valid_phone(phone))
                            {
                                if(duplicate_phone(addressBook,phone))
                                {
                                strcpy(addressBook->contacts[i].phone,phone);
                                 printf("Number edited succsessfully\n");
                                }

                            }
                        }
                            break;

                        case 3:
                        {
                            printf("Enter new Email to change\n");
                            getchar();
                            scanf("%[^\n]",email);

                            if(valid_id(email))
                            {
                                if(duplicate_id(addressBook,email))
                                {
                                strcpy(addressBook->contacts[i].email,email);
                                printf("Email edited succsessfully\n"); 
                                } 
                           }
                        }
                        break;

                        default:
                        printf("Invalid Input\n");
                        }
                }
                }
                    if(found==0)
                    {
                        printf("Mobail number not found\n");
                    }
                   
            }
            break;


            case 3:
            {
           
            char email[20];
                printf("Enter Email ID:\n");
                 getchar();
                scanf("%[^\n]",email);

                int found = 0;
                    for(int i=0; i<contact_count; i++)
                    {
                        if(strcmp(addressBook->contacts[i].email,email)==0)
                            {
                             found = 1; 
                            char name[20];
                            char phone[20];
    
                            int opt;
                            printf("\n1.Edit Name\t2.Edit Phone\t3.Edit Email ID\n");
                            printf("Select what you want to edit\n");
                            scanf("%d",&opt);

                        switch(opt)
                        {
                        case 1:
                        {
                            printf("Enter new name to change\n");
                            getchar();
                            scanf("%[^\n]",name);

                            if(valid_name(name))
                            {
                                strcpy(addressBook->contacts[i].name,name);
                                printf("Name edited succsessfully\n");
                            }
                        }
                        break;

                        case 2:
                        {
                            printf("Enter new mobail number to change\n");
                            getchar();
                            scanf("%[^\n]",phone);

                            if(valid_phone(phone))
                            {
                                if(duplicate_phone(addressBook,phone))
                                {
                                strcpy(addressBook->contacts[i].phone,phone);
                                 printf("Number edited succsessfully\n");
                                }

                            }
                        }
                            break;

                        case 3:
                        {
                            printf("Enter new Email to change\n");
                            getchar();
                            scanf("%[^\n]",email);

                            if(valid_id(email))
                            {
                                if(duplicate_id(addressBook,email))
                                {
                                strcpy(addressBook->contacts[i].email,email);
                                printf("Email edited succsessfully\n"); 
                                } 
                           }
                        }
                        break;

                        default:
                        printf("Invalid Input\n");
                        }
                }

                       

                    if(found==0)
                    {
                        printf("Email not found\n");
                    }
                   
                   
         
        }   
            break;

            default:
            printf("Invalid input\n");

    
}
}

}