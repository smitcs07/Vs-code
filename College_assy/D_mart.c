#include<stdio.h>
struct Bill{
    char customer_name[20];
    char product_name[20],gender[10],phone_number[11];
    int item,total;
};
struct Bill s[3];
int main(){
    int i;
    for(i=0;i<3;i++){
                printf("\nEnter Customer name: ");
        scanf("%19s",s[i].customer_name);
                printf("Enter Product name: ");
        scanf("%19s",s[i].product_name);
                printf("Enter Gender: ");
        scanf("%8s",s[i].gender);
                printf("Enter Phone Number: ");
        scanf("%13s",&s[i].phone_number); 
                printf("Enter Item: ");
        scanf("%d",&s[i].item);   
    }
    printf("Customer name\t Product Name\t Gender\t Phone number \tItem\n");
    for(i=0;i<3;i++){
        printf("%s\t\t  %s \t%s\t%s\t%d\n",s[i].customer_name,s[i].product_name,s[i].gender,s[i].phone_number,s[i].item);
    }
    return 0;
}
