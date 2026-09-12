#include <stdio.h>
struct data{
	int pid;
	float temp;
};

int s_data (void);

int main(){
	s_data();
	return 0;
}

int s_data(){
	struct data d1;
	printf("Satellite Telemetry Simulator\n");
	printf("Getting Manual input for sensor\n");
	printf("Enter pid: ");
	scanf("%d",&d1.pid);
	printf("Enter temp: ");
	scanf("%f",&d1.temp);
	printf("The pid is: %d\n",d1.pid);
	printf("The temperature is: %f",d1.temp);
	return 0;
}