#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
if (n == 0)
{
return (0);
}
else
{
va_list ptr;
va_start(ptr, n);
for (i = 0; i < n; i++)
sum += va_arg(ptr, int);
va_end(ptr);

return sum;
}
}
