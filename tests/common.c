#include "../src/money.h"

Money *five_dollars;

void setup(void)
{
    five_dollars = money_create(5, "USD");
}

void teardown(void)
{
    money_free(five_dollars);
}
