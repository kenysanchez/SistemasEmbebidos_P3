#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	char var[2];
	int cont = 0 ;
	int size = 0;
	
	FILE *f = fopen("Datalog.txt", "w");
	
	if (f == NULL){
		
		fprintf(stderr, "Error opening file! \n");
		exit(1);
		
		}

    size = atoi(argv[2]);
    
    char nameUser[size];
	char idUser[size];
	
	while(cont < size){
		
		printf("Enter name: \n");
		scanf("%s", nameUser);
		fwrite(nameUser,1,strlen(nameUser),f);
		fwrite("\t",1,2,f);
		
		printf("Enter ID: \n");
		scanf("%s", idUser);
		fwrite(idUser,1,strlen(idUser),f);
		fwrite("\n",1,2,f);
		
		printf("Do you want to add more users [Y/n]: \n");
		scanf("%s", var);
        if(var[0] == 'n'){
			
			printf("End\n");
			break;
		}
		
		cont++;
		
	}
	if (cont = size) {
		printf("Storage full\n");
		}
	
	fclose(f);
}
