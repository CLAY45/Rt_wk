Rt_wk : main.o compute.o
	gcc -o Rt_wk main.o compute.o
main.o : main.c compute.h
	gcc -c main.c
compute.o : compute.c compute.h
	gcc -c compute.c
clean :
	rm Rt_wk *.o

