#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

int main(void) {
    int i,n;
	int islem;
	int bakiye =1000;
	int tutar;
	
	
	printf("Actions\n\n1:Finding Prime Factor\n2:Ebob Ekok Calculation\n3:Geometric and Arithmetic Mean\n4:Exit\n\n\n");
	
	printf("Select Action");
	scanf("%d",&islem);
	
	switch(islem) {
	
	
	
		case 1 :
{
 
 int sayi, degerler,i;
 printf("Please Enter a Number Value...\n");
 scanf("%d",&sayi);
 for(i=2;sayi>1;i++)
 {
  while(sayi%i==0)
  {
  
   printf("%d\t",i);
   sayi=sayi/i;
  
  }
 }
 system("pause");
 return 0;
}		

break;
			
	    case 2 : 
	        
			{x:
	int a,b,kucuk;
	int ebob;
printf("Enter Two Numbers (Use a Space Between Them): ");
scanf("%d%d",&a,&b);

if(a<=b)
{
	kucuk=a;
}
else
{
    kucuk=b;
}
for(int i=1;i<=kucuk;i++)
{    if(a%i==0 && b%i==0 )
     { 
     ebob=i;
}}
int ekok=a*b/ebob;
printf("ebob %d\n",ebob);
printf("ekok %d\n",ekok);
goto x;

}
			
			break;



	    case 3 : 
	        
	        {
int i,n;
int dizi[100];
float ariort,geoort,harort;

ariort=0;
geoort=1;
harort=0.0;
printf("Enter the number of elements of the array..:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
                printf("%d element of the array  :" ,i);     
                
scanf("%d",&dizi[i]);
}
for(i=0;i<n;i++)
{
ariort=ariort+dizi[i];
geoort=geoort*dizi[i];
harort=harort+1.0/dizi[i];
}
ariort=ariort/n;
geoort=pow(geoort,(1/n));
harort=n/harort;
printf("Arithmetic Mean=%f\n",ariort);
printf("Geometric Mean=%f\n",geoort);
printf("Harmonic Average=%f\n",harort);
getch();
}

	        
			break;
	       	
	
	    case 4 :
	    	printf("The program will be closed.\n");
	    	break;
	    	
	    default:
		    printf("Unknown Action");
		    break;
		
		
	return 0;	
		
	}
}
