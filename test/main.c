#include "acllib.h"
#include<stdio.h>

int Setup()
{
	initConsole();
	printf("�����ȣ�")��
	int width;
	scanf("%d",&width); 
	ininWindow("test",100,100,width,width);//��ʼ��һ������test 
	beginPaint();
	line(20,20,width-20,width-20);
	endPaint();
	
	return 0;
}
