#include <stdio.h>
#define last(p) (*(char*)((char*)(p+1) -1 ))
#define GET_LAST_BYTE(ptr) (*(char*)((char*)(ptr) + sizeof(*(ptr))-1))
