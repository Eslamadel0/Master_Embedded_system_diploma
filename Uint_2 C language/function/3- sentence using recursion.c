// Eslam adel fathy
#include <stdio.h>
int reverse (void);
int main (void){

  //output
  printf("enter sentence to be reverse : ");
  reverse();
}
int reverse (void){

    //variables
    char ch;
    //process
    scanf("%c",&ch);
    if (ch!='\n')
    {
        reverse();
        printf("%c",ch);
    }


}
