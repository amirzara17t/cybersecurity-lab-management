#include <stdio.h>
int main()
{
  int computers,network_devices,security_tools,Cost_computer,Cost_network_device,software_cost;
  char lab_name [50];
  printf("Enter lab name ");
  scanf("%s" , &lab_name);
  printf("Enter Number of computers");
  scanf("%d" ,&computers);
  printf("Enter  Number of network devices ");
   scanf("%d" ,&network_devices);
  printf("Enter  Number of security tools");
   scanf("%d" ,&security_tools);
  printf("Enter Cost per computer ");
  scanf("%d" ,&Cost_computer);
  printf("Enter  Cost per network device");
  scanf("%d" ,&Cost_network_device);
  printf("Enter Annual security software cost");
  scanf("%d" ,&software_cost);
  printf(" Lab name : %s\n" , lab_name);
  printf(" Computers: %d\n" , computers);
  printf(" Network devices : %d\n" , network_devices);
  printf(" Security tools : %d\n" , security_tools);
  printf(" Computer cost = %d\n", computers*Cost_computer);
  printf("Network cost = %d\n" , network_devices * Cost_network_device);
  printf(" Software cost = %d\n" , software_cost);
  printf(" Total lab investment = %d\n" ,software_cost + (computers*Cost_computer)+ (network_devices * Cost_network_device) );
 return 0; 
}
