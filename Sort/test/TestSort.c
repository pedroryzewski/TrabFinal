#include "old_main.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Sort);

int tam = 8;
char **ptr;

TEST_SETUP(Sort)
{
  ptr = (char **)malloc(tam * sizeof(char*));
  for(int i=0; i<tam;i++) ptr[i]=(char *)malloc(10 * sizeof(char));
  sprintf(ptr[0],"./app");
  sprintf(ptr[7],"-P");
}

TEST_TEAR_DOWN(Sort)
{
  for(int i=0; i<tam;i++) free(ptr[i]);
  free(ptr);
}

TEST(Sort, Test1) //Test if the function doesn't returns null
{ 
  int out;
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"shell");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"random");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
}

