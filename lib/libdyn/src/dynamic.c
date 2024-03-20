#include "dynamic.h"
#include <stdio.h>
#include <string.h>

int dynamic_lib_function(char *msg)
{
    printf("Hi! I'm a dynamic lib that receives '%s', and returns '%d'\n", msg, strlen(msg));
    return strlen(msg);
}
