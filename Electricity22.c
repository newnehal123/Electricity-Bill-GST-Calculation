# include<stdio.h>
void main(){
	char n;
	int a,b,c,d,e;

	printf("      Electricity Bill \n");
	
	printf("Customer Name :-");
	scanf("%c",&n);
	
	printf("Enter the unit :-");
	scanf("%d",&a);
	
		b=10*a;
	
	printf("Total Bill(10Rs/Unit) :- %d \n",b);
	
	c=b+(b*0.18);
	d=b+(b*0.23);
	e=b+(b*0.28);
	
	
	if(100>=a){
		printf("Total bill with 18 percent GST :- %d \n",c);
	}
	
	else if( a>=100 && a<=200){
		printf("Total bill with 23 percent GST :- %d \n",d);
	}
	
		else if(a >= 201 && a<= 500){
		printf("Total bill with 28 percent GST :- %d \n",e);
	}
	 else{
	 	printf("No bill");
	 }
	

}
