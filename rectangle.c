#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
    {
    int i = 0;
    float result = 0;
    int length; 
    int width;
    
        
    //Arg[1] is -a or -p to calculate between area and perimeter
        switch (argv[1][1])
        {
        case 'a':
                
                length = atoi(argv[3]);
                width = atoi(argv[5]);

                result = length*width;
                printf("The area is: %f\n", result);
            
            /* code */
            break;
        
        case 'p':
             
                length = atoi(argv[3]);
                width = atoi(argv[5]);

                result = 2*length+2*width;
				printf("The perimete is: %f\n", result);

            break;

        default:
            break;
        }

       
        return 0;

    }
