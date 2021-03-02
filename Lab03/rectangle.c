#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	if(argc != 6){
		fprintf(stderr,"Incorrect number of parameters\n");
		return -1;
	}else{
		if(argv[1][1] == 'a'){
			int a = atoi(argv[3]) * atoi(argv[5]);
			printf("area = %d units\n", a);
		}else if(argv[1][1] == 'p'){
			int p = 2 * atoi(argv[3]) + 2 * atoi(argv[5]);
			printf("perimeter = %d units\n", p);
		}else{
			fprintf(stderr, "Wrong parameter in operation, either '-a' or '-p'\n");
			return -1;
		}
		return 0;
	}
}
