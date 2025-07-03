#include "../ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int n1, n2;
	int d = 42;
	int pos = 42;
	int zero = 0;
	int imax = INT_MAX;
	int imin = INT_MIN;
	char c = 'A';
	char *s = "hello";
	void *p = (void *)0x1234;
	unsigned int u = 300;
	int neg = -42;
	unsigned int u1 = 0;
	unsigned int u2 = 1;
	unsigned int max = UINT_MAX;
	void *ptr = (void *)0x42;

/*	printf("==== Testing - (minus) flag ====\n\n");

	// %c
	n1 = ft_printf("ft_printf: [%-5c]\n", c);
	n2 = printf("   printf: [%-5c]\n", c);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// %s
	n1 = ft_printf("ft_printf: [%-10.3s]\n", s);
	n2 = printf("   printf: [%-10.3s]\n", s);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	n1 = ft_printf("ft_printf: [%-15.5d]\n", INT_MIN);
	n2 = printf("   printf: [%-15.5d]\n", INT_MIN);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	n1 = ft_printf("ft_printf: [%-15.5d]\n", INT_MAX);
	n2 = printf("   printf: [%-15.5d]\n", INT_MAX);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// %d with +
	n1 = ft_printf("ft_printf: [%-+8.5d]\n", d);
	n2 = printf("   printf: [%-+8.5d]\n", d);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	n1 = ft_printf("ft_printf: [%-+8.5d]\n", INT_MIN);
	n2 = printf("   printf: [%-+8.5d]\n", INT_MIN);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	n1 = ft_printf("ft_printf: [%-+8.5d]\n", INT_MAX);
	n2 = printf("   printf: [%-+8.5d]\n", INT_MAX);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// %i with space
	n1 = ft_printf("ft_printf: [%- 7.3i]\n", d);
	n2 = printf("   printf: [%- 7.3i]\n", d);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// %d with negative number
	n1 = ft_printf("ft_printf: [%- 8.4d]\n", neg);
	n2 = printf("   printf: [%- 8.4d]\n", neg);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// %u
	n1 = ft_printf("ft_printf: [%-8.4u]\n", u);
	n2 = printf("   printf: [%-8.4u]\n", u);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// %x
	n1 = ft_printf("ft_printf: [%-#8.4x]\n", u);
	n2 = printf("   printf: [%-#8.4x]\n", u);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	n1 = ft_printf("ft_printf: [%-#8.3x]\n", u);
	n2 = printf("   printf: [%-#8.3x]\n", u);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	n1 = ft_printf("ft_printf: [%-#8.2x]\n", u);
	n2 = printf("   printf: [%-#8.2x]\n", u);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// %X
	n1 = ft_printf("ft_printf: [%-#10.6X]\n", u);
	n2 = printf("   printf: [%-#10.6X]\n", u);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// %p
	n1 = ft_printf("ft_printf: [%-20p]\n", p);
	n2 = printf("   printf: [%-20p]\n", p);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// %%
//	n1 = ft_printf("ft_printf: [%-5%]\n");
//	n2 = printf("   printf: [%-5%]\n");
//	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");*/

	printf("==== Testing - (minus) flag ====\n\n");

	// %c
	n1 = ft_printf("ft_printf: [%-5c]\n", c);
	n2 = printf("   printf: [%-5c]\n", c);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %s
	n1 = ft_printf("ft_printf: [%-10s]\n", s);
	n2 = printf("   printf: [%-10s]\n", s);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %s with precision (cut off)
	n1 = ft_printf("ft_printf: [%-10.5s]\n", s);
	n2 = printf("   printf: [%-10.5s]\n", s);
	printf("ft_printf: %d | printf: %d - %s (cut off & padded)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d positive
	n1 = ft_printf("ft_printf: [%-6d]\n", d);
	n2 = printf("   printf: [%-6d]\n", d);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d negative
	n1 = ft_printf("ft_printf: [%-6d]\n", neg);
	n2 = printf("   printf: [%-6d]\n", neg);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with precision
	n1 = ft_printf("ft_printf: [%-8.4d]\n", pos);
	n2 = printf("   printf: [%-8.4d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s (zero-padded inside, space outside)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with + flag
	n1 = ft_printf("ft_printf: [%+-6d]\n", pos);
	n2 = printf("   printf: [%+-6d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s (left-aligned with sign)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with space flag
	n1 = ft_printf("ft_printf: [% -6d]\n", pos);
	n2 = printf("   printf: [% -6d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s (space + minus)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %u
	n1 = ft_printf("ft_printf: [%-7u]\n", u);
	n2 = printf("   printf: [%-7u]\n", u);
	printf("ft_printf: %d | printf: %d - %s (left-aligned unsigned)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %u with precision
	n1 = ft_printf("ft_printf: [%-10.6u]\n", u);
	n2 = printf("   printf: [%-10.6u]\n", u);
	printf("ft_printf: %d | printf: %d - %s (zero-padded, left-aligned)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %x
	n1 = ft_printf("ft_printf: [%-8x]\n", u);
	n2 = printf("   printf: [%-8x]\n", u);
	printf("ft_printf: %d | printf: %d - %s (left-aligned hex)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %x with #
	n1 = ft_printf("ft_printf: [%-#10x]\n", u);
	n2 = printf("   printf: [%-#10x]\n", u);
	printf("ft_printf: %d | printf: %d - %s (with 0x prefix, left-aligned)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %X with #
	n1 = ft_printf("ft_printf: [%-#10X]\n", u);
	n2 = printf("   printf: [%-#10X]\n", u);
	printf("ft_printf: %d | printf: %d - %s (with 0x prefix, left-aligned)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %x with precision and #
	n1 = ft_printf("ft_printf: [%-#10.6x]\n", u);
	n2 = printf("   printf: [%-#10.6x]\n", u);
	printf("ft_printf: %d | printf: %d - %s (uppercase hex, padded, with 0X)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %X with precision and #
	n1 = ft_printf("ft_printf: [%-#10.6X]\n", u);
	n2 = printf("   printf: [%-#10.6X]\n", u);
	printf("ft_printf: %d | printf: %d - %s (uppercase hex, padded, with 0X)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %x with precision and #
	n1 = ft_printf("ft_printf: [%-#10.6x]\n", u1);
	n2 = printf("   printf: [%-#10.6x]\n", u1);
	printf("ft_printf: %d | printf: %d - %s (uppercase hex, padded, with 0X)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %X with precision and #
	n1 = ft_printf("ft_printf: [%-#10.6X]\n", u1);
	n2 = printf("   printf: [%-#10.6X]\n", u1);
	printf("ft_printf: %d | printf: %d - %s (uppercase hex, padded, with 0X)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %p
	n1 = ft_printf("ft_printf: [%-20p]\n", p);
	n2 = printf("   printf: [%-20p]\n", p);
	printf("ft_printf: %d | printf: %d - %s (left-aligned pointer)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	n1 = ft_printf("ft_printf: [%-+8.5d]\n", INT_MIN);
	n2 = printf("   printf: [%-+8.5d]\n", INT_MIN);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	n1 = ft_printf("ft_printf: [%-+8.5d]\n", INT_MAX);
	n2 = printf("   printf: [%-+8.5d]\n", INT_MAX);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

/*	printf("==== Testing + (plus) flag ====\n\n");

	// Basic +d
	n1 = ft_printf("ft_printf: [%+d]\n", pos);
	n2 = printf("   printf: [%+d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// Basic +i
	n1 = ft_printf("ft_printf: [%+i]\n", pos);
	n2 = printf("   printf: [%+i]\n", pos);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// +d with negative
	n1 = ft_printf("ft_printf: [%+d]\n", neg);
	n2 = printf("   printf: [%+d]\n", neg);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// +i with negative
	n1 = ft_printf("ft_printf: [%+i]\n", neg);
	n2 = printf("   printf: [%+i]\n", neg);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// +d with 0
	n1 = ft_printf("ft_printf: [%+d]\n", zero);
	n2 = printf("   printf: [%+d]\n", zero);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// +i with INT_MAX
	n1 = ft_printf("ft_printf: [%+i]\n", imax);
	n2 = printf("   printf: [%+i]\n", imax);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// +d with INT_MIN
	n1 = ft_printf("ft_printf: [%+d]\n", imin);
	n2 = printf("   printf: [%+d]\n", imin);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// +d with width
	n1 = ft_printf("ft_printf: [%+5d]\n", pos);
	n2 = printf("   printf: [%+5d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// +d with 0 padding
	n1 = ft_printf("ft_printf: [%+05d]\n", pos);
	n2 = printf("   printf: [%+05d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// +d with precision
	n1 = ft_printf("ft_printf: [%+.5d]\n", pos);
	n2 = printf("   printf: [%+.5d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// +d with width + precision
	n1 = ft_printf("ft_printf: [%+8.4d]\n", pos);
	n2 = printf("   printf: [%+8.4d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// +d with - flag
	n1 = ft_printf("ft_printf: [%-+8d]\n", pos);
	n2 = printf("   printf: [%-+8d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// +d with space flag (space is ignored)
	n1 = ft_printf("ft_printf: [%+ d]\n", pos);
	n2 = printf("   printf: [%+d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");*/

	printf("==== Testing + (plus) flag ====\n\n");

	// %d with positive number
	n1 = ft_printf("ft_printf: [%+d]\n", pos);
	n2 = printf("   printf: [%+d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s (positive number)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with negative number
	n1 = ft_printf("ft_printf: [%+d]\n", neg);
	n2 = printf("   printf: [%+d]\n", neg);
	printf("ft_printf: %d | printf: %d - %s (negative number)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with zero
	n1 = ft_printf("ft_printf: [%+d]\n", zero);
	n2 = printf("   printf: [%+d]\n", zero);
	printf("ft_printf: %d | printf: %d - %s (zero case)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// +i with INT_MAX
	n1 = ft_printf("ft_printf: [%+i]\n", imax);
	n2 = printf("   printf: [%+i]\n", imax);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// +d with INT_MIN
	n1 = ft_printf("ft_printf: [%+d]\n", imin);
	n2 = printf("   printf: [%+d]\n", imin);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2) ? "PASSED" : "FAILED");

	// %i with plus
	n1 = ft_printf("ft_printf: [%+i]\n", pos);
	n2 = printf("   printf: [%+i]\n", pos);
	printf("ft_printf: %d | printf: %d - %s (alias of %%d)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with width
	n1 = ft_printf("ft_printf: [%+6d]\n", pos);
	n2 = printf("   printf: [%+6d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s (width + sign)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with width + negative
	n1 = ft_printf("ft_printf: [%+6d]\n", neg);
	n2 = printf("   printf: [%+6d]\n", neg);
	printf("ft_printf: %d | printf: %d - %s (width + negative)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with precision
	n1 = ft_printf("ft_printf: [%+.5d]\n", pos);
	n2 = printf("   printf: [%+.5d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s (precision + sign)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with width + precision
	n1 = ft_printf("ft_printf: [%+10.5d]\n", pos);
	n2 = printf("   printf: [%+10.5d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s (width + precision + sign)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with + and -
	n1 = ft_printf("ft_printf: [%+-8d]\n", pos);
	n2 = printf("   printf: [%+-8d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s (left-aligned with sign)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with + and 0 (ignored if precision exists)
	n1 = ft_printf("ft_printf: [%+08d]\n", pos);
	n2 = printf("   printf: [%+08d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s (zero-padding with sign)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with + and 0 + precision (zero ignored)
	n1 = ft_printf("ft_printf: [%+08.4d]\n", pos);
	n2 = printf("   printf: [%+8.4d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s (zero ignored due to precision)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %u with +
	n1 = ft_printf("ft_printf: [%+u]\n", u);
	n2 = printf("   printf: [%u]\n", u);
	printf("ft_printf: %d | printf: %d - %s (invalid, + ignored)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %x with +
	n1 = ft_printf("ft_printf: [%+x]\n", u);
	n2 = printf("   printf: [%x]\n", u);
	printf("ft_printf: %d | printf: %d - %s (invalid, + ignored)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %s with +
	n1 = ft_printf("ft_printf: [%+s]\n", s);
	n2 = printf("   printf: [%s]\n", s);
	printf("ft_printf: %d | printf: %d - %s (invalid, + ignored)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %c with +
	n1 = ft_printf("ft_printf: [%+c]\n", c);
	n2 = printf("   printf: [%c]\n", c);
	printf("ft_printf: %d | printf: %d - %s (invalid, + ignored)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

/*	printf("==== Testing # (hash) flag ====\n\n");

	// %x: zero
	n1 = ft_printf("ft_printf: [%#x]\n", u1);
	n2 = printf("   printf: [%#x]\n", u1);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %x: small number
	n1 = ft_printf("ft_printf: [%#x]\n", u2);
	n2 = printf("   printf: [%#x]\n", u2);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %x: max unsigned
	n1 = ft_printf("ft_printf: [%#x]\n", max);
	n2 = printf("   printf: [%#x]\n", max);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %X: small number
	n1 = ft_printf("ft_printf: [%#X]\n", u2);
	n2 = printf("   printf: [%#X]\n", u2);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %X: max unsigned
	n1 = ft_printf("ft_printf: [%#X]\n", max);
	n2 = printf("   printf: [%#X]\n", max);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %#x with width
	n1 = ft_printf("ft_printf: [%#10x]\n", u2);
	n2 = printf("   printf: [%#10x]\n", u2);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %#x with precision
	n1 = ft_printf("ft_printf: [%#.5x]\n", u2);
	n2 = printf("   printf: [%#.5x]\n", u2);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %#x with width + precision
	n1 = ft_printf("ft_printf: [%#10.5x]\n", u2);
	n2 = printf("   printf: [%#10.5x]\n", u2);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %#x with zero-padding
	n1 = ft_printf("ft_printf: [%#010x]\n", u2);
	n2 = printf("   printf: [%#010x]\n", u2);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %#x with left-align
	n1 = ft_printf("ft_printf: [%-#10x]\n", u2);
	n2 = printf("   printf: [%-#10x]\n", u2);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));*/

	printf("==== Testing # (hash) flag ====\n\n");

	// %x with #
	n1 = ft_printf("ft_printf: [%#x]\n", u);
	n2 = printf("   printf: [%#x]\n", u);
	printf("ft_printf: %d | printf: %d - %s (0x prefix expected)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %X with #
	n1 = ft_printf("ft_printf: [%#X]\n", u);
	n2 = printf("   printf: [%#X]\n", u);
	printf("ft_printf: %d | printf: %d - %s (0X prefix expected)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	n1 = ft_printf("ft_printf: [%#x]\n", u2);
	n2 = printf("   printf: [%#x]\n", u2);
	printf("ft_printf: %d | printf: %d - %s (0x prefix expected)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %X with #
	n1 = ft_printf("ft_printf: [%#X]\n", u2);
	n2 = printf("   printf: [%#X]\n", u2);
	printf("ft_printf: %d | printf: %d - %s (0X prefix expected)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %x with # and value = 0
	n1 = ft_printf("ft_printf: [%#x]\n", u1);
	n2 = printf("   printf: [%#x]\n", u1);
	printf("ft_printf: %d | printf: %d - %s (no prefix on 0)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %x with # and width
	n1 = ft_printf("ft_printf: [%#8x]\n", u);
	n2 = printf("   printf: [%#8x]\n", u);
	printf("ft_printf: %d | printf: %d - %s (right-align with 0x)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %x with # and -
	n1 = ft_printf("ft_printf: [%#-8x]\n", u);
	n2 = printf("   printf: [%#-8x]\n", u);
	printf("ft_printf: %d | printf: %d - %s (left-align with 0x)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %x with # and 0 flag
	n1 = ft_printf("ft_printf: [%#08x]\n", u);
	n2 = printf("   printf: [%#08x]\n", u);
	printf("ft_printf: %d | printf: %d - %s (zero-padded with 0x prefix)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %x with # and precision
	n1 = ft_printf("ft_printf: [%#.5x]\n", u);
	n2 = printf("   printf: [%#.5x]\n", u);
	printf("ft_printf: %d | printf: %d - %s (precision overrides 0 padding)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %x with #, 0, and precision (0 ignored)
	n1 = ft_printf("ft_printf: [%#08.4x]\n", u);
	n2 = printf("   printf: [%#8.4x]\n", u);
	printf("ft_printf: %d | printf: %d - %s (0 ignored, prefix included)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %x with width, #, and precision
	n1 = ft_printf("ft_printf: [%#10.6x]\n", u);
	n2 = printf("   printf: [%#10.6x]\n", u);
	printf("ft_printf: %d | printf: %d - %s (prefix + padded to precision, then width)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %X with width, #, and precision
	n1 = ft_printf("ft_printf: [%#10.6X]\n", u);
	n2 = printf("   printf: [%#10.6X]\n", u);
	printf("ft_printf: %d | printf: %d - %s (uppercase variant)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %x with # and 0 value + precision = 0 (should not show 0x)
	n1 = ft_printf("ft_printf: [%#.0x]\n", 0);
	n2 = printf("   printf: [%#.0x]\n", 0);
	printf("ft_printf: %d | printf: %d - %s (should be empty)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %x: max unsigned
	n1 = ft_printf("ft_printf: [%#x]\n", max);
	n2 = printf("   printf: [%#x]\n", max);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %X: max unsigned
	n1 = ft_printf("ft_printf: [%#X]\n", max);
	n2 = printf("   printf: [%#X]\n", max);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

/*	printf("==== Testing 0 (zero) flag ====\n\n");

	// %d with zero-padding
	n1 = ft_printf("ft_printf: [%05d]\n", pos);
	n2 = printf("   printf: [%05d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with negative number
	n1 = ft_printf("ft_printf: [%05d]\n", neg);
	n2 = printf("   printf: [%05d]\n", neg);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with zero + precision → precision overrides zero
	n1 = ft_printf("ft_printf: [%05.3d]\n", pos);
	n2 = printf("   printf: [%5.3d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with zero + precision → precision overrides zero
	n1 = ft_printf("ft_printf: [%05.3d]\n", neg);
	n2 = printf("   printf: [%5.3d]\n", neg);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %i with zero-padding
	n1 = ft_printf("ft_printf: [%05i]\n", pos);
	n2 = printf("   printf: [%05i]\n", pos);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %u with zero-padding
	n1 = ft_printf("ft_printf: [%010u]\n", u);
	n2 = printf("   printf: [%010u]\n", u);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %x with zero-padding
	n1 = ft_printf("ft_printf: [%08x]\n", u);
	n2 = printf("   printf: [%08x]\n", u);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %X with zero-padding
	n1 = ft_printf("ft_printf: [%08X]\n", u);
	n2 = printf("   printf: [%08X]\n", u);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %x with zero + hash flag
	n1 = ft_printf("ft_printf: [%#010x]\n", u);
	n2 = printf("   printf: [%#010x]\n", u);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %x with zero + precision (zero ignored)
	n1 = ft_printf("ft_printf: [%#010.4x]\n", u);
	n2 = printf("   printf: [%#10.4x]\n", u);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with zero and + flag
	n1 = ft_printf("ft_printf: [%+07d]\n", pos);
	n2 = printf("   printf: [%+07d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with zero and space flag
	n1 = ft_printf("ft_printf: [% 07d]\n", pos);
	n2 = printf("   printf: [% 07d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %p with zero (technically undefined, test anyway)
	n1 = ft_printf("ft_printf: [%020p]\n", ptr);
	n2 = printf("   printf: [%20p]\n", ptr);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));*/


	printf("==== Testing 0 (zero) flag ====\n\n");

	// %d with 0 and width
	n1 = ft_printf("ft_printf: [%05d]\n", pos);
	n2 = printf("   printf: [%05d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s (zero-padded int)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with 0 and width, negative
	n1 = ft_printf("ft_printf: [%05d]\n", neg);
	n2 = printf("   printf: [%05d]\n", neg);
	printf("ft_printf: %d | printf: %d - %s (negative number padded)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with 0 and precision (0 ignored)
	n1 = ft_printf("ft_printf: [%08.4d]\n", pos);
	n2 = printf("   printf: [%8.4d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s (0 ignored due to precision)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with + and 0
	n1 = ft_printf("ft_printf: [%+07d]\n", pos);
	n2 = printf("   printf: [%+07d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s (sign and zero-padding)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with space and 0
	n1 = ft_printf("ft_printf: [% 07d]\n", pos);
	n2 = printf("   printf: [% 07d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s (space + zero)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with - and 0 (zero ignored)
	n1 = ft_printf("ft_printf: [%-07d]\n", pos);
	n2 = printf("   printf: [%-7d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s (- overrides zero)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %u with 0
	n1 = ft_printf("ft_printf: [%05u]\n", u);
	n2 = printf("   printf: [%05u]\n", u);
	printf("ft_printf: %d | printf: %d - %s (unsigned zero-padding)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %u with precision (0 ignored)
	n1 = ft_printf("ft_printf: [%010.4u]\n", u);
	n2 = printf("   printf: [%10.4u]\n", u);
	printf("ft_printf: %d | printf: %d - %s (0 ignored by precision)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %x with 0
	n1 = ft_printf("ft_printf: [%08x]\n", u);
	n2 = printf("   printf: [%08x]\n", u);
	printf("ft_printf: %d | printf: %d - %s (hex zero-padded)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %x with # and 0
	n1 = ft_printf("ft_printf: [%#08x]\n", u);
	n2 = printf("   printf: [%#08x]\n", u);
	printf("ft_printf: %d | printf: %d - %s (# + zero + hex)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %x with # + 0 + precision
	n1 = ft_printf("ft_printf: [%#010.4x]\n", u);
	n2 = printf("   printf: [%#10.4x]\n", u);
	printf("ft_printf: %d | printf: %d - %s (0 ignored due to precision, prefix preserved)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %X with 0 and #
	n1 = ft_printf("ft_printf: [%#08X]\n", u);
	n2 = printf("   printf: [%#08X]\n", u);
	printf("ft_printf: %d | printf: %d - %s (uppercase hex zero-padded)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %p with 0 (GNU will throw warning)
	n1 = ft_printf("ft_printf: [%020p]\n", ptr);
	n2 = printf("   printf: [%20p]\n", ptr);
	printf("ft_printf: %d | printf: %d - %s (likely warning, check valgrind)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %s with 0 (ignored)
	n1 = ft_printf("ft_printf: [%03s]\n", s);
	n2 = printf("   printf: [%3s]\n", s);
	printf("ft_printf: %d | printf: %d - %s (zero ignored for strings)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %c with 0 (ignored)
	n1 = ft_printf("ft_printf: [%05c]\n", c);
	n2 = printf("   printf: [%5c]\n", c);
	printf("ft_printf: %d | printf: %d - %s (zero ignored for char)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

/*	printf("==== Testing ' ' (space) flag ====\n\n");

	// %d with positive number
	n1 = ft_printf("ft_printf: [% d]\n", pos);
	n2 = printf("   printf: [% d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with negative number
	n1 = ft_printf("ft_printf: [% d]\n", neg);
	n2 = printf("   printf: [% d]\n", neg);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with zero
	n1 = ft_printf("ft_printf: [% d]\n", zero);
	n2 = printf("   printf: [% d]\n", zero);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %i with space flag
	n1 = ft_printf("ft_printf: [% i]\n", pos);
	n2 = printf("   printf: [% i]\n", pos);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with width and space
	n1 = ft_printf("ft_printf: [% 5d]\n", pos);
	n2 = printf("   printf: [% 5d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with precision and space
	n1 = ft_printf("ft_printf: [% .5d]\n", pos);
	n2 = printf("   printf: [% .5d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with space and +
	n1 = ft_printf("ft_printf: [% +d]\n", pos);
	n2 = printf("   printf: [%+d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s (space ignored by +)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %u with space (no effect)
	n1 = ft_printf("ft_printf: [% u]\n", u);
	n2 = printf("   printf: [%u]\n", u);
	printf("ft_printf: %d | printf: %d - %s (space ignored)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %x with space (no effect)
	n1 = ft_printf("ft_printf: [% x]\n", u);
	n2 = printf("   printf: [%x]\n", u);
	printf("ft_printf: %d | printf: %d - %s (space ignored)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %c with space (no effect)
	n1 = ft_printf("ft_printf: [% c]\n", c);
	n2 = printf("   printf: [%c]\n", c);
	printf("ft_printf: %d | printf: %d - %s (space ignored)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %s with space (no effect)
	n1 = ft_printf("ft_printf: [% s]\n", s);
	n2 = printf("   printf: [%s]\n", s);
	printf("ft_printf: %d | printf: %d - %s (space ignored)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));*/

	printf("==== Testing space ( ) flag ====\n\n");

	// %d with space
	n1 = ft_printf("ft_printf: [% d]\n", pos);
	n2 = printf("   printf: [% d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s (positive number, expect space)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with space and negative
	n1 = ft_printf("ft_printf: [% d]\n", neg);
	n2 = printf("   printf: [% d]\n", neg);
	printf("ft_printf: %d | printf: %d - %s (negative number, space ignored)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with space and zero
	n1 = ft_printf("ft_printf: [% d]\n", zero);
	n2 = printf("   printf: [% d]\n", zero);
	printf("ft_printf: %d | printf: %d - %s (zero is positive, expect space)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %i with space
	n1 = ft_printf("ft_printf: [% i]\n", pos);
	n2 = printf("   printf: [% i]\n", pos);
	printf("ft_printf: %d | printf: %d - %s (alias of %%d)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with width
	n1 = ft_printf("ft_printf: [% 6d]\n", pos);
	n2 = printf("   printf: [% 6d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s (space + width)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with 0 + space
	n1 = ft_printf("ft_printf: [% 06d]\n", pos);
	n2 = printf("   printf: [% 06d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s (space + 0-padding)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with space + precision
	n1 = ft_printf("ft_printf: [% .5d]\n", pos);
	n2 = printf("   printf: [% .5d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s (space with precision)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with space + width + precision
	n1 = ft_printf("ft_printf: [% 8.5d]\n", pos);
	n2 = printf("   printf: [% 8.5d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s (space + width + precision)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with space + -
	n1 = ft_printf("ft_printf: [% -6d]\n", pos);
	n2 = printf("   printf: [% -6d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s (space + left-align)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with space + +
	n1 = ft_printf("ft_printf: [% +d]\n", pos);
	n2 = printf("   printf: [%+d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s (+ overrides space)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %u with space (invalid)
	n1 = ft_printf("ft_printf: [% u]\n", u);
	n2 = printf("   printf: [%u]\n", u);
	printf("ft_printf: %d | printf: %d - %s (ignored for unsigned)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %x with space (invalid)
	n1 = ft_printf("ft_printf: [% x]\n", u);
	n2 = printf("   printf: [%x]\n", u);
	printf("ft_printf: %d | printf: %d - %s (ignored for hex)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %c with space (ignored)
	n1 = ft_printf("ft_printf: [% c]\n", c);
	n2 = printf("   printf: [%c]\n", c);
	printf("ft_printf: %d | printf: %d - %s (ignored for char)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %s with space (ignored)
	n1 = ft_printf("ft_printf: [% s]\n", s);
	n2 = printf("   printf: [%s]\n", s);
	printf("ft_printf: %d | printf: %d - %s (ignored for string)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

/*	printf("==== Testing . (precision) flag ====\n\n");

	// %d with precision
	n1 = ft_printf("ft_printf: [%.5d]\n", pos);
	n2 = printf("   printf: [%.5d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with precision and negative number
	n1 = ft_printf("ft_printf: [%.5d]\n", neg);
	n2 = printf("   printf: [%.5d]\n", neg);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with precision = 0 and value = 0 (should print nothing)
	n1 = ft_printf("ft_printf: [%.0d]\n", 0);
	n2 = printf("   printf: [%.0d]\n", 0);
	printf("ft_printf: %d | printf: %d - %s (zero with .0)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %i with precision
	n1 = ft_printf("ft_printf: [%.4i]\n", pos);
	n2 = printf("   printf: [%.4i]\n", pos);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %u with precision
	n1 = ft_printf("ft_printf: [%.6u]\n", u);
	n2 = printf("   printf: [%.6u]\n", u);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %x with precision
	n1 = ft_printf("ft_printf: [%.5x]\n", u);
	n2 = printf("   printf: [%.5x]\n", u);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %X with precision
	n1 = ft_printf("ft_printf: [%.5X]\n", u);
	n2 = printf("   printf: [%.5X]\n", u);
	printf("ft_printf: %d | printf: %d - %s\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %s with precision
	n1 = ft_printf("ft_printf: [%.3s]\n", s);
	n2 = printf("   printf: [%.3s]\n", s);
	printf("ft_printf: %d | printf: %d - %s (string cut-off)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %s with precision greater than length
	n1 = ft_printf("ft_printf: [%.20s]\n", s);
	n2 = printf("   printf: [%.20s]\n", s);
	printf("ft_printf: %d | printf: %d - %s (string not cut-off)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %s with precision 0
	n1 = ft_printf("ft_printf: [%.0s]\n", s);
	n2 = printf("   printf: [%.0s]\n", s);
	printf("ft_printf: %d | printf: %d - %s (empty string expected)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %c with precision (undefined but test anyway)
	n1 = ft_printf("ft_printf: [%.5c]\n", c);
//	n2 = printf("   printf: [%.5c]\n", c);
//	printf("ft_printf: %d | printf: %d - %s (should ignore precision)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %p with precision (undefined but test anyway)
	n1 = ft_printf("ft_printf: [%.10p]\n", ptr);
//	n2 = printf("   printf: [%.10p]\n", ptr);
//	printf("ft_printf: %d | printf: %d - %s (may be platform-specific)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));*/

	printf("==== Testing . (precision) flag ====\n\n");

	// %d with precision
	n1 = ft_printf("ft_printf: [%.5d]\n", pos);
	n2 = printf("   printf: [%.5d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s (pads with zeros)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with precision and negative number
	n1 = ft_printf("ft_printf: [%.5d]\n", neg);
	n2 = printf("   printf: [%.5d]\n", neg);
	printf("ft_printf: %d | printf: %d - %s (negative sign preserved, digits padded)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with precision = 0 and zero value
	n1 = ft_printf("ft_printf: [%.0d]\n", 0);
	n2 = printf("   printf: [%.0d]\n", 0);
	printf("ft_printf: %d | printf: %d - %s (nothing should print)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %d with width and precision
	n1 = ft_printf("ft_printf: [%8.5d]\n", pos);
	n2 = printf("   printf: [%8.5d]\n", pos);
	printf("ft_printf: %d | printf: %d - %s (pad to precision, then width)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %u with precision
	n1 = ft_printf("ft_printf: [%.4u]\n", u);
	n2 = printf("   printf: [%.4u]\n", u);
	printf("ft_printf: %d | printf: %d - %s (unsigned padding)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %u with precision = 0 and value = 0
	n1 = ft_printf("ft_printf: [%.0u]\n", 0);
	n2 = printf("   printf: [%.0u]\n", 0);
	printf("ft_printf: %d | printf: %d - %s (empty result)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %x with precision
	n1 = ft_printf("ft_printf: [%.6x]\n", u);
	n2 = printf("   printf: [%.6x]\n", u);
	printf("ft_printf: %d | printf: %d - %s (hex padded to precision)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %x with precision = 0 and value = 0
	n1 = ft_printf("ft_printf: [%.0x]\n", 0);
	n2 = printf("   printf: [%.0x]\n", 0);
	printf("ft_printf: %d | printf: %d - %s (nothing printed)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %X with precision
	n1 = ft_printf("ft_printf: [%.4X]\n", u);
	n2 = printf("   printf: [%.4X]\n", u);
	printf("ft_printf: %d | printf: %d - %s (uppercase hex padded)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %p with precision (some platforms may behave differently)
//	n1 = ft_printf("ft_printf: [%20.0p]\n", ptr);
//	n2 = printf("   printf: [%20.0p]\n", ptr);
//	printf("ft_printf: %d | printf: %d - %s (pointer with width + dot)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %s with precision (truncate)
	n1 = ft_printf("ft_printf: [%.3s]\n", s);
	n2 = printf("   printf: [%.3s]\n", s);
	printf("ft_printf: %d | printf: %d - %s (truncate string)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %s with precision = 0
	n1 = ft_printf("ft_printf: [%.0s]\n", s);
	n2 = printf("   printf: [%.0s]\n", s);
	printf("ft_printf: %d | printf: %d - %s (print nothing)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %s with precision > string length
	n1 = ft_printf("ft_printf: [%.10s]\n", s);
	n2 = printf("   printf: [%.10s]\n", s);
	printf("ft_printf: %d | printf: %d - %s (no truncation)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	// %c with precision (ignored)
//	n1 = ft_printf("ft_printf: [%.3c]\n", c);
//	n2 = printf("   printf: [%.3c]\n", c);
//	printf("ft_printf: %d | printf: %d - %s (precision ignored)\n\n", n1, n2, (n1 == n2 ? "PASSED" : "FAILED"));

	return (0);
}
