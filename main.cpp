#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include "string.h"
void move(char *str,int n){
    char temp;
    int i;
    temp=str[n-1];
    for ( i = n-1; i >0 ; i--) {
        str[i]=str[i-1];
    }
    str[0]=temp;
}
int main() {
   char s[50];
   int n,i,z;
   scanf("%d,%s",&n,s);
   z=strlen(s);
    for (i = 0; i <=n ; ++i) {
        move(s,z);
    }
    printf("%s\n",s);
    return 0;
}

