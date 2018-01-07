#include <stdio.h>
int main()
{
	int i,s,k;
	char a[100];
	for(i=0;i<100;i++)
	a[i]='\0';
	fgets(a,100,stdin);
	i=0;s=0;
	while(i<100)
	{   if ((a[i]<='9')&&(a[i]>='0'))
	      {
		   for(k=i;k<100&&(a[k]<='9')&&(a[k]>='0');k++)
		     continue;
	         i=k;
	         s++;
	        }
	     else i++;
	 
	}
	printf("%d",s);
		return 0;
}
