#include<stdio.h>

void sum(int n) 
{  
   int s = 0; 
   while (n != 0) 
   { 
       s = s + n % 10; 
       n = n/10; 
   }
    printf("SUM: %d", s);
}

void reverse(int n)
{
	int rev = 0;
	while (n > 0)
	{
		rev = (rev * 10) + (n % 10);
		n = n / 10;
	}
	printf("REVERSE: %d", rev);
}

void average()
{
	int n,i,a;
	float avg,sum=0;
	printf("\nPlease Enter How many Number you want?\n");
	scanf("%d",&n);
	printf("\nPlease Enter the elements one by one\n");
	for(i=0;i<n;++i)
	{
	scanf("%d",&a);
	sum += a;  
	}
	avg = sum/n;
	printf("AVERAGE= %.2f", avg);

}


void triangular(int n) 
{ 
    int i, j = 1, k = 1; 
  
    
    for (i = 1; i <= n; i++)
	{ 
        printf(" %d ", k); 
        j = j + 1;  
        k = k + j; 
	} 
	
} 

void num_words(int n)
{
    int  num = 0;
    
    while(n != 0)
    {
        num = (num * 10) + (n % 10);
        n /= 10;
    }

    while(num != 0)
    {
        switch(num % 10)
        {
            case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
        }
        
        num = num / 10;
    }
}


int main()
{
	int z,c,d,e,f,n,h;
do{
	system("cls");
	printf("-------------------------------------------------------------------------\n");
	printf("CHOOSE FROM THE FOLLOWING OPTIONS:\n");
	printf("1. Sum of Digits of a number\n");
	printf("2. Reverse the digits of a number\n");
	printf("3. Average of n numbers inputted by the user\n");
	printf("4. Generate a table of triangular numbers for n numbers\n");
	printf("5. Program to print number in words\n");
	printf("ENTER YOUR CHOICE:",z);
	scanf("%d",&z);
		
		
switch(z){
		case 1: 
			printf("Sum of Digits of a number\n");
			printf("ENTER THE NUMBER: ", c);
			scanf("%d", &c);
			sum(c);
		break;
	
		case 2:
			printf("Reverse the digits of a number\n");
			printf("ENTER THE NUMBER: ", d);
			scanf("%d", &d);
			reverse(d);
		break;
			
		case 3:
			printf("Average of n numbers inputted by the user\n");
			average();
		break;
		
		case 4:
			printf("Generate a table of triangular numbers for n numbers\n");
			printf("ENTER NUMBER: ", f);
			scanf("%d", &f);
			triangular(f);
		break;
		
		case 5:
			printf("Program to print number in words\n");
			printf("ENTER THE NUMBER: ", n);
			scanf("%d", &n);
			num_words(n);
		break;
			
		default:
			printf("INVALID INPUT\n");
}
	
printf("\n");
printf("IF YOU WANT TO CONTINUE SELECT 1 IF NOT THEN 2:");
scanf("%d",&h);

}
while(h==1);
}





































