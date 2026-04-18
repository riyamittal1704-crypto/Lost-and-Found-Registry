#include<stdio.h>
#include<string.h>

#define Lost_found "items.txt"

int login(){
    char u[20],p[20];
    printf("--Login--\nUsername:");
    scanf("%s",u);
    printf("Password:");
    scanf("%s",p);

    if(strcmp(u,"user")==0 && strcmp(p,"pass")==0){
        printf("Login Successful\n");
        return 1;
    }
    
    else{
        printf("Invalid Username or Password");
        return 0;
    }
    
}

void additem(){
    char name[50],place[50];
    FILE *f = fopen(Lost_found,"a");
    printf("Enter name of item:\n");
    getchar();
    scanf("%[^\n]",name);
    
    printf("Enter place where item was found:\n");
    getchar();
    scanf("%[^\n]",place);
    
    fprintf(f,"%s,%s\n",name,place);
    fclose(f);
    printf("Item added!\n");
}

void viewitem(){
    char line[100];
    FILE *f = fopen(Lost_found,"r");

    if(f==NULL){
        printf("No items recorded yet!\n");
        return;
    }
    printf("--All items--\n");
    while(fgets(line,sizeof(line),f)){
        printf("%s\n",line);
    }
    fclose(f);
    
}

void searchitem(){
    char line[100],search[20];
    FILE *f=fopen(Lost_found,"r");
    int found=0;

    printf("Enter name of item:\n");
    getchar();
    scanf("%[^\n]",search);
    if(f==NULL){
        printf("No items found!\n");
        return;
    }
    printf("--Search Items--\n");
    while(fgets(line,sizeof(line),f)){
       if(strstr(line,search)){
        printf("%s",line);
        found=1;
       }
    }

    if(!found){
        printf("Item not found.\n");
    }

    fclose(f);

}

int main(){
    int ch;
    if (!login())return 0;

    do {
        
        printf("Lost and Found Registry Menu\n");
        printf("Choose Option:\n");
        printf("1. Add item\n2. View item\n3. Search item\n4. Exit\n");
        scanf("%d",&ch);

        if(ch==1) 
        additem();
        else if (ch==2)
        viewitem();
        else if (ch==3)
        {
            searchitem();
        }
        else if(ch==4)
        {
            printf("Exiting Program");
        }
        else{
            printf("Invalid Input!\nPlease Try Again!");
        }
    }while(ch!=4);
    return 0;
}