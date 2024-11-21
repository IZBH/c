#include <stdlib.h>

#define malloc              DON'T CALL malloc DIRECTLY!
#define MALLOC(num, type)   (type *)alloc((num) * sizeof(type))
extern void *alloc(size_t size);