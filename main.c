#include<math.h>
#include<stdio.h>
#include<stdlib.h>   /*Contains header files*/

int main(int argc, char *argv[]){

int d = 0;
int a, b, c;                        /*Declare three variables*/

system("jp2a [图片位置] --background=light --colors"); /*填写你图片的位置*/
system("echo  '\033[31m tao-tool: 1.0.0 \033[0m'");
system("echo  '\033[31m Programmer: tao-Program \033[0m'");
system("echo  '\033[31m [*] If you are interested, you can make it more powerful. \033[0m'");

while (d != 7){
 printf("Please input:\t[1]Addition operation\t[2]Subtraction operation\t[3]Multiplication operation\t[4]Division operation\t[7]Quit\n");     /*Tips for user selection*/
  scanf("%d",&d);
    if (d == 1){
      printf("Please enter a number:");
     scanf("%d",&a);
    printf("Please enter a number again:");
   scanf("%d",&b);
      c = a+b;
     printf("result: %d\n",c);
  }
           if (d == 2){
              printf("Plesae enter a number:");
             scanf("%d",&a);
            printf("Please enter a number agin:");
             scanf("%d",&b);
              c = a-b;
           printf("result: %d\n",c);
         }
                          if (d == 3){
                             printf("Please enter a number:");
                            scanf("%d",&a);
                           printf("Please enter a mumber agin:");
                             scanf("%d",&b);
                              c = a*b;
                               printf("result: %d\n",c); 
                      }
    if (d == 4){
  printf("Please enter a divisor:");
    scanf("%d",&a);                          /*Prompt user for input*/
     printf("Please enter the dividend:");
       scanf("%d",&b);
        c = a/b;
       printf("result:%d\n",c);
  }
}

    return EXIT_SUCCESS;                    /*Return right*/
}
