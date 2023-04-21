#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

/**
 * struct ty - Struct ty
 *
 * @ty: The shortcut of type
 * @f: The function associated for printing
 */
typedef struct ty
{
	char *ty;
	void (*f)(void* arg);
} ty_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* #ifndef VARIADIC_FUNCTIONS */
