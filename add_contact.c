#include "addressbook.h"

void add_contact(struct AddressBook *addressBook)
{

int name_flag=1;
   while(name_flag)
   {
   getchar();
    printf("Enter your name: \n");
    scanf("%[^\n]",addressBook->contacts[addressBook->contactCount].name);

    if(valid_name (addressBook->contacts[addressBook->contactCount].name))
    {
        name_flag=0;
    }
    else
        printf("Please enter valid name\n");
   }

int mob_flag=1;
   while(mob_flag)
   {
   getchar();
   printf("Enter phone number:");
   scanf("%[^\n]",addressBook->contacts[addressBook->contactCount].phone);
    
    if(valid_phone(addressBook->contacts[addressBook->contactCount].phone) && duplicate_phone(addressBook,addressBook->contacts[addressBook->contactCount].phone))
    {
        mob_flag=0;
    }
    else printf("Enter uniqe number of 10 digit\n");
   }

int id_flag=1;
   while(id_flag)
   {
   getchar();
   printf("Enter email:");
   scanf("%[^\n]",addressBook->contacts[addressBook->contactCount].email);
   if(valid_id(addressBook->contacts[addressBook->contactCount].email)&& duplicate_id(addressBook,addressBook->contacts[addressBook->contactCount].email))
   {
        id_flag=0;
    }
    else printf("Enter uniqe email-id \n");
   }

   addressBook->contactCount++;
} 



int valid_name(char name[])
{
   int i=0;
   while(name[i])
   {
        if(!isalpha(name[i])&& name[i] != ' ')
        {
            return 0;
        }
        i++;
   }
   return 1;
}


int valid_phone(char phone[])
{ 
    int j=0;
    while(phone[j])
    {
            if(!isdigit(phone[j]))
            return 0;
            j++;
    }
    if(j!=10) return 0;
    else return 1;
}

int duplicate_phone(struct AddressBook *addressBook,char phone[])
{
    for(int i=0; i<addressBook->contactCount; i++)
    {
        if(strcmp(addressBook->contacts[i].phone,phone)==0)
        {
        printf("Mobile number already exists\n");
        return 0;
        }
    }
    return 1;
}



int valid_id(char email[])
{
    int i;
    int at_count = 0, dot_count = 0;
    int at_pos = -1, dot_pos = -1;

    int len = strlen(email);

    if(!isalpha(email[0]))
    return 0;


    if(strcmp(&email[len - 4], ".com") != 0)
    return 0;

    if(!islower(email[0]))
    return 0;


    for(i = 0; i < len; i++)
    {
        if(email[i] == ' ')
        {
            printf("Email should not contain space\n");
            return 0;
        }

        if(email[i] == '@')
        {
            at_count++;
            at_pos = i;
        }

        if(email[i] == '.')
        {
            dot_count++;
            dot_pos = i;
        }
    }

   
    if(at_count != 1)
        return 0;

    if(dot_count < 1)
        return 0;

    if(at_pos == 0)
        return 0;

    if(dot_pos < at_pos + 2)
        return 0;

    if(dot_pos == len - 1)
        return 0;

    return 1;
}


int duplicate_id(struct AddressBook *addressBook,char email[])
{
     for(int i=0; i<addressBook->contactCount; i++)
    {
        if(strcmp(addressBook->contacts[i].email,email)==0)
        {
        printf("Email ID number already exists\n");
        return 0;
        }
        
    }
    return 1;
}