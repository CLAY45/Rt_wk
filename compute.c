#include "compute.h"
#include "stdio.h"

#define	K	10
#define	R3	5000
#define	R4	5000
#define	R1Rw1	100
#define	Vc	4

float Rt_result(float inp)
{
	float Rt_u,Rt_d,Rt;
	Rt_u = R3*K*R1Rw1*Vc-(R4+R1Rw1)*(inp);
//	printf("%.3f\n",Rt_u);
	Rt_d = K*Vc*R4+(R4+R1Rw1)*(inp);
//	printf("%.3f\n",Rt_d);
	Rt = Rt_u / Rt_d;

	return Rt;
}
