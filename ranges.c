#include <stdio.h>
#include <limits.h>
#include <float.h>
   
int main(int argc, char *argv[]) {

    /*character type*/
	printf("\nData type: character type.\n");
	printf("Minimum value for signed char: %d.\n", SCHAR_MIN);
    printf("Maximum value for signed char: %d.\n", SCHAR_MAX);
	printf("Minimum value for unsigned char: %d.\n", 0);
    printf("Maximum value for unsigned char: %d.\n", UCHAR_MAX);
    printf("Minimum value for char: %d.\n", CHAR_MIN);
    printf("Maximum value for char: %d.\n", CHAR_MAX);
	printf("Size of signed char: %d byte.\n\n", sizeof(signed char));
		  
	/*integers*/
	printf("Data type: integer.\n");
    printf("Minimum value for signed short: %d.\n", SHRT_MIN);
    printf("Maximum value for signed short: %d. \n", SHRT_MAX);
	printf("Size of signed short: %d bytes.\n\n", sizeof(signed short));
    printf("Minimum value for unsigned short: %d.\n", 0);
    printf("Maximum value for unsigned short: %d.\n", USHRT_MAX);
	printf("Size of unsigned short: %d bytes.\n\n", sizeof(unsigned short));
    printf("Minimum value for signed int: %d\n", INT_MIN );
    printf("Maximum value for signed int: %d\n", INT_MAX );
	printf("Size of signed int: %d bytes.\n\n", sizeof(signed int));
    printf("Minimum value for unsigned int: %u\n", 0 );
    printf("Maximum value for unsigned int: %u\n", UINT_MAX );
	printf("Size of unsigned int: %d bytes.\n\n", sizeof(unsigned int));
    printf("Minimum value for signed long: %ld\n", LONG_MIN );
    printf("Maximum value for signed long: %ld\n", LONG_MAX );
	printf("Size of signed long: %d bytes.\n\n", sizeof(signed long));
    printf("Minimum value for unsigned long: %lu\n", 0 );
    printf("Maximum value for unsigned long: %lu\n", ULONG_MAX );
	printf("Size of unsigned long: %d bytes.\n\n", sizeof(unsigned long));
         		  
	/*floating-point type*/
	printf("Data type: floating-point.\n");
	printf("Size of float: %d bytes.\n", sizeof(float));
    printf("Size of double: %d bytes.\n", sizeof(double));
   	printf("Size of long double: %d bytes.\n", sizeof(long double));
		        
	return 0;
	
  }