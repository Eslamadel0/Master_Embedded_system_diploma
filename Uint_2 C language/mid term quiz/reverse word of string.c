#include <stdio.h>
#define max 50
void reverse_string(char *str[], int size);
int main (void){

    //variables declaration
    char string[max];
    int size ;
    //output and input
    printf("enter your string :");
    scanf("%s",string);

    size = strlen(string);

    //calling function
    reverse_string(string,size);

   return 0;
}
void reverse_string(char *str[], int size){

    //variables declaration
    int i,j;
    int k=0;
    char  ch[max];

    //process
    for (i=size-1; i>=0; i--)
        {
          if (str[i]==' ')
          {
             for (j=k-1; j>=0; j--)
             {
                 printf("%c",ch[j]);
             }
             k=0;
          }
          else
             {
              ch[k]=str[i];
                k++;
             }
        }

      if ( k!=0 )
      {
          for (j=k-1; j>=0; j--)
          {
               printf("%c",ch[j]);
          }
      }
}
