#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//contact structure
typedef struct Node{
char name[100];
char phone[20];
char gmail[100];
struct Node*prev;
struct Node*next;
}Node;

Node *head=NULL;

// add contact
void addcontact(){
    Node *newnode=(Node*)malloc(sizeof(Node));
    if(!newnode){
     printf("Memory allocation failed!!!\n");
     exit(1);
    }
    printf("\nEnter Name: ");
    scanf(" %[^\n]",newnode->name);
    printf("\nEnter Phone number: ");
    scanf(" %[^\n]",newnode->phone);
    printf("\nEnter Gmail: ");
    scanf(" %[^\n]",newnode->gmail);
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }else{
        Node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
    }
        printf("Contact add succefully!!!!\n");
}

//save contact into file

void savefile(){
    FILE *fp = fopen("Contacts.txt","w")
    if (fp==NULL){
        printf("ERROR IN OPENING FILE!!!")
            return
    }

    Node*temp=head;
    while (temp!=NULL){
        fprintf(fp,"%s|%s|%s\n",
            temp->name,
            temp->phone,
            temp->gmail
        );
        temp=temp->next;
    }
    fclose(fp);
    printf("CONTACTS SUCCESSFULLY SAVED INTO THE FILE\n");
}

//Load contact from file

void load_from_file() {
    FILE *fp = fopen("contacts.txt", "r");
    if (fp == NULL) {
        return;
    }

    char line[300];
    while (fgets(line, sizeof(line), fp)) {
        Node *newnode = (Node *)malloc(sizeof(Node));
        if (!newnode) {
            printf("Memory allocation failed\n");
            break;
        }

        sscanf(line, "%99[^|]|%19[^|]|%99[^\n]",
               newnode->name,
               newnode->phone,
               newnode->gmail);

        newnode->prev = NULL;
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
        } else {
            Node *temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newnode;
            newnode->prev = temp;
        }
    }

    fclose(fp);
}


void displaycontact(){
    if(head==NULL){
        printf("No contact to Display!!\n");
        return;
    }

    printf("---Contact list---\n");
    Node *temp=head;
    int i=1;
    while(temp!=NULL){
        printf(" %d. Name: %s\t Phone number: %s\t Gmail: %s\n",i,temp->name,temp->phone,temp->gmail);
        temp=temp->next;
        i++;
    }
}

// To modification
void edit(){
    if(head==NULL){
        printf("No contact to edit\n");
        return;
    }
    Node *temp=head;
    char toedit[100];
    printf("Enter the name to edit the contact: ");
    scanf(" %[^\n]",toedit);

    while(temp!=NULL && strcmp(temp->name,toedit)){
        temp=temp->next;
    }
    
    char newname[100];
    char newphone[20];
    char newgmail[100];
    int choice=0;
    printf("---EDIT---\n");
    printf("1. Edit Name \n2. Edit Phone Number \n3. Edit Gmail \n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Enter new name: ");
        scanf(" %[^\n]",&newname);
        strcpy(temp->name,newname);
        break;
    case 2:
        printf("Enter new Phone number: ");
        scanf(" %[^\n]",&newphone);
        strcpy(temp->phone,newphone);
        break;
    case 3:
        printf("Enter new gmail: ");
        scanf(" %[^\n]",&newgmail);
        strcpy(temp->gmail,newgmail);
        break;
    default:
        printf("Invalid Choice. Please try again.\n");
        break;
    }
    printf("Contact Edited succefully\n");
}

// To Delete
void deletecontact(){
    if(head==NULL){
        printf("No contact to delete\n");
        return;
    }

    Node *temp=head;
    char todelete[100];
    printf("Enter the name to delete: ");
    scanf(" %[^\n]",todelete);

    while(temp!=NULL&&strcmp(temp->name,todelete)){
        temp=temp->next;
    }

    if(temp==NULL){
        printf("Contact not found\n");
        return;
    }
    
    if(temp->prev!=NULL){
        temp->prev->next=temp->next;
    }
    else{
        head=temp->next;
    }

    if(temp->next!=NULL){
        temp->next->prev=temp->prev;
    }

    free(temp);
    printf("Contact succefully deleted!!!\n");
}

int main(){
    int choice=0,ac=0;

    printf("----Address Book----\n");
    while(1){
       
        printf("1.Display contacts \n2.Add contact \n3.Delete contact \n4.Edit option \n5.exit \n");
         printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                displaycontact();
                break;
            case 2:
            printf("How many new contacts do you want to add: ");
            scanf("%d",&ac);
            for(int i=0;i<ac;i++){
                addcontact();
            }
                break;
            case 3:
                deletecontact();
                break;
            case 4:
                edit();
                break;
            case 5:
                saveToFile();
                printf("Exiting Address Book\n");

                Node *current = head;
                while (current != NULL) {
                Node *nextnode = current->next;
                    free(current);
                       current = nextnode;
                }
                exit(0);

            default:
                printf("Invalid Input. Please try again.\n");
                while (getchar()!='\n')
                break;
        }
    }
    return 0;
}

