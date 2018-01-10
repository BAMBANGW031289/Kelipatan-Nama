#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i;

    for (i=1; i<=100; i++)
    {
        if (i%3==0){
         printf("Bambang\n");	
	}
        else if (i%5==0){
        printf("Wisnu\n");	
	}
        else if(i%7==0){
        printf("Bambang Wisnu\n");
	}
        else {
        printf("%d\n",i);
	}
}
}
