
/* Test that a file defined with #pragma once is only able to be included once */

#include "pragma-once.h"
#include "pragma-once.h"

#include <stdlib.h>

int main(void)
{
    return EXIT_SUCCESS;
}
