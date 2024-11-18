#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#if 0
bool find_char(char **strings, char value)
{
    char *string;

    while ((string = *strings++) != NULL) {
        while( *string != '\0') {
            if (*string++ == value)
                return true;
        }
    }

    return false;
}
#else
bool find_char(char **strings, char value)
{
    assert( strings != NULL);

    while (*strings != NULL) {
        if ( *(*strings)++ == value)
            return true;
    }

    return false;
}
#endif

int main()
{

}