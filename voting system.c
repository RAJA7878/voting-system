#include <stdio.h>

int main() {
    printf("good morning \n");
    int age, i;
    char name[50];
    int BJPVotes = 0, SPVotes = 0;

    for (i = 0; i < 10; ++i) {
        printf("Enter your age: ");
        scanf("%d", &age);

        if (age < 18) {
            printf("Sorry, you are not eligible to vote.\n");
        } else {
            printf("Enter your name: ");
            scanf("%s", name);
            int f;
            printf("are you male or female : \n");
            printf("press 1 for male and 2 for female : \n");
            scanf("%d",&f);
            if(f==1){
                printf("hello Mr %s\n",name);
            }
else {
    printf("hello Ms %s\n",name);
}
            printf(" Please vote for yur Fav party :\n", name);
            printf("1. BJP\n");
            printf("2. congress\n");
            

            int vote;
            printf("Enter your choice (1 or 2): ");
            scanf("%d", &vote);

            if (vote == 1) {
                BJPVotes++;
                printf(" your Vote for BJP recorded!\n");
                 printf("thank you for your vote\n");
            } else if (vote == 2) {
                SPVotes++;
                printf(" your Vote for congress recorded!\n");
                printf("thank you for your vote\n");
            } else {
                printf("Invalid Number.\n");
                
            }
        }
    }


    if (BJPVotes > SPVotes) {
        printf("BJP is the winner with %d votes!\n", BJPVotes);
    } else{
        printf("congress is the winner with %d votes!\n", SPVotes);
    } 

    return 0;
    
}
