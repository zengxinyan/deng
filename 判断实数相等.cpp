#include <stdio.h>
#include <math.h>
double v(){
    double x,y,z;	
	printf("����������ʵ����");
	scanf("%lf%lf",&x,&y);
	z=fabs(x-y);
	if (fabs(x-y)<1e-6)
	  printf("ʵ�����");
	else printf("ʵ������");
	return 1; 
} 
int main(){
	int a;
	a=v();
	return 0;
} 
