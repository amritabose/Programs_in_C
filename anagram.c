#include<stdio.h>
#include<string.h>
void main()
{
	char s[4];
	char a1,a2,a3,a4;
	int i,j,k,l,x;
	//ns[0]=" ";
	printf("\n Enter the string\n");
	scanf("%s",s);
	for(i=1;i<=4;i++)
	{
		x=0;
		for(j=1;j<=4;j++)
		{
			if(i==j)
				continue;
			else
			{
				for(k=1;k<=4;k++)
				{
					if((k==i)||(k==j))
						continue;
					else
					{
						for(l=1;l<=4;l++)
						{
							if((l==i)||(l==j)||(l==k))
							continue;
							else
							{
								a1=s[i-1];
								a2=s[j-1];
								a3=s[k-1];
								a4=s[l-1];
								//strcat(ns,a1);
								//strcat(ns,a2);
								//strcat(ns,a3);	
								//strcat(ns,a4);
								printf("\n%c%c%c%c",a1,a2,a3,a4);
								//ns[0]=" ";
							}
						}
					}
				}
			}
		}
	}
}			
