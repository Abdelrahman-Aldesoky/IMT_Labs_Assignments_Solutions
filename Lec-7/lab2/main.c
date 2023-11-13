#include<stdio.h>
#include<math.h>

int main(void)
{
    printf("***************SizeOf***************\n");
    printf("\n");
    printf("Size of void           = %d Bytes.\n",sizeof(void));
    printf("Size of char           = %d Bytes.\n",sizeof(char));
    printf("Size of short int      = %d Bytes.\n",sizeof(short int));
    printf("Size of long int       = %d Bytes.\n",sizeof(long int));
    printf("Size of long long int  = %d Bytes.\n",sizeof(long long int));
    printf("Size of float          = %d Bytes.\n",sizeof(float));
    printf("Size of double         = %d Bytes.\n",sizeof(double));
    printf("Size of long double    = %d Bytes.\n",sizeof(long double));
    printf("Size of void pointer   = %d Bytes.\n",sizeof(void*));
    printf("Size of char pointer   = %d Bytes.\n",sizeof(char*));
    printf("Size of int pointer    = %d Bytes.\n",sizeof(int*));
    printf("Size of float pointer  = %d Bytes.\n",sizeof(float*));
    printf("Size of double pointer = %d Bytes.\n",sizeof(double*));
    printf("\n");
    printf("****************END.****************\n");
    printf("************************************\n");
    printf("*********Values it can hold*********\n");
    printf("\n");
    printf("unsigned char can hold up to %.0lf.\n",pow(2,(sizeof(unsigned char)*8))-1);
    printf("unsigned short int can hold up to %.0lf.\n",pow(2,(sizeof(unsigned short int)*8))-1);
    printf("unsigned long int can hold up to %.0lf.\n",pow(2,(sizeof(unsigned long int)*8))-1);
    printf("unsigned long long int can hold up to %.0lf.\n",pow(2,(sizeof(unsigned long long int)*8))-1);
    printf("float can hold up to %.0lf.\n",pow(2,(sizeof(float)*8))-1);
    printf("double can hold up to %.0lf.\n",pow(2,(sizeof(double)*8))-1);
    printf("long double can hold up to %.0llf.\n",pow(2,(sizeof(long double)*8))-1);
    printf("\n");
    printf("*****************END.**************\n");
    return 0;
}