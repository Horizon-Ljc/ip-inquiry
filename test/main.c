#include "acllib.h"
#include<stdio.h>

int Setup()
{
	initConsole();
	printf("输入宽度：")；
	int width;
	scanf("%d",&width); 
	ininWindow("test",100,100,width,width);//初始化一个窗口test 
	beginPaint();
	line(20,20,width-20,width-20);
	endPaint();
	
	return 0;
}
