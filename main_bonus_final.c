#include "../ft_printf.h"
#include "../libft/libft.h"
#include <limits.h>
#include <stdio.h>

int main(void)
{
	char	c1 = 'A';
	char	c2 = '\0';
	char	c3 = '\n';
	char	c4 = 127; // DEL character
	char	c5 = 1;   // SOH - non-printable
	char	*str1 = "Hello";
	char	*str2 = "";
	char	*str3 = NULL;
	int d = 42;
	int d_neg = -42;
	int i = INT_MIN;
	unsigned int u = UINT_MAX;
	unsigned int u_small = 123;
	void *ptr = &d;
	void *null_ptr = NULL;

	int n1, n2;

	// ---------- CHAR ----------
	printf("================ CHAR TESTS ================\n\n");
	// Basic test
	n1 = ft_printf("ft_printf: Basic char: [%c]\n", c1);
	n2 = printf("   printf: Basic char: [%c]\n", c1);
	printf("Basic char: ft_printf = %d, printf = %d - %s\n\n", n1, n2, n1 == n2 ? "PASSED" : "FAILED");

	// Width test
	n1 = ft_printf("ft_printf: Width char: [%5c]\n", c1);
	n2 = printf("   printf: Width char: [%5c]\n", c1);
	printf("Width char: ft_printf = %d, printf = %d - %s\n\n", n1, n2, n1 == n2 ? "PASSED" : "FAILED");

	// Dash flag test
	n1 = ft_printf("ft_printf: Dash char: [%-5c]\n", c1);
	n2 = printf("   printf: Dash char: [%-5c]\n", c1);
	printf("Dash char: ft_printf = %d, printf = %d - %s\n\n", n1, n2, n1 == n2 ? "PASSED" : "FAILED");

	// Null char test
	n1 = ft_printf("ft_printf: Null char: [%-5c]\n", c2);
	n2 = printf("   printf: Null char: [%-5c]\n", c2);
	printf("Null char: ft_printf = %d, printf = %d - %s\n\n", n1, n2, n1 == n2 ? "PASSED" : "FAILED");

	// Newline char test
	n1 = ft_printf("ft_printf: Newline char: [%5c]\n", c3);
	n2 = printf("   printf: Newline char: [%5c]\n", c3);
	printf("Newline char: ft_printf = %d, printf = %d - %s\n\n", n1, n2, n1 == n2 ? "PASSED" : "FAILED");

	// Max ASCII (DEL)
	n1 = ft_printf("ft_printf: DEL char: [%5c]\n", c4);
	n2 = printf("   printf: DEL char: [%5c]\n", c4);
	printf("DEL char: ft_printf = %d, printf = %d - %s\n\n", n1, n2, n1 == n2 ? "PASSED" : "FAILED");

	// Non-printable ASCII (SOH)
	n1 = ft_printf("ft_printf: SOH char: [%5c]\n", c5);
	n2 = printf("   printf: SOH char: [%5c]\n", c5);
	printf("SOH char: ft_printf = %d, printf = %d - %s\n\n", n1, n2, n1 == n2 ? "PASSED" : "FAILED");

	// Width = 0 (should default to 1)
	//n1 = ft_printf("ft_printf: Width 0: [%0c]\n", c1); // 0 flag is ignored for %c
	//n2 = printf("   printf: Width 0: [%0c]\n", c1);
	//printf("Width 0 char: ft_printf = %d, printf = %d - %s\n\n", n1, n2, n1 == n2 ? "PASSED" : "FAILED");
	printf("============ CHAR TESTS FINISHED ============\n\n\n");


	// ---------- STRING ----------
	printf("================ STRING TESTS ================\n\n");
	// Basic string
	n1 = ft_printf("ft_printf: Basic string: [%s]\n", str1);
	n2 = printf("   printf: Basic string: [%s]\n", str1);
	printf("Basic string: ft_printf = %d, printf = %d - %s\n\n", n1, n2, n1 == n2 ? "PASSED" : "FAILED");

	// Empty string
	n1 = ft_printf("ft_printf: Empty string: [%s]\n", str2);
	n2 = printf("   printf: Empty string: [%s]\n", str2);
	printf("Empty string: ft_printf = %d, printf = %d - %s\n\n", n1, n2, n1 == n2 ? "PASSED" : "FAILED");

	// NULL string
	n1 = ft_printf("ft_printf: NULL string: [%s]\n", str3);
	n2 = printf("   printf: NULL string: [%s]\n", str3);
	printf("NULL string: ft_printf = %d, printf = %d - %s\n\n", n1, n2, n1 == n2 ? "PASSED" : "FAILED");

	// Width
	n1 = ft_printf("ft_printf: Width 10: [%10s]\n", str1);
	n2 = printf("   printf: Width 10: [%10s]\n", str1);
	printf("Width 10: ft_printf = %d, printf = %d - %s\n\n", n1, n2, n1 == n2 ? "PASSED" : "FAILED");

	// Dash flag (left-align)
	n1 = ft_printf("ft_printf: Dash 10: [%-10s]\n", str1);
	n2 = printf("   printf: Dash 10: [%-10s]\n", str1);
	printf("Dash flag: ft_printf = %d, printf = %d - %s\n\n", n1, n2, n1 == n2 ? "PASSED" : "FAILED");

	// Precision only
	n1 = ft_printf("ft_printf: Precision 3: [%.3s]\n", str1);
	n2 = printf("   printf: Precision 3: [%.3s]\n", str1);
	printf("Precision 3: ft_printf = %d, printf = %d - %s\n\n", n1, n2, n1 == n2 ? "PASSED" : "FAILED");

	// Width + Precision
	n1 = ft_printf("ft_printf: Width 10 + Precision 3: [%10.3s]\n", str1);
	n2 = printf("   printf: Width 10 + Precision 3: [%10.3s]\n", str1);
	printf("Width+Prec: ft_printf = %d, printf = %d - %s\n\n", n1, n2, n1 == n2 ? "PASSED" : "FAILED");

	// Dash + Width + Precision
	n1 = ft_printf("ft_printf: Dash + Width + Prec: [%-10.3s]\n", str1);
	n2 = printf("   printf: Dash + Width + Prec: [%-10.3s]\n", str1);
	printf("Dash+W+P: ft_printf = %d, printf = %d - %s\n\n", n1, n2, n1 == n2 ? "PASSED" : "FAILED");

	// Width smaller than precision
	n1 = ft_printf("ft_printf: Width 3 + Precision 5: [%3.5s]\n", str1);
	n2 = printf("   printf: Width 3 + Precision 5: [%3.5s]\n", str1);
	printf("W<Prec: ft_printf = %d, printf = %d - %s\n\n", n1, n2, n1 == n2 ? "PASSED" : "FAILED");

	// Precision 0 (should print nothing)
	n1 = ft_printf("ft_printf: Precision 0: [%.0s]\n", str1);
	n2 = printf("   printf: Precision 0: [%.0s]\n", str1);
	printf("Prec=0: ft_printf = %d, printf = %d - %s\n\n", n1, n2, n1 == n2 ? "PASSED" : "FAILED");

	// NULL with precision
	n1 = ft_printf("ft_printf: NULL + Prec 3: [%.3s]\n", str3);
	n2 = printf("   printf: NULL + Prec 3: [%.3s]\n", str3);
	printf("NULL+Prec: ft_printf = %d, printf = %d - %s\n\n", n1, n2, n1 == n2 ? "PASSED" : "FAILED");
	printf("============ STRING TESTS FINISHED ============\n\n\n");

	// ---------- INT ----------
	printf("================ INT TESTS ================\n\n");
	n1 = ft_printf("[%%d]: [%d]\n", d);
	n2 = printf("[%%d]: [%d]\n", d);
	printf("[%%d]: ft_printf = %d, printf = %d - ", n1, n2);
	if (n1 ==  n2)
		printf("PASSED.\n\n");
	else
		printf("FAILED.\n\n");

	n1 = ft_printf("[%%d]: [%d]\n", d_neg);
	n2 = printf("[%%d]: [%d]\n", d_neg);
	printf("[%%d]: ft_printf = %d, printf = %d - ", n1, n2);
	if (n1 ==  n2)
		printf("PASSED.\n\n");
	else
		printf("FAILED.\n\n");

	n1 = ft_printf("[%%i]: [%i]\n", i);
	n2 = printf("[%%i]: [%i]\n", i);
	printf("[%%i]: ft_printf = %d, printf = %d - ", n1, n2);
	if (n1 ==  n2)
		printf("PASSED.\n\n");
	else
		printf("FAILED.\n\n");

	n1 = ft_printf("[%%+d]: [%+d]\n", d);
	n2 = printf("[%%+d]: [%+d]\n", d);
	printf("[%%+d]: ft_printf = %d, printf = %d - ", n1, n2);
	if (n1 ==  n2)
		printf("PASSED.\n\n");
	else
		printf("FAILED.\n\n");

	n1 = ft_printf("[%% d]: [% d]\n", d);
	n2 = printf("[%% d]: [% d]\n", d);
	printf("[%% d]: ft_printf = %d, printf = %d - ", n1, n2);
	if (n1 ==  n2)
		printf("PASSED.\n\n");
	else
		printf("FAILED.\n\n");

	n1 = ft_printf("[%%05d]: [%05d]\n", d);
	n2 = printf("[%%05d]: [%05d]\n", d);
	printf("[%%05d]: ft_printf = %d, printf = %d - ", n1, n2);
	if (n1 ==  n2)
		printf("PASSED.\n\n");
	else
		printf("FAILED.\n\n");
	printf("============ INT TESTS FINISHED ============\n\n\n");

	// ---------- UNSIGNED ----------
	printf("================ UNSIGNED INT TESTS ================\n\n");
	n1 = ft_printf("[%%u]: [%u]\n", u);
	n2 = printf("[%%u]: [%u]\n", u);
	printf("[%%u]: ft_printf = %d, printf = %d - ", n1, n2);
	if (n1 ==  n2)
		printf("PASSED.\n\n");
	else
		printf("FAILED.\n\n");

	n1 = ft_printf("[%%05u]: [%05u]\n", u_small);
	n2 = printf("[%%05u]: [%05u]\n", u_small);
	printf("[%%05u]: ft_printf = %d, printf = %d - ", n1, n2);
	if (n1 ==  n2)
		printf("PASSED.\n\n");
	else
		printf("FAILED.\n\n");
	printf("============ UNSIGNED INT TESTS FINISHED ============\n\n\n");

	// ---------- HEX LOWER ----------
	printf("================ HEX LOWER TESTS ================\n\n");
	n1 = ft_printf("[%%x]: [%x]\n", u);
	n2 = printf("[%%x]: [%x]\n", u);
	printf("[%%x]: ft_printf = %d, printf = %d - ", n1, n2);
	if (n1 ==  n2)
		printf("PASSED.\n\n");
	else
		printf("FAILED.\n\n");

	n1 = ft_printf("[%%#x]: [%#x]\n", u);
	n2 = printf("[%%#x]: [%#x]\n", u);
	printf("[%%#x]: ft_printf = %d, printf = %d - ", n1, n2);
	if (n1 ==  n2)
		printf("PASSED.\n\n");
	else
		printf("FAILED.\n\n");
	printf("============ HEX LOWER TESTS FINISHED ============\n\n\n");

	// ---------- HEX UPPER ----------
	printf("================ HEX UPPER TESTS ================\n\n");
	n1 = ft_printf("[%%X]: [%X]\n", u);
	n2 = printf("[%%X]: [%X]\n", u);
	printf("[%%X]: ft_printf = %d, printf = %d - ", n1, n2);
	if (n1 ==  n2)
		printf("PASSED.\n\n");
	else
		printf("FAILED.\n\n");

	n1 = ft_printf("[%%#X]: [%#X]\n", u);
	n2 = printf("[%%#X]: [%#X]\n", u);
	printf("[%%#X]: ft_printf = %d, printf = %d - ", n1, n2);
	if (n1 ==  n2)
		printf("PASSED.\n\n");
	else
		printf("FAILED.\n\n");
	printf("============ HEX UPPER TESTS FINISHED ============\n\n\n");

	// ---------- PERCENT ----------
	printf("================ PERCENT TESTS ================\n\n");
	n1 = ft_printf("[%%%%]: [%%]\n");
	n2 = printf("[%%%%]: [%%]\n");
	printf("[%%%%]: ft_printf = %d, printf = %d - ", n1, n2);
	if (n1 ==  n2)
		printf("PASSED.\n\n");
	else
		printf("FAILED.\n\n");
	printf("============ PERCENT TESTS FINISHED ============\n\n\n");

	// ---------- POINTER ----------
	printf("================ POINTER TESTS ================\n\n");
	n1 = ft_printf("[%%p]: [%p]\n", ptr);
	n2 = printf("[%%p]: [%p]\n", ptr);
	printf("[%%p]: ft_printf = %d, printf = %d - ", n1, n2);
	if (n1 ==  n2)
		printf("PASSED.\n\n");
	else
		printf("FAILED.\n\n");

	n1 = ft_printf("[NULL ptr]: [%p]\n", null_ptr);
	n2 = printf("[NULL ptr]: [%p]\n", null_ptr);
	printf("[NULL ptr]: ft_printf = %d, printf = %d - ", n1, n2);
	if (n1 ==  n2)
		printf("PASSED.\n\n");
	else
		printf("FAILED.\n\n");
	printf("============ POINTER TESTS FINISHED ============\n\n\n");

	return (0);
}
