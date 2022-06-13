#include<stdio.h>
main ( ) 
{ 
int a[3] = {10, 20, 30};
int i, *ptr; ptr = a; //It stores the base address/starting address of Array 
for (i = 0;i < 3; i++) 
{ 
printf ("Value is %d\n", *ptr);
ptr++;
}
}
