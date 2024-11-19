#include <stdarg.h>

float average(int n_values, ...)
{
    va_list va_arg;
    int count;
    float sum = 0;

    va_start(va_arg, n_values);

    for ( count = 0; count < n_values; count++)
    {
        sum += va_arg(va_arg, int);
    }

    va_end(va_arg);

    return sum / n_values;
}