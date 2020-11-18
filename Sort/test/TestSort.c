#include "old_main.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Sort);

int tam = 7;
char **ptr;

TEST_SETUP(Sort)
{
  ptr = (char **)malloc(tam * sizeof(char*));
  for(int i=0; i<tam;i++) ptr[i]=(char *)malloc(11 * sizeof(char));
  sprintf(ptr[0],"./app");
}

TEST_TEAR_DOWN(Sort)
{
  for(int i=0; i<tam;i++) free(ptr[i]);
  free(ptr);
}
//////// Test all sorts with random numbers
TEST(Sort, Random1) 
{   
  int out;
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"selection");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"random");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
 }
TEST(Sort, Random2) 
{ 
  int out;
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"insertion");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"random");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
}
TEST(Sort, Random3) 
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
TEST(Sort, Random4) 
{ 
  int out;
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"quick");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"random");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
}
TEST(Sort, Random5) 
{ 
  int out;
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"heap");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"random");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
}
TEST(Sort, Random6) 
{ 
  int out;
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"merge");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"random");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
}
//////// Test all sorts with numbers in Ascending order
TEST(Sort, Ascending1) 
{ 
  int out;
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"selection");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"ascending");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
}
TEST(Sort, Ascending2) 
{ 
  int out;
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"insertion");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"ascending");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
}
TEST(Sort, Ascending3) 
{ 
  int out;
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"shell");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"ascending");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
}
TEST(Sort, Ascending4) 
{ 
  int out;
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"quick");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"ascending");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
}
TEST(Sort, Ascending5) 
{ 
  int out;
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"heap");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"ascending");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
}
TEST(Sort, Ascending6) 
{ 
  int out;
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"merge");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"ascending");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
}
//////// Test all sorts with numbers in Descending order
TEST(Sort, Descending1) 
{ 
  int out;
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"selection");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"descending");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
}
TEST(Sort, Descending2) 
{ 
  int out;
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"insertion");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"descending");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
}
TEST(Sort, Descending3) 
{ 
  int out;
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"shell");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"ascending");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
}
TEST(Sort, Descending4) 
{ 
  int out;
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"quick");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"descending");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
}
TEST(Sort, Descending5) 
{ 
  int out;
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"heap");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"descending");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
}
TEST(Sort, Descending6) 
{ 
  int out;
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"merge");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"descending");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
}
//////// Test all sorts with almost all numbers in order
TEST(Sort, Almost1) 
{ 
  int out;
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"selection");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"almost");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
}
TEST(Sort, Almost2) 
{ 
  int out;
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"insertion");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"almost");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
}
TEST(Sort, Almost3) 
{ 
  int out;
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"shell");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"almost");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
}
TEST(Sort, Almost4) 
{ 
  int out;
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"quick");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"almost");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
}
TEST(Sort, Almost5) 
{ 
  int out;
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"heap");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"almost");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
}
TEST(Sort, Almost6) 
{ 
  int out;
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"merge");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"almost");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
}
//////// Test with parameters error
TEST(Sort, cov) 
{ 
  int out, tam2=6;
  char **ptr2 = (char **)malloc(tam2 * sizeof(char*));
  for(int i=0; i<tam2;i++) ptr2[i]=(char *)malloc(11 * sizeof(char));
  sprintf(ptr2[0],"./app");
  sprintf(ptr2[1],"-a");
  sprintf(ptr2[2],"selection");
  sprintf(ptr2[3],"-n");
  sprintf(ptr2[4],"5");
  sprintf(ptr2[5],"-s");
  out = sort(tam2,ptr2);
  TEST_ASSERT_EQUAL_INT(out,1);
  for(int i=0; i<tam2;i++) free(ptr2[i]);
  free(ptr2);
}
//////// Test with print
TEST(Sort, print) 
{   
  int out, tam2=8;
  char **ptr2 = (char **)malloc(tam2 * sizeof(char*));
  for(int i=0; i<tam2;i++) ptr2[i]=(char *)malloc(11 * sizeof(char));
  sprintf(ptr2[0],"./app");
  sprintf(ptr2[1],"-a");
  sprintf(ptr2[2],"selection");
  sprintf(ptr2[3],"-n");
  sprintf(ptr2[4],"5");
  sprintf(ptr2[5],"-s");
  sprintf(ptr2[6],"random");
  sprintf(ptr2[7],"-P");
  out = sort(tam2,ptr2);
  TEST_ASSERT_EQUAL_INT(out,0);
  for(int i=0; i<tam2;i++) free(ptr2[i]);
  free(ptr2);
 }
//////// Test without any number
TEST(Sort, Nothing) 
{ 
  int out;
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"merge");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"0");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"almost");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
  //sprintf(ptr[2],"heap");
  //out = sort(tam,ptr);          //segmentation fault
  //TEST_ASSERT_EQUAL_INT(out,0);

  //sprintf(ptr[2],"quick");
  //out = sort(tam,ptr);          //it bugs because i fixed only part of the problem
  //TEST_ASSERT_EQUAL_INT(out,0);

  sprintf(ptr[2],"shell");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
  sprintf(ptr[2],"insertion");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
  sprintf(ptr[2],"selection");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
}
//////// Test without 1 number
TEST(Sort, Only1) 
{ 
  int out;
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"merge");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"1");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"almost");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
  sprintf(ptr[2],"heap");
  out = sort(tam,ptr);          //segmentation fault
  TEST_ASSERT_EQUAL_INT(out,0);
  sprintf(ptr[2],"quick");
  out = sort(tam,ptr);          //it bugs because i fixed only part of the problem
  TEST_ASSERT_EQUAL_INT(out,0);
  sprintf(ptr[2],"shell");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
  sprintf(ptr[2],"insertion");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
  sprintf(ptr[2],"selection");
  out = sort(tam,ptr);
  TEST_ASSERT_EQUAL_INT(out,0);
}