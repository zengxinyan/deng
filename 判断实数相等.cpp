#include <stdio.h>
#include <math.h>
double v(){
    double x,y,z;	
	printf("请输入两个实数：");
	scanf("%lf%lf",&x,&y);
	z=fabs(x-y);
	if (fabs(x-y)<1e-6)
	  printf("实数相等");
	else printf("实数不等");
	return 1; 
} 
int main(){
	int a;
	a=v();
	return 0;
} 
