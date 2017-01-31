#include<stdio.h>
#include<check.h>
#include "roman_ops.h"

START_TEST(test_dec_of_roman_digit)
{
    ck_assert_int_eq(retDec('V'),5);
    ck_assert_int_eq(retDec('v'),5);
    ck_assert_int_eq(retDec('i'),1);
    ck_assert_int_eq(retDec('x'),10);
}
END_TEST

Suite *roman_test_suite(){

    Suite *s;
    TCase *test_case;
    test_case = tcase_create("Head case");
    s = suite_create("Roman test suite");

    tcase_add_test(test_case, test_dec_of_roman_digit);
    suite_add_tcase(s, test_case);

    return s;

}


int main(){
	
	Suite *s = roman_test_suite();
    SRunner *sr = srunner_create(s);
    srunner_run_all(sr,CK_NORMAL);
	return 0;
}

