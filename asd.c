#include "CUnit.h"
#include "Basic.h"
#include "Automated.h"

int maxi(int i1, int i2)
{
    return (i1 > i2) ? i1 : i2;
//adding extra line
}

void test_maxi(void)
{
    CU_ASSERT(maxi(0,2) == 2);
    CU_ASSERT(maxi(1,6) == 7);

}

int main() {


    CU_initialize_registry();
    CU_pSuite suite = CU_add_suite("maxi_test", 0, 0);

    CU_add_test(suite, "maxi_fun", test_maxi);

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_set_output_filename("test_res");
    CU_automated_run_tests();

    CU_basic_run_tests();

    CU_cleanup_registry();

    return 0;
}
