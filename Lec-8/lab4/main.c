#include <stdio.h>
#include "STD_TYPES.h"

s32 main(void)
{
	typedef struct
	{
		s16 a;
		s16 c;
		s32 d;
		s32 b;
	} struct_name;
	printf("struct size = %d", sizeof(struct_name));
	return 0;
}