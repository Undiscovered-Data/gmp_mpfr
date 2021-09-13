#include <stdio.h>
#include <gmp.h>
#include <mpfr.h>

int main(void) {
    char data[255];
    mp_exp_t exponent;
    unsigned long in_number = 500;
    unsigned long precision = 40;
    mpfr_t the_sqrt;
	mpfr_init2(the_sqrt, precision);

    mpfr_sqrt_ui(the_sqrt, in_number, MPFR_RNDN);
    mpfr_get_str((char *) &data, &exponent, 10, precision, the_sqrt, MPFR_RNDN);

    printf("The result \n \t%s\n", data);
    printf("The exponent \n \t%li\n", exponent);

    mpfr_clear(the_sqrt);
    mpfr_free_cache();
}
