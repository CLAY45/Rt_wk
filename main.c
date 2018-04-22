#include "compute.h"

int main()
{
	float Rt_re[13];
	float Vo[13];
	int i;
	printf("Please input measurement data: \n");
	for(i = 0;i < 13;i++)
	{
		scanf("%f",&Vo[i]);
	}
//	for(i = 0;i < 13;i++)
//	{
//		printf("%.3f\n",Vo[i]);
//	}
	printf("Wait a moment,please\n");
	for(i = 0;i < 13;i++)
	{
		Rt_re[i] = Rt_result(Vo[i]);
	}
	printf("The results are:\n");
	for(i = 0;i < 13;i++)
	{
		printf("%.5f\n",Rt_re[i]);
	}
//	Rt_re = Rt_result(Vo);
//	printf("%.4f\n",Rt_re);
//
    return 0;
}

