#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int main()
{
	char in[MAX],stuff[MAX],destuff[MAX],*p,*q;
	int i;
	printf("enter the string to be stuffed\n");
	scanf("%s",in);
	p=in;
	q=stuff;
	while(*p!='\0')
	{
		if(*p=='s')
		{
			*q=*p;
			p++;
			q++;
			if(*p=='a')
			{
				*q=*p;
				p++;
				q++;
				if(*p=='i')
				{
				*q=*p;
				p++;
				q++;
			*(q++)='b';
			*(q++)='a';
			*(q++)='i';
				}
				
			}
		}
		else
		{ 
		*q=*p;
				p++;
				q++;
		}
	}
	*q='\0';
	printf("\n the stuffed String is :");
	printf("\n %s",stuff);
	p=stuff;
	q=destuff;
	while(*p!='\0')
	{
		if(*p=='s')
		{
			*q=*p;
			p++;
			q++;
	    }
		if(*p=='a')
		{
				*q=*p;
				p++;
				q++;
	    }
				if(*p=='i')
				{
				*q=*p;
				p++;
				q++;
			    }
	for(i=1;i<=3;i++)
	p++;
            
        
else
{
	*q=*p;
	 p++;
 	q++;
	
}
}
*q='\0';
printf("\n the destuffed string is:\n %s \n",destuff);
return 0;
}
