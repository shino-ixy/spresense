#include <stdio.h>

#ifdef CONFIG_EXTERNALS_SAMPLE_EXTLIB_DEBUGON
#define DPRINT_DEBUG(...)    \
	{\
	printf("DEBUG:   %s L#%d ", __func__, __LINE__);  \
	printf(__VA_ARGS__); \
	printf("\n"); \
	}
#else /* CONFIG_EXTERNALS_SAMPLE_EXTLIB_DEBUGON */
#define DPRINT_DEBUG(...)
#endif /* CONFIG_EXTERNALS_SAMPLE_EXTLIB_DEBUGON */

/**
 * @brief Sample Add function
 * 
 * @param a input
 * @param b input
 * @return int output a + b
 */
int sample_extlib_add(int a, int b)
{
    int c;
    c = a + b;
    DPRINT_DEBUG("(a:%d) + (b:%d) = (c:%d)\n", a, b, c);
    return c;
}