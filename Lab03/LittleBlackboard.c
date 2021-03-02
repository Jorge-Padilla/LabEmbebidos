#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	FILE * text;
	text = fopen("DataLog.txt","wt");
	if(argc == 3){
		if(argv[1][1] == 's'){
			int limit = atoi(argv[2]);
			for(int i = 0; i < limit; i++){
				char name[100];
				char ID[100];
				printf("Enter Name:\n");
				scanf("%s", &name);
				printf("Enter ID:\n ");
				scanf("%s",&ID);
				fprintf(text,"%s %s\n", name, ID);
			}
			char keep  = 'a';
			//eso deberia estar dentro del for no?
			//No, porque se supone que primero debe ejecutar el
			// numero de veces que le hayamos indicado y luego
			//  preguntar si quiere mas
			//  Ahh, crei que preguntaba por cada vez que se inserta uno
			while(keep != 'n'){
				printf("Do you wish to add more? [Y/n]\n");
				scanf("%s", &keep);
				if(keep == 'n'){
					printf("Information stored in Datalog.txt\n");
				}else{
					char name[100];
					char ID[100];
					printf("Enter Name:\n");
					scanf("%s", &name);
					printf("Enter ID:\n");
					scanf("%s", &ID);
					fprintf(text,"%s %s\n", name, ID);
				}
			}
		}
	} else{

		fprintf(stderr, "Incorrect number of arguments");
	}
	fclose(text);
	return 0;

}
