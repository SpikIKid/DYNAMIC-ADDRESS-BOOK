//contact structure
typedef struct {
char name[100];
cahr phone[20];
char email[100];
}contact;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//add contact
void addcontact(){
  ensurecapacity();
printf("Enter Name: ");
scanf("%[^\n]",addressbook[coctactcount].name);
printf("Enter Phone Number: ");
scanf("%[^\n]",addressbook[coctactcount].phone);
printf("Enter Gmail: ");
scanf("%[^\n]",addressbook[coctactcount].gmail);
}

void displaycontact(){  
  if(contactcount==0){
  printf("No contact to display!!!");
    return 0;
  }
  for(int i=0;i<contactcount;i++){
printf("%d. Name: %s  Phone number: %s  gmail: %s\n",
    i+1,addressbook[i].name,addressbook[i].phone,addressbook[i].gmail);
  }
}

int main(){
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
  addcontact();// Adding contact
  displaycontact();// To display contact
  
  return 0;
}
