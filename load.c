#include "addressbook.h"
#include <stdio.h>

void load_contact(struct AddressBook *addressBook)
{
    FILE *fptr = fopen("contacts.csv", "r");

    if (fptr != NULL)
    {
        printf("File opened successfully\n");
    }
    else
    {
        printf("Error: Unable to open file or file does not exist!\n");
        return;
    }

    addressBook->contactCount = 0;

    while (addressBook->contactCount < 100 &&
           fscanf(fptr, "%[^,],%[^,],%[^\n]\n",
                  addressBook->contacts[addressBook->contactCount].name,
                  addressBook->contacts[addressBook->contactCount].phone,
                  addressBook->contacts[addressBook->contactCount].email) == 3)
    {
        addressBook->contactCount++;  
    }

    fclose(fptr);

    printf("\nContacts loaded successfully.\nTotal contacts present: %d\n",addressBook->contactCount);
}