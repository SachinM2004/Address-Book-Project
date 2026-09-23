#include<stdio.h>
#include<string.h>
#include<ctype.h>
#ifndef CONTACT_H
#define CONTACT_H


struct Contact{
    char name[50];
    char phone[15];
    char email[50];
};

struct AddressBook{
    struct Contact contacts[100];
    int contactCount;
};

void add_contact(struct AddressBook *addressBook);
    int valid_name(char name[]);
    int valid_phone(char phone[]);
    int valid_id(char email[]);
    int duplicate_phone(struct AddressBook *addressBook,char phone[]);
    int duplicate_id(struct AddressBook *addressBook,char email[]);
    void sort(struct AddressBook *addressBook,int contact_count);
void search_contact(struct AddressBook *addressBook,int contact_count);
    void search_name(char name[]);
void edit_contact(struct AddressBook *addressBook,int contact_count);
void delete_contacts(struct AddressBook *addressBook,int contact_count );
void list_contacts(struct AddressBook *addressBook,int contact_count );
void load_contact(struct AddressBook *addressBook);
void save_contact(struct AddressBook *addressBook);




#endif