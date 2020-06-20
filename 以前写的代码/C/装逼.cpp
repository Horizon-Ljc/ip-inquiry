#include "stdio.h"			

typedef unsigned int u16;	  
typedef unsigned char u8;


sbit k1=P1^0;	
sbit led=P0^0;


void delay(u16 i)
{
	while(i--);	
}



void keypros()
{
	if(k1==0)		
	{	
		delay(1000);  
		if(k1==0)	
		{
	while(1){

		if(k1==0)
	{
	while(1)
	{   led=0;
	delay(50000);
	led=1;
	delay(50000);
	
	}
	}
	}	
		
	 }
		while(!k1);	 
	}		
}


void main()
{

	while(1)
{	led=0;
	delay(20000);
	led=1;
	delay(20000);
		keypros(); 
	}}
