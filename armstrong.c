/****************************************************
 * File        : armstrong.c
 * Description : C program to check whether a number
 *               is amstrong or not
 * Author      : Afna Ayshu Jaffin
 * Version     : 1.0
 * Date        : 17/06/21
 * *************************************************/
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int number, originalNumber, armstrong =0;
    int i;
    double remainder, power; 
    char testing[100];
    printf("\t\t\tARMSTRONG OR NOT\n");
    printf("\t\t\t*****************\n\n\n");
    printf("Enter the number :");
    scanf("%d", &number);
    originalNumber = number;
    //getting the length of the number
    sprintf(testing,"%d",number);
    int length = strlen(testing);
    printf("Length of the number : %d",length);
    // calculating the armstrong number
    for(i=1; i<=length ; i++)
    {
       remainder = number % 10;
       power = pow(remainder ,length);
       armstrong = armstrong + power;
       number = number / 10;
    }
    printf("\nArmstrong value : %d", armstrong);
    // checking if the number is armstrong or not
    if( originalNumber == armstrong)
    {
        printf("\nIts an ARMSTRONG NUMBER !");
    }
    else
    {
        printf("\nNot an armstrong number");
    }
    return 0;
}