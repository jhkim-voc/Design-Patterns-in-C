
/**
 * product.c  2014-04-29 17:03:57
 * anonymouse(anonymouse@email)
 *
 * Copyright (C) 2000-2014 All Right Reserved
 * 
 * THIS CODE AND INFORMATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
 * KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
 * PARTICULAR PURPOSE.
 *
 * Auto generate for Design Patterns in C
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "product.h"



void product_init(struct product *product)
{
#ifdef __linux__
	memset(product, sizeof(*product), 0);
#else
	memset(product, 0, sizeof(*product));
#endif

}


void product_do_something(struct product *product)
{
	printf("product::do_something()\n");
}
