#include<stdio.h>
int main(){

        int score;
        char grade;
        printf("Please enter an numeric grade: ");

        if(!scanf("%d",&score)){

                printf("Your input could not be interpreted as an integer value.");
        }
        
        else if(score<0 || score>100){

                printf("You entered an invalid value.");
        }

        else{
                if(score>=90)
                        printf("Your grade is a A.");

                else if(score>=80)
                        printf("Your grade is a B.");

                else if(score>=70)
                        printf("Your grade is a C.");

                else if(score>=60)
                        printf("Your grade is a D.");

                else
                        printf("Your grade is a F.");
        }
        
        
}