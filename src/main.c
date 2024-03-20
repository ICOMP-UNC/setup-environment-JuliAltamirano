#include "dynamic.h"
#include "greetings.h"
#include "static.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Hello, OS II. Welcome to 2024 course!\n");
    greetings();

    printf("Calling static lib from main program. I get: '%d'\n", static_lib_function("Hello"));
    printf("Calling dynamic lib from main program. I get: '%d'\n", dynamic_lib_function("Bye"));

    return 0;
}
