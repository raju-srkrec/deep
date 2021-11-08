#include<stdio.h>

#include<stdlib.h>

#include<ctype.h>

#include<conio.h>

int main()

{

char a[10];

int flag, i=1;



printf("\n Enter an identifier:");

gets(a);

if(isalpha(a[0]))

flag=1;

else
{
printf("\n entered input is Not a valid identifier");
exit(0);
}
i=1;
while(a[i]!='\0')

{

if(isdigit(a[i])||isalpha(a[i]))

{

flag=1;

//break;

}
else
{
	flag=0;
}
i++;

}

if(flag==1)

printf("\nThe entered identifier is a  Valid identifier");

getch();
return 0;

}
