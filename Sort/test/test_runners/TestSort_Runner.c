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
  RUN_TEST_CASE(Sort, Ascending5);
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
}
