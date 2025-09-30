//contact structure
typedef struct {
char name[100];
cahr phone[20];
char email[100];
}contact;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//dynamic storage
contact *addressbook=NULL;
int contactcount=0;
int capacity=0;

void ensurecapacity(){
  if(contactcount==capacity){
    capacity=(capacity==0) ? 2 : capacity * 2;
    addressbook=realloc(addressbook,capacity*sizeof(contact));
    if(!addressbook){
    printf("Memory allocation failed!!!\n");
      exit(1);
    }
  }
}
//add contact
void addcontact(){
  ensurecapacity();
printf("Enter Name: ");
scanf("%[^\n]",addressbook[coctactcount].name);
printf("Enter Phone Number: ");
scanf("%[^\n]",addressbook[coctactcount].phone);
printf("Enter Gmail: ");
scanf("%[^\n]",addressbook[coctactcount].gmail);
