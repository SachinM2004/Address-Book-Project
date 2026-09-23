#include "addressbook.h"
#include <stdio.h>

void save_contact(struct AddressBook *addressBook)
{
    FILE *fptr = fopen("contacts.csv", "w");

    if (fptr != NULL)
    {
        printf("file opened successfully\n");   
    }
    else
    {
        printf("Error opening file for writing!\n");
        return;
    }

    if (addressBook->contactCount == 0)
    {
        printf("No contacts to save.\n");
        fclose(fptr);
        return;
    }

    for (int i = 0; i < addressBook->contactCount; i++)
    {
        fprintf(fptr, "%s,%s,%s\n",
                addressBook->contacts[i].name,
                addressBook->contacts[i].phone,
                addressBook->contacts[i].email);
    }

    fclose(fptr);

    printf("\nContacts saved successfully to file.\n");
}