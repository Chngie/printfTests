#include "../ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int n1, n2;
	void *ptr = malloc(1);
	void *null_ptr = NULL;
	char *null_str = NULL;

	// --- %c ---
	n1 = printf   ("ft_printf: [%%c]: [%c]\n", 'A');
	n2 = ft_printf("   printf: [%%c]: [%c]\n", 'A');
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	n1 = printf   ("ft_printf: [%%c]: [%c]\n", 0);
	n2 = ft_printf("   printf: [%%c]: [%c]\n", 0);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	n1 = printf   ("ft_printf: [%%c]: [%c]\n", 127);
	n2 = ft_printf("   printf: [%%c]: [%c]\n", 127);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// --- %s ---
	n1 = printf   ("ft_printf: [%%s]: [%s]\n", "Hello, world!");
	n2 = ft_printf("   printf: [%%s]: [%s]\n", "Hello, world!");
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	n1 = printf   ("ft_printf: [%%s]: [%s]\n", "");
	n2 = ft_printf("   printf: [%%s]: [%s]\n", "");
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	n1 = printf   ("ft_printf: [%%s]: [%s]\n", null_str);
	n2 = ft_printf("   printf: [%%s]: [%s]\n", null_str);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// --- %d ---
	n1 = printf   ("ft_printf: [%%d]: [%d]\n", 0);
	n2 = ft_printf("   printf: [%%d]: [%d]\n", 0);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	n1 = printf   ("ft_printf: [%%d]: [%d]\n", 42);
	n2 = ft_printf("   printf: [%%d]: [%d]\n", 42);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	n1 = printf   ("ft_printf: [%%d]: [%d]\n", -42);
	n2 = ft_printf("   printf: [%%d]: [%d]\n", -42);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	n1 = printf   ("ft_printf: [%%d]: [%d]\n", INT_MAX);
	n2 = ft_printf("   printf: [%%d]: [%d]\n", INT_MAX);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	n1 = printf   ("ft_printf: [%%d]: [%d]\n", INT_MIN);
	n2 = ft_printf("   printf: [%%d]: [%d]\n", INT_MIN);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// --- %i ---
	n1 = printf   ("ft_printf: [%%i]: [%i]\n", 0);
	n2 = ft_printf("   printf: [%%i]: [%i]\n", 0);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	n1 = printf   ("ft_printf: [%%i]: [%i]\n", 42);
	n2 = ft_printf("   printf: [%%i]: [%i]\n", 42);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	n1 = printf   ("ft_printf: [%%i]: [%i]\n", -42);
	n2 = ft_printf("   printf: [%%i]: [%i]\n", -42);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	n1 = printf   ("ft_printf: [%%i]: [%i]\n", INT_MAX);
	n2 = ft_printf("   printf: [%%i]: [%i]\n", INT_MAX);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	n1 = printf   ("ft_printf: [%%i]: [%i]\n", INT_MIN);
	n2 = ft_printf("   printf: [%%i]: [%i]\n", INT_MIN);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// --- %u ---
	n1 = printf   ("ft_printf: [%%u]: [%u]\n", 0);
	n2 = ft_printf("   printf: [%%u]: [%u]\n", 0);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	n1 = printf   ("ft_printf: [%%u]: [%u]\n", 42);
	n2 = ft_printf("   printf: [%%u]: [%u]\n", 42);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	n1 = printf   ("ft_printf: [%%u]: [%u]\n", UINT_MAX);
	n2 = ft_printf("   printf: [%%u]: [%u]\n", UINT_MAX);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// --- %x ---
	n1 = printf   ("ft_printf: [%%x]: [%x]\n", 0);
	n2 = ft_printf("   printf: [%%x]: [%x]\n", 0);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	n1 = printf   ("ft_printf: [%%x]: [%x]\n", 42);
	n2 = ft_printf("   printf: [%%x]: [%x]\n", 42);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	n1 = printf   ("ft_printf: [%%x]: [%x]\n", UINT_MAX);
	n2 = ft_printf("   printf: [%%x]: [%x]\n", UINT_MAX);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// --- %X ---
	n1 = printf   ("ft_printf: [%%X]: [%X]\n", 0);
	n2 = ft_printf("   printf: [%%X]: [%X]\n", 0);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	n1 = printf   ("ft_printf: [%%X]: [%X]\n", 42);
	n2 = ft_printf("   printf: [%%X]: [%X]\n", 42);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	n1 = printf   ("ft_printf: [%%X]: [%X]\n", UINT_MAX);
	n2 = ft_printf("   printf: [%%X]: [%X]\n", UINT_MAX);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// --- %p ---
	n1 = printf   ("ft_printf: [%%p]: [%p]\n", ptr);
	n2 = ft_printf("   printf: [%%p]: [%p]\n", ptr);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	n1 = printf   ("ft_printf: [%%p]: [%p]\n", null_ptr);
	n2 = ft_printf("   printf: [%%p]: [%p]\n", null_ptr);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	free(ptr);
	return (0);
}
