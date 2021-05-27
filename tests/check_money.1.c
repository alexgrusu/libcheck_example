#include <config.h>
#include <stdlib.h>
#include <stdint.h>
#include <check.h>
#include <stdio.h>
#include "../src/money.h"
#include "common.h"

START_TEST(test_money_create_invalid_currency)
{
    Money *m = money_create(10, "");

    ck_assert_msg(m == NULL,
                  "NULL should be returned on attempt to create with "
                  "an invalid currency");
}
END_TEST

Suite *money_suite_exceptions(void)
{
    Suite *s;
    TCase *tc_exceptions;

    s = suite_create("Money Exceptions");

    /* Exceptions test case */
    tc_exceptions = tcase_create("Exceptions");

    tcase_add_test(tc_exceptions, test_money_create_invalid_currency);

    suite_add_tcase(s, tc_exceptions);

    return s;
}
