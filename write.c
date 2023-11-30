#include <unsitd.h>
#include <stdio.h>
#include "ft_printf.h"
int main()
{
	int i = write (1, "123", 3);
	ft_printf("%d", i);
}