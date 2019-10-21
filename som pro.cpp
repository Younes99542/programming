#include<stdio.h>
#include<math.h>

int main ()
{
	int i,n,s,p;
	printf("veillez taper un nombre :");
	scanf("%d",&n);
s=0; 
p=1;
	
		for(i=0;i<=10;i++)	 {
		s=s+i;
		p=p*i;
		}
	printf ("s=%d\t""p=%d\t",s,p);

	
	
}
