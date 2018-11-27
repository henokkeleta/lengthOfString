//
//  main.c
//  lengthOfString
//
//  Created by Henok Berhe on 11/22/18.
// This program count the length of string from the user input
// and helps to understand the use case of const pointers and pointer arthemetic
//  Copyright © 2018 Henok Berhe. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
long int calcLen(char* const inPut);
int i=0;
int main(int argc, const char * argv[]) {
    
   
   
    char temp[100];
    printf("enter the string\n");
    scanf("%s",temp);
    char* pString=NULL;
    pString=temp;
    printf("the value of the string is %s\n",temp);
    printf("the value of the temp[0] is %c\n",temp[0]);
    printf("the address of the temp[0] is %p\n",&temp[0]);
    printf("the address of the string is %p\n",&temp);
    printf("the value of the pString is %p\n",pString);
    long int y= 0;
    y=calcLen(pString);
    printf("--------------------------------\n");
    printf("the value of the pString after the pointer arthemetric is %p\n",pString);
    printf("the address of the pointer pString is %c\n",*pString);
    printf("the value of i is %ld\n",y);
    
    
    
    return 0;
}
long int calcLen(char* const pString)
{
    long int x=0;
    int j=0;
    const char *temp=NULL;
    temp=pString;

    while(*temp!=0)
    {
        temp+=j;
        j++;
       
    }
    x=temp-pString;
   return x;
}

