#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Sort)
{
  RUN_TEST_CASE(Sort, Random1);
  RUN_TEST_CASE(Sort, Random2);
  RUN_TEST_CASE(Sort, Random3);
  RUN_TEST_CASE(Sort, Random4);
  RUN_TEST_CASE(Sort, Random5);
  RUN_TEST_CASE(Sort, Random6);
  RUN_TEST_CASE(Sort, Ascending1);
  RUN_TEST_CASE(Sort, Ascending2);
  RUN_TEST_CASE(Sort, Ascending3);
  RUN_TEST_CASE(Sort, Ascending4);
  // RUN_TEST_CASE(Sort, Ascending5);
  RUN_TEST_CASE(Sort, Ascending6);
  RUN_TEST_CASE(Sort, Descending1);
  RUN_TEST_CASE(Sort, Descending2);
  RUN_TEST_CASE(Sort, Descending3);
  RUN_TEST_CASE(Sort, Descending4);
  RUN_TEST_CASE(Sort, Descending5);
  RUN_TEST_CASE(Sort, Descending6);
  RUN_TEST_CASE(Sort, Almost1);
  RUN_TEST_CASE(Sort, Almost2);
  RUN_TEST_CASE(Sort, Almost3);
  RUN_TEST_CASE(Sort, Almost4);
  RUN_TEST_CASE(Sort, Almost5);
  RUN_TEST_CASE(Sort, Almost6);
  RUN_TEST_CASE(Sort, cov);
  RUN_TEST_CASE(Sort, print);
  RUN_TEST_CASE(Sort, Nothing);
  RUN_TEST_CASE(Sort, Only1);
  RUN_TEST_CASE(Sort, Negative);
  RUN_TEST_CASE(Sort, Limits1);
  RUN_TEST_CASE(Sort, Limits2);
  RUN_TEST_CASE(Sort, Limits3);
  RUN_TEST_CASE(Sort, Limits4);
  RUN_TEST_CASE(Sort, Limits5);
  RUN_TEST_CASE(Sort, Limits6);
  RUN_TEST_CASE(Sort, Different1);
  RUN_TEST_CASE(Sort, Different2);
  RUN_TEST_CASE(Sort, Different3);
  RUN_TEST_CASE(Sort, Different4);
  // RUN_TEST_CASE(Sort, Different5);
  RUN_TEST_CASE(Sort, Different6);

}
